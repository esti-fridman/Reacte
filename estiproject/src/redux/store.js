import { createStore } from "redux";

import {taskManagerReducer} from './reducers'

export const store=createStore(taskManagerReducer);

export default store