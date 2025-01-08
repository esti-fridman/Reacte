
import '../i18next'
import { withNamespaces } from 'react-i18next';

function About({t}){
    return(
        <p>{t("about")}</p>
    )
}
export default withNamespaces()(About)