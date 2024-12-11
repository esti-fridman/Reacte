import React,{useState} from 'react'
import img1 from '../images/kalmar_c.jpg'
import img2 from '../images/kalmar_k.jpg'
import img3 from '../images/kalmar_s.jpg'
import img4 from '../images/kamatz.jpg'
import img5 from '../images/segol.jpg'

export default function Galery(){
    const [images,setImages]=useState([img1,img2,img3,img4,img5])
    const[index,setIndex]=useState(0)
    
    return(
        <> 
            <h1>gallery!!!!🌌</h1>
         
          
            <button onClick={() =>setIndex(index-1)}>⬅️</button> 
            
            <img src={images[index]}></img>
            <button onClick={() => setIndex(index+1)}>➡️</button>
        </>
    )
}