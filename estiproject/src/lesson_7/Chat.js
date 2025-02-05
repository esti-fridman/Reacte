import React, { useRef,useState } from 'react'


export default function Chat() {
    const [messeges,setMesseges] = useState([]);
    
    return(
        <>
        messeges.forEach(element => {
            <p>element</p>
        });
        </>
    )

}