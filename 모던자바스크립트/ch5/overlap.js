const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('정수를 입력하세요 : ',function(score){
    if(score >= 60 && scroe <= 100){
        if(score >= 90){
            console.log('장학대상');
        }
        else{    
            console.log("합격");
        }
    }
    else{
        if(score >= 0 && scroe < 60){
            console.log("불합격");
        }   
        else{
            console.log('값이 유효하지 않아요');
        }
    }
    rl.close();
});