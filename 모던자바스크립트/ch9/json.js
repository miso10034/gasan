// let user = {
//     name : 'John',
//     age : 30,

//     toString(){
//         return `{name : "${this.name}", age : ${this.age}}`;
//     }
// };

// console.log(user.toString());

// let student = {
//     name : 'john',
//     age : 30,
//     courses : ['html','css','js'],
//     mobile : null
// };

// let json = JSON.stringify(student);

// console.log(typeof json);
// console.log(json);

// let obj = JSON.parse(json);
// console.log(obj);

let numbers = "[0,1,2,3]";

//numbers를 보내고 받기

let arr = JSON.parse(numbers);

console.log(arr[1]);