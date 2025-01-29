
import './App.css';
import React from 'react'; 
import Screen from './techFlow/componentes/screen';
import Todos from './redux/componenets/Todos'
import { Provider } from 'react-redux';
import store from './redux/store';
import RecicleBin from './redux/componenets/Rciclebin';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';


function App() {
  return (
    <Provider store={store}>
      <div className="container">
        <Todos />
        <RecicleBin />
      </div>
  </Provider>


  );
}

export default App;





