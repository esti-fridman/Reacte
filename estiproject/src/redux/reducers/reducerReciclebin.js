import {REMOVE_TODO ,REMOVE_NEVER,RESTORE} from "../actionTypes";

const initialState = {
    RecicleBin:[],
};

export const reciclebinreducer = (state=initialState,action)=> {
    switch(action.type){
        case REMOVE_TODO:
            return{...state,
                    RecicleBin:[...state.RecicleBin,action.payload], 
            }     
        case REMOVE_NEVER:
            const newArr=[];
            state.RecicleBin.forEach(task => {
                if (task.id!==action.payload.id)
                newArr.push(task);
            }) 
            return{...state,RecicleBin:newArr};
        case RESTORE:
            const arr2=[];
            state.RecicleBin.forEach(task => {
                if (task.id!==action.payload.id)
                arr2.push(task);
            }) 
            return{...state,RecicleBin:arr2};    
        default:
            return state;
    }
}
export default reciclebinreducer;
       
