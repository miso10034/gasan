import { Button, Navbar, Container, Nav} from 'react-bootstrap';
import './App.css';
import bgm from './img/bg2.jpg';
import { useState } from 'react';// ./가 안붙어있는 애들 => 외부에서 제공되는 라이브러리
import data from './data.js';
import { Route, Routes, Link, useNavigate, Outlet } from 'react-router-dom';
// useNavigate => 페이지 이동 기능
// Outlet => 위치 지정해서 출력해주는 기능
import Detail from './pages/detail'; // ./로 시작하는 것들 => 내가 추가한 것들, js는 생략 가능
import About from './pages/about';

function App() {
  // object 자료형 [lps] => [{},{},{}] 형태로 되어 있음
  let [lps] = useState(data);
  let navigate = useNavigate();

  return (
    <div className="App">

      {/* <button  className="btn btn-primary" onClick={()=>{
        navigate('/')
      // navigate(-1) => 뒤로가기 
      // navigate(1) => 앞으로 가기
      }}>홈</button>
      <button  className="btn btn-light" onClick={()=>{
        navigate('/detail')
      }}>상세페이지</button>
      <button  className="btn btn-primary" onClick={()=>{
        navigate('/about')
      }}>더보기</button> */}

      <Navbar bg="light" data-bs-theme="light">
        <Container>
      <Navbar.Brand href="/">Record</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link onClick={()=>{ navigate('/detail') }}>Shop</Nav.Link>
            <Nav.Link href="/">Home</Nav.Link>
            <Nav.Link onClick={()=>{ navigate('/about')}}>more</Nav.Link>
          </Nav>
        </Container>
      </Navbar><br></br>

      {/* 라우트 상세 페이지 만들기
      /detail로 요청을 하는 것
      */}
      <Routes>
        <Route path = "/" element ={
          <>
            <div className='main-bg'></div>
            {/* style={{backgroundImg : 'url(' + bgm +')'}} */}
    
            <br></br>
            <div className="container text-center">
            <div className="row">
            { 
              lps.map((a, i)=>{// a => lps를 받음
                return (
                  <Card lps = {lps[i]} i = {i+1}></Card>
                  )
                })
              }
            </div>
            </div>
          </>
        }></Route>
        <Route path = "/detail" element = {<Detail></Detail>}></Route>
        <Route path = "/about" element = {<About></About>}></Route>
        {/* 404 페이지 처리, * => 너가 가지고 있는 페이지를 제외하고는 모두 아래와 같은 표시를 해줄거야 */}
        <Route path = "*" element = {<div>404 에러<br></br>없는 페이지 입니다.</div>}></Route>

      </Routes>
    </div>
  );
}
      
function Card(props){
  return(
    <div>
      <div className="col-md-4">
            <img src={process.env.PUBLIC_URL + '\lp' + props.i + '.png'}></img>
            <h5>{props.lps.title}</h5>
            <h6>{props.lps.content}</h6>
            <p>{props.lps.price}</p><br></br>
      </div>  
    </div>
  )
}


export default App;

