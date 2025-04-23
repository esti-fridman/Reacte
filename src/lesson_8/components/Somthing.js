import useLocalStorage from "./hooks/useLocalStrage";

function Somthing(props){
    const s={
        name:"Sara",
        age:20
    }
    useLocalStorage(s,"set");

    const {data} = useLocalStorage("Sara")
    return (
        <>
        <p>name: {props.name}</p>
        <p>age: {props.age}</p>
        
        </>
    )
}
export default Somthing;

