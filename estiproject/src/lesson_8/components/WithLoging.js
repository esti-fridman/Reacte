function WithLoging(component){
    return function WithLoging(props){
        console.log(props.name+ " "+props.age);
        return(
           <component {...props}/>
        )
    }
}
export default WithLoging;