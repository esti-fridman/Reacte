import '../i18next'
import { withNamespaces } from 'react-i18next';
 function Servises({t}){
    return(
        <p>{t("servic")}</p>
    )
}
export default withNamespaces()(Servises)