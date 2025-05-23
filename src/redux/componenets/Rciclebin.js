import { removeNever,restore } from "../actions";
import {useDispatch, useSelector } from "react-redux";
import './style.css'


function RecicleBin() {
    const tasksRemove=useSelector((state)=>state.reciclebin.RecicleBin);
    const dispatch=useDispatch();

  return (
    <div className="taskDiv">
      <h1> סל המחזור🚮🚮</h1>
        <ul>
            {tasksRemove.map((task) => (
                <li key={task.id}>
                    {task.Name} - {task.Date} - {task.Time}
                    <button className="remove" onClick={() => dispatch(removeNever(task))} >מחק </button>
                    <button onClick={() => dispatch(restore(task))}  type="button">שחזר</button>
                </li>
            ))}
        </ul>
    </div>
  );
};
export default RecicleBin;