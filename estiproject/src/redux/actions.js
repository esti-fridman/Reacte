import { ADD_TODO,REMOVE_TODO } from "./actionTypes";

export const addToDo = (task) => ({
    type: ADD_TODO,
    payload: task,
});

export const removeToDo = (taskId) => ({
    type: REMOVE_TODO,
    payload: {id:taskId},
});