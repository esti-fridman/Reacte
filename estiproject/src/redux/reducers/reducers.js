import { ADD_TODO,REMOVE_TODO,RESTORE } from "../actionTypes";

const initialState = {
    Tasks:[],
};

export const taskManagerReducer = (state=initialState,action)=> {
    switch(action.type){
        case ADD_TODO:
            return{...state,
                    Tasks:[...state.Tasks,action.payload],      
                  };
        case REMOVE_TODO:
            const newArr=[];
            state.Tasks.forEach(task => {
                if (task.id!==action.payload.id)
                newArr.push(task);
            })
            return{...state,Tasks:newArr};
        case RESTORE:
            return{...state,
                Tasks:[...state.Tasks,action.payload],      
              };
        default:
            return state;
    }
}
export default taskManagerReducer;
       
