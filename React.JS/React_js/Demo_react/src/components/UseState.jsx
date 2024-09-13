import React from 'react'
import { useState } from 'react'

const UseState = () => {

    const [count,setCount] = useState(0);


    return (
         
    <div>
      <h1>THis is useState method </h1>
      <div className='w-24 h-24 bg-yellow-200 flex justify-center items-center'>{count}</div>
      <button onClick={() => setCount(count+1)}>click here</button>
    </div>

  )
}

export default UseState
