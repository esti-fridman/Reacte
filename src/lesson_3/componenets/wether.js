import React, { useState, useEffect } from 'react'


export default function Weather() {
    const [wether, setWeather] = useState([]);
    useEffect(() => {
        const fetchWether = async () => {
            try {
                const respons = await fetch('http://localhost:5199/WeatherForecast')
                const data = await respons.json();
                setWeather([...wether, data])
            } catch (error) {
                console.error('oooii error:', error);
            }
        };
        fetchWether()
    }, []);

   return(
    <>
    {wether.map(w=>{
        <p>w</p>
    })}
    </>
   );

}