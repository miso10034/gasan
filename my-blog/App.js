import './App.css';
import { useState } from 'react';
import TodoList from './todolist';
import { Component } from 'react';

function App() {
  //자바스크립트
  //let post = ["모던 자바스크립트", "HTML5", "C++", "리액트"];
  // 글제목 -> 주솟값, 글제목변경 -> 값
  // 글제목변경 값을 변경해도 주솟값은 변경되지 않음
  let [글제목, 글제목변경] = useState(["모던 자바스크립트", "HTML5", "C++"]);
  let [good, goodState] = useState([0,0,0]);
  let [title, setTitle] = useState(0);
  let [입력값, 입력값변경] = useState('');


  //true, false, 0, 1
  let [modal, setModal] = useState(true);

//temp
let data1 = [1,2,3];
let data2 = [...data1]; //shallow copy, deep copy
data2[0] = 1000;

console.log(data1 === data2);

// 자바스크립트에서는 반복문을 사용할 수 없음 => map함수 이용하기

// [1,2,3].push(4);

// [1,2,3,4,5].map(function(a){
//   return 'test'
// })

// 현재 날짜 가져오기
const today = new Date();

// 원하는 형식으로 날짜를 설정
const formattedDate = `${today.getFullYear()}년
      ${today.getMonth() + 1}월 ${today.getDate()}일`;


  return (
    <div className="App">
      <div className="black-nav">
        <h2 style = {{color : 'white', fontSize : '30px', backgroundColor : 'rebeccapurple'}} >개발자 블로그 </h2>
      </div>
      {/* <button onClick={
        ()=>{
            // 글제목변경(["옛날 자바스크립트", "HTML5", "C++", "리액트"]);
            //원본 데이터가 있으면 원본 데이터 백업
            let copy = [...글제목];
            copy[0] = '옛날 자바스크립트';
            //copy.sort();
            글제목변경(copy);
          }
        }>📸</button> */}

      {/* state true : 보이게, false : 안보이게 */}
      {
        글제목.map(function(title, i){
          return (
            <div className="list" key = {i}>
              <h4 onClick={()=>{
                  modal === true ? setModal(false) : setModal(true);
                  setTitle(i)
                }}>{글제목[i]}
                    <span onClick={
                      (e)=>{
                        e.stopPropagation(); // 버블링 방지법
                        let copy = [...good];
                        copy[i] = copy[i] + 1;
                        goodState(copy);
                      }
                    }>💜
                    </span>{good[i]}
              </h4>
              <p>{formattedDate}</p>
              <button onClick={()=>{
                let del = [...글제목];
                del.splice(i,1); // splice(삭제하고 싶은 위치, 1개);
                글제목변경(del);
              }}>삭제</button>
            </div>
          )
        })
      }

      <input type = "text"
             placeholder='텍스트를 입력하세요'
             onChange={function(e){
              입력값변경(e.target.value)
              console.log(입력값);
             }}
        ></input>
        <button onClick={
          (e)=> { 
            let copy = [...글제목]; //1. 메모리카피 ... => 해체해서 
            copy.unshift(입력값);   //2.copy의 맨 처음에 사용자가 입력한 글을 추가
          //copy.push(입력값) => 아래에 추가 unshift() => 맨 위에 추가
            글제목변경(copy);       //3.copy 배열을 반영
             }}>등록</button>
      {
        modal === true? <Modal title = {title} 글제목변경 = {글제목변경} color = {'khaki'} 글제목 = {글제목}></Modal> : null
      }
      {/* <Counter></Counter>*/}
      {/* <InputField></InputField> */}
      {/* <UserProfile></UserProfile> */}
      {/* <TodoList></TodoList>  */}
      {/* <EventProps></EventProps> */}
      {/* <ComProps></ComProps> */}
      <Modal2 name = {'lee'}></Modal2>
    </div>
  );
}
// 2번
function ChildComponent(props){
  return(
    <>
      <h2>자식 컴포넌트</h2>
      {props.component}
    </>
  )
}
// 1번
function ComProps(){
  const dynamicCom = <p>동적으로 전달된 컴포넌트</p>

  return(
    <>
      <ChildComponent component = {dynamicCom} ></ChildComponent>
    </>
  )
}

function MyButton(props){
  return <button onClick={props.onClick}>{props.label}</button>
}

function EventProps(){
  const handleClick = ()=>{
    alert('버튼이 클릭되었습니다.');
  }

  return(
    <>
      <h1>버튼 예제</h1>
      <MyButton onClick={handleClick} label="클릭하세요"/>
      {/* <button onClick={handleClick}>클릭하세요.</button> => 일반적인 구조 */}
    </>
  )
}



// props를 통해서 키에 접근 가능
let Modal = (props)=>{
  //자바스크립트 코드
  return(
    <div className='modal' style={{background : props.color}}>
        <h4>{props.글제목[props.title]}</h4> 
        <p>날짜</p>
        <p>상세정보</p>
        {/* <button onClick={()=>{
          props.글제목변경(["옛날 자바스크립트", "HTML5", "C++"]);
        }}>글수정</button> */}
      </div>
  )
}
//위의 코드를 class로 만들어 보기
class Modal2 extends Component{
  constructor(props){ // <Modal2 name = "lee">여기서 보낸 name을
    super(props)//생성자에 props를 써줄 때 부모에도 써주기
    this.state = {
      name : 'kms',
      age : 26,
      address : '287 garamgil'
    }
  }
  render(){
    return(
      <div>
        안녕 {this.state.name} ? 
        <button onClick={()=>{
          this.setState({name : '김미소'})
        }}>버튼</button>
      </div>
    )
  }
}

// 컴포넌트 생성
//let [count, countState] = useState(0);
// <h1>카운터 : {count}</h1>
//<button onClick={
//  ()=>{
//    countState(count + 1);
//  }}>+</button> 

// function Counter(){
//   let [count, setCount] = useState(0);

//   return(
//     <div>
//       <h1>Counter : {count}</h1>
//       <button onClick={function(){
//         setCount(count + 1);
//       }}> + </button>
//   </div>
//   )}

/////////////////////////
// <h1>입력 필드 예제</h1>
          // <input onChange={
          //   (e)=>{ setText(e.target.value)}}></input>
          // <p>입력한 텍스트: {text}</p>
 // input태그
//  let [text, setText] = useState("");        

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
