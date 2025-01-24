import { UseSelector,useDispatch, useSelector } from "react-redux";
import { addToDo,removeToDo } from "./actions";
import './style.css'

function Todos() {
    const Tasks=useSelector((state)=>state.Tasks);
    const dispatch=useDispatch();

    const handleAddTask = () => {
        
        const taskName = document.querySelector('[name="taskName"]').value; // שליפת ערך משדה הטקסט
        const taskDate = document.querySelector('[name="taskDate"]').value; // שליפת ערך משדה התאריך
        const taskTime = document.querySelector('[name="taskTime"]').value;

        if (taskName && taskDate) {
            // הוספת משימה חדשה ל-Redux
            dispatch(addToDo({ id: Date.now(), Name: taskName, Date: taskDate,Time: taskTime }));
            document.querySelector('[name="taskName"]').value = ""; // ניקוי שדה שם המשימה
            document.querySelector('[name="taskDate"]').value = ""; // ניקוי שדה התאריך
            document.querySelector('[name="taskTime"]').value = ""; // ניקוי שדה התאריך
        }
    };

  return (
    <div>
      <h1>רשימת משימות</h1>
        <ul>
            {Tasks.map((task) => (
                <li key={task.id}>
                    {task.Name} - {task.Date} -{task.Time}
                    <button onClick={() => dispatch(removeToDo(task.id))}  type="button">מחק</button>
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










