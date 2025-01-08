import logo from '../assests/logo512.png'
import { useParams } from 'react-router-dom'
function Test() {
    const getString = () => {
        return "test page"
    }

    const { id } = useParams();
    return (
        <>
            <p style={{ color: "red" }}>{getString()}</p>
            <img src={logo}></img>
            <p> your ID is {id}</p>
        </>
    )
}

export default Test;