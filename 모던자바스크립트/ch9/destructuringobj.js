let user = {
    id : 'test',
    pw : '1111',
    name : '김미소',
    age : 20
};

// let id = user.id;
// let pw = user.pw;
// let name = user.name;
// let age = user.age;

// 구조분해 할당할 수 있음
// let {id, pw, name, age} = user;
let {id, ...rest} = usert;

console.log(id);
console.log(rest.pw);
console.log(rest.name);
console.log(rest.age);