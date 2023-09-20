function increase(number){
    const promise = new Promise((resolve, reject)=>{
        setTimeout(()=>{
            const result = number + 10;
            if(result > 50){
                const err = new Error("숫자가 너무 큽니다.");
                return reject(err);
            }
            resolve(result);
        }, 1000);
    }) 
    return promise;
}

increase(0)
.then(function(number){
    console.log(number);
    return increase(number);
})
.then(function(number){
    console.log(number);
    return increase(number);
})
.then(function(number){
    console.log(number);
    return increase(number);
})
.then(function(number){
    console.log(number);
    return increase(number);
})