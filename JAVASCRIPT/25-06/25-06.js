/* Javascript Object */
// Examples

{
    // let array = ['html' , 'css' , 'javascript' , 'sass' , 'tailwind']
    // console.log(array[1]);

    // console.log(array.length);

    // console.log(array);

    // let Obj = {subject1:'html' , subject2:'css' , subject3:'javascript' , subject4:'sass' , subject5:'tailwind'}

    // console.log(Obj.subject5);

    // console.log(Obj);

    // let Objs = new Object({subject1:'html' , subject2:'css' , subject3:'javascript' , subject4:'sass' , subject5:'tailwind'})

    // console.log(Objs.subject3);

    // console.log(Objs);
}

// {
//     let Obj = {subject1:'html' , subject2:'css' , subject3:'javascript' , subject4:'sass' , subject5:'tailwind'}

//     // DNM
//     console.log(Obj.subject1);

//     // BNM
//     console.log(Obj['subject5']);
// }

/* Javascript Object Method */

// New Object Create Method
// Object Constructor Method

// new Object()
// new Object(value)

// Object()
// Object(value)

// The Object() constructor turns the input into an object. Its behavior depends on the input's type.


// {

//     let Obj = new Object()

//     Obj.foo = 25

//     console.log(Obj);
// }

// {
//     // let Obj = new Object(undefined)
//     let Obj = new Object(null)

//     console.log(Obj);
// }

// {
//     let Obj = new Object(122n)

//     console.log(Obj);

//     console.log(typeof Obj);
// }


/* Javascript Object.Prototypes */

// The Object.assign() static method copies all enumerable own properties from one or more source objects to a target object. It returns the modified target object.

// Object.assign(target)
// Object.assign(target, source1)
// Object.assign(target, source1, source2)
// Object.assign(target, source1, source2, /* …, */ sourceN)


// {
//     let target = {a1:10 , a2:20}
//     let source1 = {a3:30 , a4:40}
//     let source2 = {a5:50 , a6:60}
    
//     let Obj = Object.assign(target , source1 , source2)

//     console.log(Obj);

//     console.log(target.a6);
//     console.log(source1);
// }

// // Cloning an object

// // Deep Drive In Object

// {
//     let target = {a1:10 , a2:20}
//     let source1 = {a3:30 , a4:40}
//     let source2 = {a5:50 , a6:60}
    
//     let Obj = Object.assign({} , source1 , source2)

//     console.log(Obj);
// }
{
    // let target = {a1:10 , a2:20 , a3:{a:50}}
    
    // let Obj = Object.assign({} , target )
    
    // target.a1 = 50

    // console.log(target);

    // console.log(Obj);

    // console.log(target.a1);

    // target.a3.a = 60

    // console.log(target);
}


// {
//     let target = {a1:10 , a2:20 , a3:{a:50}}

    
//     let Obj = structuredClone(target)

//     // let Obj = Object.assign(target)
    
//     target.a1 = 50

//     console.log(Obj);

//     console.log(target);
// }

// Merging objects

// Merging objects with same properties

{
    let target = {a:10 , b:20 , c:30 , d:40}
    let source1 = {b:50 , c:60 , d:70}
    let source2 = {c:80 , d:90 , e:100}

    console.log(target);
    console.log(source1);
    console.log(source2);

    let Obj = Object.assign({}, target , source1 , source2)

    console.log(Obj);

}






