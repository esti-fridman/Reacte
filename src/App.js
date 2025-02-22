import Welcome from "./components/Welcome";
import Counter from "./components/Counter"
import Test from "./components/Test"
import ThemeContext from "./context/ThemeContext";
import './App.css';

import { BrowserRouter, Routes, Route, Link } from "react-router-dom";
import { Provider } from "react-redux";
import { store } from "./redux/store";

function App() {
  return (
    <Provider store={store}>
    <ThemeContext.Provider value="black">
    <BrowserRouter>
      <nav>
        <Link to="/"> Home</Link> |
        <Link to="/test"> Test</Link> |
        <Link to="/counter"> counter</Link>
      </nav>
      <Routes>
        <Route path="/" element={<Welcome name="SARA"></Welcome>}></Route>
        <Route path="/test/:id" element={<Test></Test>}></Route>
        <Route path="/counter" element={<Counter></Counter>}> </Route>
      </Routes>
    </BrowserRouter>
    </ThemeContext.Provider>
    </Provider>
  );
}

export default App;
