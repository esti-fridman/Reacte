import '../i18next'
import { withNamespaces } from 'react-i18next';
 function ThankYou({t}){
    return(
        <>
        <p> {t("thankYou")} </p>
        <p >{t("waiting")}</p>
        </>
        
    )
}
export default withNamespaces()(ThankYou)