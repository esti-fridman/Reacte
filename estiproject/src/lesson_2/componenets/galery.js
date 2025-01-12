import React,{useState} from 'react'
import img1 from '../images/kalmar_c.jpg'
import img2 from '../images/kalmar_k.jpg'
import img3 from '../images/kalmar_s.jpg'
import img4 from '../images/kamatz.jpg'
import img5 from '../images/segol.jpg'

import { useTranslation } from 'react-i18next';


export default function Galery(){

    const{t}=useTranslation();  

    const [images,setImages]=useState([img1,img2,img3,img4,img5])
    const[index,setIndex]=useState(0)
    

    return (
        <>
          <h1>{t("gallery")}</h1>
          <div className="image-container">
            <button className="left" onClick={() => { if (index > 0) setIndex(index - 1); }}>🔙</button>
            <img src={images[index]} alt="Gallery" />
            <button className="right" onClick={() => { if (index < 4) setIndex(index + 1); }}>🔜</button>
          </div>
        </>
      );
      
      
}