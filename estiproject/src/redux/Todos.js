import {useDispatch, useSelector } from "react-redux";
import { addToDo,removeToDo } from "./actions";
import { useNavigate } from "react-router-dom"
import './style.css'
import RecicleBin from "./Rciclebin";

function Todos() {


    const Tasks=useSelector((state)=>state.todos.Tasks);
  
   
    const dispatch=useDispatch();

    const handleAddTask = () => {
        
        const taskName = document.querySelector('[name="taskName"]').value; 
        const taskDate = document.querySelector('[name="taskDate"]').value; 
        const taskTime = document.querySelector('[name="taskTime"]').value;

            dispatch(addToDo({ id: Date.now(), Name: taskName, Date: taskDate,Time: taskTime }));
            document.querySelector('[name="taskName"]').value = ""; 
            document.querySelector('[name="taskDate"]').value = ""; 
            document.querySelector('[name="taskTime"]').value = ""; 
        
    };

  return (
    <div>
      
      <h1>יומן משימות📆📆</h1>
        <ul>
            {Tasks.map((task) => (
                <li key={task.id}>
                    {task.Name} - {task.Date} - {task.Time}
                    <button onClick={() => dispatch(removeToDo(task))}  type="button">מחק</button>
                </li>
            ))}
        </ul>


        <form>
            <input type="text" name="taskName" placeholder="הכנס את שם המשימה" />
            <input type="date" name="taskDate"/>
            <input type="time" name="taskTime"/>
            <button onClick={handleAddTask} type="button">הוסף משימה</button>
         </form>
    </div>
  );
};
export default Todos;










