import { Button, Navbar, Container, Nav} from 'react-bootstrap';
import './App.css';
import bgm from './img/bg2.jpg';
import { useState } from 'react';
import data from './data.js';
import { Route, Routes, Link } from 'react-router-dom';
import Detail from './detail';
import About from './about';

function App() {
  // object 자료형 [lps] => [{},{},{}] 형태로 되어 있음
  let [lps] = useState(data);

  return (
    <div className="App">
      <Navbar bg="light" data-bs-theme="light">
        <Container>
      <Navbar.Brand href="/">Record</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link href="/detail">Shop</Nav.Link>
            <Nav.Link href="/">Home</Nav.Link>
            <Nav.Link href="/about">more</Nav.Link>
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
