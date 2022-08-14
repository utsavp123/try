const express = require('express')
const request = require('request')
const hbs = require('hbs')
const path = require('path')

const app = express()
const publicDirectoryPath = path.join(__dirname, './public')
const veiwChang = path.join(__dirname, './tamplates/views')
const partial = path.join(__dirname, './tamplates/partials')
app.set('view engine', 'hbs')
app.set('views', veiwChang)
hbs.registerPartials(partial)
app.use(express.static(publicDirectoryPath))

app.get('', (req, res) => {
    res.render('index', {
        title: 'Weather',
        name: 'Naruto'
    })
})
app.get('/weather', (req, res) => {
    geocode(req.query.name, (error, {latitute,longtute,place_name  }={}) => {
        if (error) {
             return res.send({
                error: error
            })
        }
        else {
            forcast(longtute, latitute, (error, data , cloud) => {
                return res.send({
                    place_name: place_name,
                    Temperature: data,
                    main: cloud})
            })
        }
    })
})

const geocode = (address, callBack) => {
    url = 'https://api.mapbox.com/geocoding/v5/mapbox.places/' + encodeURIComponent(address) + '.json?access_token=pk.eyJ1IjoidXRzYXZwYXJtYXIiLCJhIjoiY2w2MW1kN3hlMDJqaTNibHZic2VrajJvMyJ9.bD5F3wyWwXaztNnwg6eknQ&limit=1'
    request({ url, json: true }, (error, { body }) => {
        if(error){
            callBack('Unablee to try connection ' , undefined)
        }
        else if (body.features.length === 0){
            callBack('Unablee find location ' , undefined)
        }
        else {
            callBack(null, {
                latitute: body.features[0].center[0],
                longtute: body.features[0].center[1],
                place_name : body.features[0].place_name,
            })
        }
    })
}
const forcast = (latitude, longitude, callBack) => {
    url = 'https://openweathermap.org/data/2.5/onecall?lat=' + latitude + '&lon=' + longitude + '&units=metric&appid=439d4b804bc8187953eb36d2a8c26a02'
    request({ url, json: true }, (error, { body }) => {
        if (error) {
            callBack('adsdass', undefined)
        }
        else {
            let temperature = body.current.temp;
            let cloud = body.current.weather[0].main;
            callBack(undefined, temperature, cloud)
        }
    })
}
app.listen(3001, () => {
    console.log('Server is up on port 3001.')
})