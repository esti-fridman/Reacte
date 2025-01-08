import { useNavigate } from "react-router-dom"
import '../i18next'
import { withNamespaces } from 'react-i18next';

function Contact({t}){
    const navigate=useNavigate();

    const goToThankyou=()=>{
        navigate("/thankeYou");
    }
    return(
        <>
        <h1>{t("contact")}</h1>
        <button onClick={goToThankyou}>צור קשר</button>
        </>
        
    )
}
export default withNamespaces()(Contact)