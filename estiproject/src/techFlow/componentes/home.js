
import Galery from "../../lesson_2/componenets/galery"
import '../i18next'
import { useTranslation } from 'react-i18next';

function Home(){
    const{t}=useTranslation();  

    return(
        <>
            <Galery></Galery>
             <h1>{t("home")}</h1>

        </>
   
    )
}
export default Home;