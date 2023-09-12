// function plus(a, b){
//     return (a+b);
// }

// var result = plus(10, 20);
// console.log('두 수의 합 : ' + result);


// 나이를 입력받아서 성인 인증하는 기능
// const readline = require('readline');

// const rl = readline.createInterface({
//     input : process.stdin,
//     output : process.stdout
// });

// function CheckAge(age){
//     if(age > 19){
//         return true;
//     }else{
//         return false;
//     }
// }

// rl.question('나이를 입력하세요 : ', function(nai){
//     if(CheckAge(nai)){
//         console.log('입장 가능');
//     }else{
//         console.log('입장 불가');
//     }

//     rl.close();
// })

// return 함수 종료의 기능
function Week(){
    console.log('Mon');
    console.log('Tue');
    console.log('Wed');

    return;
    console.log('Thr');
    console.log('Fri');
    console.log('Sat');
    console.log('Sun');

    //return false;

    //return값이 없으면 undefined가 출력된다.
}
console.log(Week()===undefined);

