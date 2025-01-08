

import React from 'react'; 
import { BrowserRouter, Routes, Route, Link } from 'react-router-dom';
import Home from './home';
import About from './about';
import Services from './Services';
import Contact from './contact';
import ThankYou from './Thankyou';

import ThemeContext from '../context/ThenContext';
import "bootstrap/dist/css/bootstrap.min.css";

import { useTranslation } from 'react-i18next';
import i18next from 'i18next';


function Screen() {
  
  const{t,i18n}=useTranslation();  

  const translate=(language)=>{
    i18n.changeLanguage(language)
  }

  return (
  <ThemeContext.Provider>
   <BrowserRouter>
      <nav className="nav nav-pills nav-fill gap-2 p-1 small bg-primary rounded-5 shadow-sm">
      <button  type="button" class="btn btn-secondary btn-sm" onClick={()=>translate('en')} >En</button>
      <button  type="button" class="btn btn-secondary btn-sm" onClick={()=>translate('he')} >He</button>
        <Link className="nav-link active rounded-5" to="/">{t("homePage")}</Link>
        <Link className="nav-link active rounded-5" to="/about">{t("aboutPage")}</Link>
        <Link className="nav-link active rounded-5" to="/servic">{t("servicPage")}</Link>
        <Link className="nav-link active rounded-5" to="/contact">{t("contactPage")} </Link>
       
       
      </nav>
      <Routes>
        <Route path="/" element={<Home/>} />
        <Route path="/about" element={<About />} />
        <Route path="/servic" element={<Services />} /> 
        <Route path="/contact" element={<Contact />} />
        <Route path="/thankeYou" element={<ThankYou/>}></Route>
      </Routes>
    </BrowserRouter>
    </ThemeContext.Provider>
 
  );
}

export default Screen;

<ul class="nav nav-pills nav-fill gap-2 p-1 small bg-primary rounded-5 shadow-sm" id="pillNav2" role="tablist" style="--bs-nav-link-color: var(--bs-white); --bs-nav-pills-link-active-color: var(--bs-primary); --bs-nav-pills-link-active-bg: var(--bs-white);">
  <li class="nav-item" role="presentation">
    <button class="nav-link active rounded-5" id="home-tab2" data-bs-toggle="tab" type="button" role="tab" aria-selected="true">Home</button>
  </li>
  <li class="nav-item" role="presentation">
    <button class="nav-link rounded-5" id="profile-tab2" data-bs-toggle="tab" type="button" role="tab" aria-selected="false">Profile</button>
  </li>
  <li class="nav-item" role="presentation">
    <button class="nav-link rounded-5" id="contact-tab2" data-bs-toggle="tab" type="button" role="tab" aria-selected="false">Contact</button>
  </li>
</ul>