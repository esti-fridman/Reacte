import { useNavigate } from "react-router-dom"
import '../i18next'
import { useTranslation } from 'react-i18next';

function Contact(){
    const{t}=useTranslation();  

    const navigate=useNavigate();

    const goToThankyou=()=>{
        navigate("/thankeYou");
    }
    return(
        <>
        <h1>{t("contact")}</h1>
        <button onClick={goToThankyou}>{t("contact-btn")}</button>
        </>
        
    )
}
export default Contact