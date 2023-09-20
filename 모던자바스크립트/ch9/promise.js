// var pro1 = new Promise(function(resolve, reject){
//     setTimeout(function(){
//         //resolve('success');
//         // reject가 Error라는 객체를 전달 -1
//         reject(new Error("에러 발생")) 
//     }, 3000);
// });
// // reject가 보낸 Error 객체를 result에서 받음 -2
// // pro1.then(function(result){
// //     console.log('result : ' + result);
// // })

// pro1.then(
//     result => console.log(result),
//     error => console.log(error)
// );



function pro1(){
    return new Promise(function(resolve,reject){
        //여기가 콜백함수
        setTimeout(function(){
            reject('error 발생'); 
        }, 1000);
    })
}

function pro2(){
    return new Promise(function(resolve,reject){
        //여기가 콜백함수
        setTimeout(function(){
            resolve('pro2 성공'); 
        }, 1000);
    })
}

// pro1().then(function(result){
//     console.log('result1 : ', result);
//     pro2().then(function(result){
//         console.log('result2 : ', result);
//         pro1().then(function(result){
//             console.log('result1 : ', result);
//             pro2().then(function(result){
//                 console.log('result2 : ', result);
//             })
//         })
//     })
// });

pro1()
.then(result =>{
    console.log('result1 : ', result);
    return pro2();
})
// 에러발생시 catch문을 타고, 정상적인때 then을 수행
.catch(err=>{
    console.log('err : ', err);
    return Promise.reject(err);
})
.then(result=>{
    console.log('result2 : ', result);
})
.finally(()=>{
    console.log('IN THE END');
})