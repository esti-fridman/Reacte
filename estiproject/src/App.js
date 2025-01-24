
import './App.css';
import React from 'react'; 
import Screen from './techFlow/componentes/screen';
import Todos from './redux/Todos'
import { Provider } from 'react-redux';
import store from './redux/store';

function App() {
  return (
  // <Screen></Screen>
  <Provider store={store}>
    <Todos></Todos>
  </Provider>
  
  

  );
}

export default App;





