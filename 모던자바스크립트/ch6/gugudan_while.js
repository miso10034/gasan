const { parse } = require('path');
// 사용자로 부터 입력받은 구구단 출력
const readline = require('readline');
const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});

rl.question('단수를 입력하세요 : ', function(dan){
    var idan = parseInt(dan);
    var i = 1;

    while(i<11){
        console.log(dan + " * " + i + " = " + idan * i);
        i++
    }
    rl.close();
})