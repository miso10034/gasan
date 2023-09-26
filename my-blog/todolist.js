import { useState } from "react";

const TodoList = ()=>{
    const [todo, setTodo] = useState("");
    const [list, setList] = useState([]);//리스트를 추가할 때마다 늘어나는 배열

    return(
        <div>
            <h1>❝ You Can Do Everything ❞</h1>
            <input
                type = "text"
                placeholder="Write down your work!"
                onChange={(e)=>{
                    setTodo(e.target.value) //e.target => input
                }}></input>
            <button onClick={(e)=>{
                setList([...list, todo])
            }}>Update</button>
            <ul>
                {//map 사용하려면 {}로 먼저 시작
                    list.map((todo, i)=> {
                        return <li key={i}>{list[i]}</li>
                    })
                }
            </ul>
        </div>
    )
}

export default TodoList;
