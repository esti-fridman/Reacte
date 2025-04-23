import React, { useRef, useState, useEffect } from 'react';
import './style.css';

export default function Chat() {
    const [messages, setMessages] = useState([]);
    const AreaRef = useRef(null);

    useEffect(() => {
        AreaRef.current.scrollTop = AreaRef.current.scrollHeight;
    }, [messages]);

    return (
        <div className="chat-container">
            <div ref={AreaRef} className="chat-box">
                {messages.map((message, index) => (
                    <p key={index} className="chat-message left-message">{message}</p>
                ))}
            </div>
            <input 
                className="chat-input"
                onKeyDown={(e) => {
                    if(e.key === 'Enter' && e.target.value!== '') { 
                        const newMessage = e.target.value; 
                        setMessages((prevMessages) => [...prevMessages, newMessage]);
                        e.target.value = '';
                    } 
                }} 
                placeholder="Type a message..."
            />
        </div>
    );
}
