const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('문자를 입력하세요: ', function(ch){
    if(ch == 'y'){
        console.log('드라이브를 포맷할게요');
    }
    else if(ch =='n'){
        console.log('드라이브를 포맷하지 않을게요');
    }
    else{
        console.log('유효하지 않은 문자입니다.')
    }
    rl.close();
});