/* Javascript Basic Functions */

/* Functions are one of the fundamental building blocks in JavaScript. A function in JavaScript is similar to a procedure—a set of statements that performs a task or calculates a value, but for a procedure to qualify as a function, it should take some input and return an output where there is some obvious relationship between the input and the output. To use a function, you must define it somewhere in the scope from which you wish to call it. */

// The name of the function.
// A list of parameters to the function, enclosed in parentheses and separated by commas.
// The JavaScript statements that define the function, enclosed in curly braces, { /* … */ }.


// function sum(a , b , c){
//     return  a * b + c
// }

// cons                                                                                                                                                                                                                             ole.log(sum(10 , 20 , 30));
// console.log(sum(60 , 20 , 30));
// console.log(sum(60 , 20 , -30));
// console.log(sum('one' , 'two' , 'three'));

// When you pass an object as a parameter, if the function changes the object's properties, that change is visible outside the function, as shown in the following example

// {
//     function Obj(newObj){
//         newObj.name = 'Jaguar'
//     }   

//     const item = {
//         name:'Audi',
//         color:'black',
//         model:2024
//     }

//     console.log(item);
//     console.log(item.name);
//     console.log(item.color);
//     console.log(item.model);
//     Obj(item)
//     console.log(item.name);
//     console.log(item);
// }

// When you pass an array as a parameter, if the function changes any of the array's values, that change is visible outside the function, as shown in the following example.


{
    // let arr = [10 , 20 , 30]

    // console.log(arr);

    // function ValueArr(Arrays){
    //     Arrays[0] = 40
    // }

    // console.log(ValueArr(arr));

    // console.log(arr[0]);

    // console.log(arr);
}

/* Function with expression */

{
    // function Multi(num , num){
    //     return num * num
    // }

    // console.log(Multi(100 , 100));
}

/* Basic Function vs Arrow Function  */


// basic Function

// function sum(num){
//     return num + num
// }
// console.log(sum(10));

// Arrow Function

// const sum1 = num => num + num
// const sum2 = (num , string) => num + string

// console.log(sum1(10));
// console.log(sum2(10 , 'Arrow'));
// console.log(sum2(10));




function myFunc(theArr) {
    theArr[0] = 30;
  }
        
  const arr = [45];
  
  console.log(arr[0]); // 45
  myFunc(arr);
  console.log(arr[0]); // 30




