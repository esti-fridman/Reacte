import '../i18next'
import { useTranslation } from 'react-i18next';
 function ThankYou(){
    const{t}=useTranslation();  

    return(
        <>
        <h2> {t("thankYou")} </h2>
        <h2 >{t("waiting")}</h2>
        </>
        
    )
}
export default ThankYou