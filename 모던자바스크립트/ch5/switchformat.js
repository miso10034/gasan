const readline = require('readline');
const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});

rl.question('문자를 입력하세요 : ', function(ch){
    switch(ch){
        case'y':
            console.log("예, 드라이브를 포맷하겠습니다.");
            break;
        case 'n':
            console.log('아니오, 드라이브를 포맷하겠습니다.');
            break;
        default:
            console.log('값이 유효하지 않습니다.');
            break;
    } 
});