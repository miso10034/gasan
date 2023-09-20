import './App.css';
import { useState } from 'react';

function App() {
  //자바스크립트
  //let post = ["모던 자바스크립트", "HTML5", "C++", "리액트"];
  // 글제목 -> 주솟값, 글제목변경 -> 값
  // 글제목변경 값을 변경해도 주솟값은 변경되지 않음
  let [글제목, 글제목변경] = useState(["모던 자바스크립트", "HTML5", "C++"]);
  let [good, goodState] = useState(0);

  //true, false, 0, 1
  let [modal, setModal] = useState(true);

//temp
let data1 = [1,2,3];
let data2 = [...data1]; //shallow copy, deep copy
data2[0] = 1000;

console.log(data1 === data2);

// 자바스크립트에서는 반복문을 사용할 수 없음 => map함수 이용하기

[1,2,3].push(4);

[1,2,3,4,5].map(function(a){
  return 'test'
})

  return (
    <div className="App">
      <div className="black-nav">
        <h2 style = {{color : 'white', fontSize : '30px', backgroundColor : 'rebeccapurple'}} >개발자 블로그 </h2>
      </div>
      <button onClick={
        ()=>{
            // 글제목변경(["옛날 자바스크립트", "HTML5", "C++", "리액트"]);
            //원본 데이터가 있으면 원본 데이터 백업
            let copy = [...글제목];
            copy[0] = '옛날 자바스크립트';
            copy.sort();
            글제목변경(copy);
          }
        }>📸</button>

      {/* <div className="list">
        <h4 onClick={()=>{
          modal == true ? setModal(false) : setModal(true)
        }}>{글제목[0]}<span onClick={
          ()=>{
            //good = good + 1;
            goodState(good + 1);
          }
        }>💜</span>{good}</h4>
        <p>9월 15일</p>
      </div>
      <div className="list">
        <h4>{글제목[1]}</h4>
        <p>9월 15일</p>
      </div>
      <div className="list">
        <h4>{글제목[2]}</h4>
        <p>9월 15일</p>
      </div>
      <div className="list">
        <h4>{글제목[3]}</h4>
        <p>9월 15일</p>
      </div> */}

      {/* state true : 보이게, false : 안보이게 */}
      {
        글제목.map(function(title, i){
          return (
            <div className="list">
              <h4 onClick={()=>{
                modal == true ? setModal(false) : setModal(true)
            }}>{글제목[i]}
            <span onClick={
              ()=>{
                goodState(good + 1);
              }
            }>💜</span>{good}</h4>
              <p>9월 15일</p>
            </div>
          )
        })
      }

      {
        modal === false? <Modal></Modal> : null
      }
      {/* <Counter></Counter>
      <InputField></InputField>
      <UserProfile></UserProfile> */}

      {/* map()함수 사용법
      1.왼쪽 array 자료만큼 내부 코드 실행
      2. return 안에 있는 데이터를 array에 담아준다.
      3. 2개의 파라미터(배열의 요소, 인덱스)
      */}

      
    </div>
  );
}
// 특정 기능 = 함수 = 컴포넌트
// 1. 함수 생성 function 함수이름()
// 2. return 안에 html담기 => UI
// 3. 컴포넌트 호출 <Modal></Modal> 형태로

let Modal = ()=>{
  //자바스크립트 코드
  return(
    <div className='modal'>
        <h4>제목</h4>
        <p>날짜</p>
        <p>상세정보</p>
      </div>
  )
}

// 컴포넌트 생성
//let [count, countState] = useState(0);
{/* <h1>카운터 : {count}</h1>
<button onClick={
  ()=>{
    countState(count + 1);
  }}>+</button> */}

function Counter(){
  let [count, setCount] = useState(0);

  return(
    <div>
      <h1>Counter : {count}</h1>
      <button onClick={function(){
        setCount(count + 1);
      }}> + </button>
  </div>
  )}

/////////////////////////
{/* <h1>입력 필드 예제</h1>
          <input onChange={
            (e)=>{ setText(e.target.value)}}></input>
          <p>입력한 텍스트: {text}</p>
 // input태그
  let [text, setText] = useState("");        
*/}

// function InputField(){
//   const [inputText, setInputText] = useState('');

//   return(
//     <div>
//       <h1>Input Field</h1>
//       <input type = "text" 
//              value = {inputText}
//              placeholder='텍스트를 입력하세요'
//              onChange = {function(e){
//                 setInputText(e.target.value)
//     }}></input>
//       <p>: {inputText}</p>
//     </div>
//   )
// }

// function UserProfile(){
//   const [user, setUser] = useState(
//     // 오브젝트형 => useState 다음에 {}안에 넣어주기
//                 { 
//                   username : '',
//                   useremail : ''
//                 });

//   function handleInputChange(e){
//     const {name, value} = e.target;
//     setUser({...user, [name]:value});
//   }
  

//   return(
//     <div>
//       <h1>Write down Your Profile</h1>
//       <input type = "text" 
//              name = "username"
//              value = {user.username}
//              placeholder='사용자 이름'
//              onChange = {handleInputChange}
//      ></input>
      
//       <input type = "text" 
//              name = "useremail"
//              value = {user.useremail}
//              placeholder='이메일 주소'
//              onChange = {handleInputChange}
//      ></input>
//       <h2>프로필 정보</h2>
//       <p>사용자 이름 : {user.username}</p>
//       <p>이메일 주소 : {user.useremailxt}</p>
//     </div>
//   )
// }
export default App;
