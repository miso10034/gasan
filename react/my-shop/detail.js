import {useState} from 'react';
import data2 from '../data2.js';

//     <div>
//       <div className='col-detail'>
//         <br></br><br></br>
//         <h2>{props.lps2.title}</h2>
//         <p>{props.lps2.content}</p>
//         <img src={process.env.PUBLIC_URL + '\lp' + props.i + '.png'}></img>
//         <p>{props.lps2.content2}</p>
//         <button></button>
//       </div>
//     </div>

function Detail(){
  return(
    <div className="container">
        <div className="col-md-6 mt-4">
            <h2 className="pt-5">❝ 시가렛애프터섹스 LP<br></br>CigarettesAfterSex ❞</h2><br></br>
            <p>몽환적인 느낌의 드림팝으로 많은 사랑을 받고 있는<br></br>1집 앨범 블랙 바이닐입니다.<br></br>
            <br></br></p>
        </div>
        <div className="col-md-6 mt-4">
            <img src="./lp1.png"></img>
        </div>
        <div>
        <br></br>TRACK LIST<br></br><br></br>Side A<br></br>good 4 u<br></br><br></br>Side B<br></br>enough for you [piano version]
        <p>38150원</p>  
        <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
        </div>
    </div>
    
  )
}

// const Detail = ()=> {
//     let [lps2] = useState(data2);

//     return(
//         <div>
//           {/* {
//             lps2.map((a,i)=>{
//               return (
//                 <Card lps2 = {lps2[i]} i = {i+1}></Card>
//               )
//             })
//           } */}
//           <br></br><br></br>
//           <h2>❝ 시가렛애프터섹스 LP<br></br>CigarettesAfterSex ❞</h2><br></br><br></br>
          
//           <p>몽환적인 느낌의 드림팝으로 많은 사랑을 받고 있는<br></br>1집 앨범 블랙 바이닐입니다.<br></br>
//           현재 재고가 얼마남지 않았습니다. 평생 소장용으로 추천드립니다!<br></br><br></br>
//           <img src ="\lp1.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>Side A<br></br>good 4 u<br></br><br></br>Side B<br></br>enough for you [piano version]
//           </p>
//           <p>38150원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//           <br></br><br></br>
//           <h2>❝ 나스 LP<br></br>The Lost Tapes 2<br></br>NAS ❞</h2><br></br><br></br>
          
//           <p>나스의 "The Lost Tape" LP.<br></br>
//           현재 재고가 얼마남지 않았습니다. 평생 소장용으로 얼른 겟하십셔~!<br></br><br></br>
//           <img src ="\lp2.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>No Bad Energy<br></br>Vemon Family<br></br>Beautiful Life<br></br>Queens Wolf<br></br>Lost Freestyle
//           </p>
//           <p>52500원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//           <br></br><br></br>
//           <h2>❝ 올리비아 로드리고 LP<br></br>Singles 4 You<br></br>Olivia Rodrigo ❞</h2><br></br><br></br>
          
//           <p>올리비아 로드리고의 차트 톱 히트곡 "Singles 4 U" 한정판!!<br></br> 아쿠아 블루 컬러 엘피입니다!<br></br>
//           현재 재고가 얼마남지 않았습니다. 서두르세요~!<br></br><br></br>
//           <img src ="\lp3.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>Side A<br></br>good 4 u<br></br><br></br>Side B<br></br>enough for you [piano version]
//           </p>
//           <p>39200원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//           <br></br><br></br>
//           <h2>❝ 트로이 시반 LP<br></br>Something To Give Each Other<br></br>Troye Sivan ❞</h2><br></br><br></br>
          
//           <p>글로벌 팝 아티스트 토로이 시반의 UO 한정판 밀키 클리어 LP!<br></br><br></br>트로이 시반 커버 아트<br></br>
//           현재 재고가 얼마남지 않았습니다. 서두르세요~!<br></br><br></br>
//           <img src ="\lp4.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>Side A<br></br>good 4 u<br></br><br></br>Side B<br></br>enough for you [piano version]
//           </p>
//           <p>39200원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//           <br></br><br></br>
//           <h2>❝ 트로이 시반 LP<br></br>BLOOM<br></br>Troye Sivan ❞</h2><br></br><br></br>
          
//           <p>트로이 시반의 기타 중심의 두 번째 앨범인 "BLOOM"으로 돌아왔습니다.<br></br><br></br>
//           도전적으로 자신의 성적 취향을 표현하는데,<br></br>이는 팝계에서 전통적으로 이성애의 러브송에서 절실히 필요한 휴식<br></br>
//           아리아나 그란데와 함께한 싱글 'Dance to This', 인기 싱글곡 'My My My'가 포함됩니다.<br></br><br></br>
    
//           <img src ="\lp5.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>Seventeen<br></br>My My My!<br></br>Bloom<br></br>Lucky Strike<br></br>Animal
//           </p>
//           <p>47600원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//           <br></br><br></br>
//           <h2>❝ 가디언즈 오브 더 갤럭시 LP<br></br>Awesome MixTAPE <br></br>MARVEL ❞</h2><br></br><br></br>
          
//           <p>마블 가디언즈 오브 더 갤럭시<br></br>죽이는 믹스테이프 LP 시리즈!<br></br><br></br>
//           가오갤에 등장하는 1970년대 쿨한 레트로 팝음악이 담긴 카세트 테이프의 음악!<br></br><br></br>
//           <img src ="\lp6.png"></img><br></br>
//           <br></br>TRACK LIST<br></br><br></br>Side A<br></br>Hooked on a feeling<br></br><br></br>Cherry bomb<br></br>I want you back
//           </p>
//           <p>38150원</p>
//           <button className='orderbtn_color'>주문하기</button><br></br><hr></hr>
    
//         </div>
//       )
// }

// 컴포넌트를 외부로 빼는 것
export default Detail;