
import './App.css';
import React from 'react'; 
import Screen from './techFlow/componentes/screen';
import Todos from './redux/componenets/Todos'
import { Provider } from 'react-redux';
import store from './redux/store';
import RecicleBin from './redux/componenets/Rciclebin';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Chat from './lesson_7/Chat';

import Somthing3 from './lesson_8/components/Somthing2';
function App() {
 
  return (
//     <Chat></Chat>
//  <Provider store={store}>
//        <div className='container'> 
//          <Todos />
//         <RecicleBin /> 
//        </div> 
//  </Provider>  
<Somthing3></Somthing3>

  );
}

export default App;





