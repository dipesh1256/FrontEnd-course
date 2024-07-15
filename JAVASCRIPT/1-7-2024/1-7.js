/* Asynchronous Function / javascript */

/* Synchrouns Execution */

/* Run Code Line By LIne */

console.log('hello');
console.log(10+12);
console.log('hi , How Are You');
console.log(false);
console.log(12225n);
console.log(() => {
        return console.log(10+12);
});


/* Asynchronous / javascript */

/* 
setTimeout
setInterval
clearTimeout
clearInterval
*/ 

// console.log('hello');
// console.log(10+12);
// console.log('hi , How Are You');
// console.log(){
//      return console.log(22 + 44);
// }
// setTimeout(sum , 5000)
// console.log(false);
// console.log(12225);
// console.log(() => {
//         return console.log(10+12);
// });


/* Set TImeout*/

// settimeout(code)
// settime(code,delay)

// setTimeout(functionRef)
// setTimeout(functionRef , delay)
// setTimeout(functionRef,delay , param1)
// setTimeout(functionRef,delay , param1 , param2)
// setTimeout(functionRef,delay , param1 , param2, /*  ...,*/ paramN)


// {
//     setTimeout(() => {
//         return console.log('Hello');
//     } , 5000)
// }


// {
//     const sum = () => {
//         return console.log('Hello');
//     }
//     setTimeout(sum , 10000)
// }

// {
//     const sum = (a , b c) => {
//         return console.log(a + b + c);
//     }
//     setTimeout(sum , 8000 , 20 , 20 , 60)
// }


/* clearTimeout*/

// clearTimeout(TimeoutID)

// const TimeoutID = setTimeout(function sum() {
//        ret(urn console.log(10+20));
// } , 10000)


// console.log(TimeoutID);

// clearTimeout(TimeoutID);