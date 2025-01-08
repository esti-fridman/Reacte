import { useContext } from "react";
import Test from "./Test";
import { useNavigate } from "react-router-dom";
import ThemeContext from "../context/ThemeContext";
export default function Welcome(props) {
    //context
    const theme = useContext(ThemeContext);

    const className = 'h1-' + theme;
    //navigate
    console.log(props);
    const navigate = useNavigate();

    const navigateToTest = () => {
        navigate('/test');
    }
    return (
        <>
            <h1 className={className}>Hello {props.name}</h1>
            <h1> you are {props.age} years old</h1>
            <button onClick={navigateToTest}> navigate to Test</button>
        </>

    );
}

