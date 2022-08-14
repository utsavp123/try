console.log('Client side javascript file is loaded!')

// fetch('http://localhost:3000/weather?address=!').then((res) => {
//     console.log(res);
//     res.json().then((data) => {

//         if (data.error) {
//             console.log('ENTER OTHER SEARCH');
//         }
//         else {
//             console.log(data);
//         }
//     })

// })

const weatherApp = document.querySelector('form');
const inputSer = document.querySelector('input');
const msg1 = document.querySelector('.msg-1');
const msg2 = document.querySelector('.msg-2');
const msg3 = document.querySelector('.msg-3');

// weatherApp.addEventListener('submit', (e) => {
//     e.preventDefault();
//     if (inputSer.value) {
//         msg1.innerHTML = 'Loading...';
//         msg2.innerHTML = '';
//         msg3.innerHTML = '';
//         fetch(`http://localhost:3001/weather?name=${inputSer.value}`).then((res) => {
//             res.json().then((data) => {
//                 if (data.error) {
//                     msg1.innerHTML = 'ENTER OTHER SEARCH';
//                     msg2.innerHTML = '';
//                     msg3.innerHTML = '';
//                 }
//                 else {
//                     msg1.innerHTML = data.Temperature;
//                     msg2.innerHTML = data.main;
//                     msg3.innerHTML = data.place_name;
//                 }
//             })
//         })
//     }
// })

weatherApp.addEventListener('submit', (e) => {
    e.preventDefault()
    if (inputSer.value) {
        msg1.innerHTML = 'Loading...';
        msg2.innerHTML = '';
        msg3.innerHTML = '';
        fetch(`http://localhost:3001/weather?name=${inputSer.value}`).then((res)=>{
            res.json().then((data) => {
                if (data.error) {
                    msg1.innerHTML = 'ENTER OTHER SEARCH';
                    msg2.innerHTML = '';
                    msg3.innerHTML = '';
                }
                else {
                    msg1.innerHTML = data.Temperature;
                    msg2.innerHTML = data.main;
                    msg3.innerHTML = data.place_name;
                }
            })
        })
    }
})