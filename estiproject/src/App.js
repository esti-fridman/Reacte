
import './App.css';
import React from 'react'; 
import { BrowserRouter, Routes, Route, Link } from 'react-router-dom';
import Home from './techFlow/componentes/home';
import About from './techFlow/componentes/about';
import Services from './techFlow/componentes/Services'; 
import Contact from './techFlow/componentes/contact';
import "bootstrap/dist/css/bootstrap.min.css"; 
import ThankYou from './techFlow/componentes/Thankyou';
import { WithNamespaces } from 'react-i18next';
import { withNamespaces } from 'react-i18next';

function App() {
  const routs={
    home: "/",
    about: "/about",
    servic:"/servic",
    contact:"/contact",
    thankeYou:"/thankeYou"
  }
  return (
    <BrowserRouter>
      <nav className="nav nav-pills nav-fill gap-2 p-1 small bg-primary rounded-5 shadow-sm">
        <Link className="nav-link active rounded-5" to="/">דף הבית</Link>
        <Link className="nav-link active rounded-5" to="/about">אודות</Link>
        <Link className="nav-link active rounded-5" to="/servic">שירותים</Link>
        <Link className="nav-link active rounded-5" to="/contact">צור קשר</Link>
      </nav>
      <Routes>
        <Route path="/" element={<Home/>} />
        <Route path="/about" element={<About />} />
        <Route path="/servic" element={<Services />} /> 
        <Route path="/contact" element={<Contact />} />
        <Route path="/thankeYou" element={<ThankYou/>}></Route>
      </Routes>
    </BrowserRouter>
  );
}

export default (App) ;





