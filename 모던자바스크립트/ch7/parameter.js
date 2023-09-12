function account(userId){
    var savedUser = '미소스';
    if(userId == savedUser){
        console.log('반갑습니다. ' + userId + '님');
    }
    else{
        console.log('로그인 실패했습니다.');
    }
}
account('미소스');