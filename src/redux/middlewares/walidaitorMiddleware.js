import { ADD_TODO } from "../actionTypes";

 const validaitorMiddleware = store => next => action => {
   if(action.type==ADD_TODO){
    if(!action.payload.id||!action.payload.Name||!action.payload.Date||!action.payload.Time)
     return;
   }
   next(action);   
};
export default validaitorMiddleware;