import '../i18next'
import { useTranslation } from 'react-i18next';

 function Servises(){
    const{t}=useTranslation();  

    return(
        <h1>{t("services")}</h1>
    )
}
export default Servises