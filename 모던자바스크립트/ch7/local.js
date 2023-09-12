// function account(){
    // 지역변수
//     var savedUser = '킴미킴미쏘우';
//     console.log('반갑다잉 :> ' + savedUser + '님');
// }

// account();
// console.log('또 오셨네요. ' + savedUser + '님');

function naver(){
    console.log('naver 함수 진입');
    var savedUser = '김미서';
    google()
    console.log('naver 함수 탈출');
}
function google(){
    console.log('google 함수 진입');
    var savedUser = '김지연';
    console.log('google 함수 탈출');
}
naver();