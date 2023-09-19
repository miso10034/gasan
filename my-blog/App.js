import './App.css';
import { useState } from 'react';

function App() {
  //자바스크립트
  //let post = ["모던 자바스크립트", "HTML5", "C++", "리액트"];
  // 글제목 -> 주솟값, 글제목변경 -> 값
  // 글제목변경 값을 변경해도 주솟값은 변경되지 않음
  let [글제목, 글제목변경] = useState(["모던 자바스크립트", "HTML5", "C++", "리액트"]);
  let [good, goodState] = useState(0);
  let [count, countState] = useState(0);
  
  //true, false, 0, 1
  let [modal, setModal] = useState(true);

//temp
let data1 = [1,2,3];
let data2 = [...data1]; //shallow copy, deep copy
data2[0] = 1000;

console.log(data1 === data2);

// function 함수(){
//   console.log(1);
// }

  return (
    <div className="App">
      <div className="black-nav">
        <h2 style = {{color : 'white', fontSize : '30px', backgroundColor : 'blueviolet'}} >개발자 블로그 </h2>
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
        }>🧡</button>

        {/* 버튼 생성 */}
        <div>
          <h1>카운터 : {count}</h1>
        </div>
        <button onClick={
          ()=>{
            countState(count + 1);
          }}>+</button>
      <div className="list">
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
      </div>

      {/* state true : 보이게, false : 안보이게 */}
      {
        modal === false? <Modal></Modal> : null
      }
      
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

let Account = ()=>{
  return(
    <div className='modal'>
      <h4>아이디</h4>
      <p>날짜</p>
      <p>상세정보</p>
    </div>
  )
}

export default App;
