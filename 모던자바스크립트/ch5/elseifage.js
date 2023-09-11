const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('나이를 입력하세요 : ',function(age){
    if(age >= 19 && age <= 100){
        console.log("성인");
    }
    else if(age >= 0 && age <19){
        console.log("미성년");
    }
    else{
        console.log("값이 유효하지 않아요");
    }
    rl.close();
});