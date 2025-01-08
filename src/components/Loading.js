import { useState } from "react";
export default function Loading() {

    const [loading, setLoading] = useState(true);

    function displayLoading() {
        if (loading) {
            return <h1> Loading... </h1>
        }
    }
    
    return (
        <>
        <p> loading component</p>
            {displayLoading()}
        </>
    )
}