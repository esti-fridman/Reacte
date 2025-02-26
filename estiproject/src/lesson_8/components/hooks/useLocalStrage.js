
function useLocalStorage(Data,method){
    const data = JSON.parse(localStorage.getItem(Data.key));
    

    switch (method){
            case "get" :
                return data;
            case "set":
                localStorage.setItem(Data.key, JSON.stringify(Data));
    }
    
}
export default useLocalStorage;