// 실매개변수
var userName = '미소스';
var userPassword = '123';

// 형식 매개변수         매개변수의 기본값 설정           
function account(userId, userPw = '1234'){
    console.log(userId);
    console.log(userPw);

    // DB에 저장되어 있는 값
    var savedUser = '미소스';
    var savedPw = '1234';

    // true => userPw, false => '1234' 출력
    userPw = userPw || '1234' // || == or

    if(userId == savedUser){
        if(userPw == savedPw){
            console.log('반갑습니다. ' + userId + '님');
        }else{
            console.log('비밀번호 오류입니다.');
        }
    }else{
        console.log('아이디 오류입니다.');
    }
}
account(userName);
//userPassword를 전달해주지 않으면 => undefined가 나옴
// 기본값을 설정해둔다면 기본값이 출력된다.