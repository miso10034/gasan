// 콜백함수
// function printMe(){
//     console.log('hello');
// }

// setTimeout(printMe, 3000);
// console.log('대기중');

function increase(number, callback){
    setTimeout(()=>{
        const result = number + 10;
        if(callback){
            callback(result);
        }
    }, 1000);
}
// 화살표 함수에서 전달인자가 1개이면 ()도 생략 가능
// 전달인자가 없으면 ()는 써줘야함
// 연속 콜백 함수
console.log('작업 START');
increase(0, result=>{
    console.log(result);
    increase(result, result =>{
        console.log(result);
        increase(result, result=>{
            console.log(result);
            increase(result, result=>{
                console.log(result);
            })
        })
    })
})