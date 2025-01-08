import { useState, useEffect } from "react";

export default function Counter () {
    const [count, setCount] = useState(0);
    

    useEffect(() =>{
        console.log('a component initialized');
    }, [] )

    useEffect(() =>{
        console.log(count);
    }, [count] )

    return (
        <>
        <p> you clicked {count} times</p>
        <button className="btn btn-success" onClick={() => {setCount(count + 1)}}> click me! </button>
        </>
    )
}