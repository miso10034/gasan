import { useState } from "react";


function MyBoard(){

    //게시물 : 객체형 배열 {키 : 값
    //const newPost = { title : '', content : ''}
    const[newPost, setNewPost] = useState({title : '', content : ''});
    const[posts, setPosts] = useState([]);
    
    return(
        <>
            <div className="orange-nav">
            <h1> ⋆｡˚ ☁ ˚｡⋆｡</h1>
            </div>
            <div className="font">
                <h2>9월 23일 ~ 10월 01일 일정표</h2>
                <input type="text"
                    placeholder="제목"
                    onChange={(e)=>{
                        setNewPost({...newPost, title : e.target.value})
                    }}
                >
                </input><p></p>
                <textarea placeholder="내용"
                    onChange={(e)=>{
                        setNewPost({...newPost, content : e.target.value})
                    }}>
                </textarea><p></p>

                <button onClick={()=>{
                    if(newPost.title && newPost.content){
                       const updatePosts = [...posts, {...newPost, id : Date.now()}];
                       setPosts(updatePosts);
                       setNewPost({title : '', content:''});
                    }
                }}>게시</button>
            </div>

            <div className="font">
                <h2>게시글 목록</h2>
                <ul>
                    {
                        posts.map((post)=>{
                            return <li className="list" key={post.id}>
                                <h3>{post.title}</h3>
                                <p>{post.content}</p>
                            </li>
                        })
                    }
                </ul>
            </div>
        </>
    )
}

export default MyBoard;