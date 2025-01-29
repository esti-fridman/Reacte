import { ADD_TODO,REMOVE_TODO,REMOVE_NEVER,RESTORE } from "./actionTypes";

export const addToDo = (task) => ({
    type: ADD_TODO,
    payload: task,
});

export const removeToDo = (task) => ({
    type: REMOVE_TODO,
    payload: task,
});


export const removeNever = (task) => ({
    type: REMOVE_NEVER,
    payload: task,
});

export const restore = (task)=>({
    type:RESTORE,
    payload:task,
})