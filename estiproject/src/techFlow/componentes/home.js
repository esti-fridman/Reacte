
import Galery from "../../lesson_2/componenets/galery"
import '../i18next'
import { withNamespaces } from 'react-i18next';
function Home({t}){
    return(
        <>
            <Galery></Galery>
             <p>{t("home")}</p>

        </>
   
    )
}
export default withNamespaces()(Home) ;