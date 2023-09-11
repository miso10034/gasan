const readline = require('readline');
const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});

rl.question('단축키를 입력하세요 : ', function(hotkey){
    switch(hotkey){
        case '1':
            console.log("엄마에게 전화걸기");
            break;
        case '2':
            console.log('언니에게 전화걸기');
            break;
        case '3':
            console.log('오빠에게 전화걸기');
            break;
        case  '4':
            console.log('아빠에게 전화걸기');
                break;
        default:
            console.log('해당 키가 없습니다.');
            break;
    } 
    rl.close();
});