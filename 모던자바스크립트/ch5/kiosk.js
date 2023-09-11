const readline = require('readline');
const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});

rl.question(':D 어서오세요 msCoffee입니다. :D\n   메뉴를 골라주세요 \n   1. 아메리카노\n   2. 카페라떼\n   3. 연유라떼\n   4. 헤이즐넛 => ',
     function(hotkey){
    switch(hotkey){
        case '1':
            console.log("아메리키노 주문이 완료되었습니다.");
            break;
        case '2':
            console.log('카페라떼 주문이 완료되었습니다.');
            break;
        case '3':
            console.log('연유라떼 주문이 완료되었습니다.');
            break;
        case  '4':
            console.log('헤이즐넛 주문이 완료되었습니다.');
                break;
        default:
            console.log('없는 메뉴 입니다.');
            break;
    }
    rl.close();
});