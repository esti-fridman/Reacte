import { createStore ,combineReducers,applyMiddleware} from "redux";
import validaitorMiddleware from "./middlewares/walidaitorMiddleware";

import {taskManagerReducer} from './reducers'
import reciclebinreducer from "./reducerReciclebin";

const rootReducer=combineReducers({
     todos:taskManagerReducer,
    reciclebin:reciclebinreducer,
});


export const store=createStore(rootReducer,applyMiddleware(validaitorMiddleware));

export default store