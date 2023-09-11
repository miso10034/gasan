// 단수를 입력받아 구구단
const readline = require('readline');
const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});

rl.question('단수를 입력하세요 : ', function(dan){
    var idan = parseInt(dan);

    for(var i = 1; i<10; i++){  
        console.log(dan + " * " + i + " = " + idan * i);
    }
    rl.close();
})

