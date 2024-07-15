/* Javascript Operator */

/* Arithmetic Opera */

// {
//     let x = 10;
//     let y = 20;
//     console.log(x + y);
// }
// {
//     let x = 10;
//     let y = 20;
//     console.log(x - y);
// }
// {
//     let x = 10;
//     let y = 20;
//     console.log(x * y);
// }
// {
//     let x = 30;
//     let y = 20;
//     console.log(x / y);
// }
// {
//     let x = 20;
//     let y = 3;
//     console.log(x % y);
// }
// {
//     let x = 2;
//     let y = 4;
//     console.log(x ** y);// 2x2x2x2
// }

 /* Unery Opera */

// {
//     let x = 20;
//     console.log(++x);
//     console.log(--x);
//     console.log(x--);
//     console.log(x);
//     console.log(x++);
//     console.log(x);
// }

/*  DataTypes In Javascript  */

/* Primitive DataTypes*/

/*

String
Number
Boolean
BigInt
Undefined
Null
Symbol

*/

/* Non_Primitive DataTypes */

/*

Array
Object
Function

*/

// Primitive values are immutable
// Primitive values compared by value
// Non-primitive values are mutable
// Non-primitive compare by reference not value

/* Comparision Opera */

/* Eqaulity Opera */

// {
//    let x = "symbol"
//    let y = "number"
//    console.log(x == y);
// }
// {
//     let x = "number"
//     let y = "number"
//     console.log(x == y);
// }
// {
//     let x = "10" // string
//     let y = 10  // number
//     console.log(x == y);
// }

/* Type Of Opera */

// {
//     let x = "10" // string
//     let y = 10  // number
//     console.log(x == y);
//     console.log(typeof x);
//     console.log(typeof y);
// }

/* Strict Eqaulity Opera */

// {
//     let x = "10" // string
//     let y = 10  // number
//     console.log(x === y);
// }
// {
//     let x = 10 // number
//     let y = 10  // number
//     console.log(x === y);
// }
// {
//     let x = 9 // number
//     let y = 10  // number
//     console.log(x === y);
// }

/* Not Equality Opera */

// {
//     let x = "10" // string
//     let y = 10  // number
//     console.log(x != y);
// }

// {
//     let x = "10" // string
//     let y = 11  // number
//     console.log(x != y);
// }

/* Not Strict Equality Opra */

// {
//     let x = "10" // string
//     let y = 11  // number
//     console.log(x !== y);
// }

// {
//     let x = "10" // string
//     let y = "10"  // string
//     console.log(x !== y);
// }

// {
//     let x = "11" // string
//     let y = "10"  // string
//     console.log(x !== y);
// }

/* LessThan */

// {
//     let x = 10 // number
//     let y = 10  // number
//     console.log(x < y);
// }
// {
//     let x = 10 // number
//     let y = 11  // number
//     console.log(x < y);
// }

/* GretherThan */

// {
//     let x = 10 // number
//     let y = 10  // number
//     console.log(x > y);
// }
// {
//     let x = 12 // number
//     let y = 11  // number
//     console.log(x > y);
// }

/* LessThan Equel to */

// {
//     let x = 10 // number
//     let y = 10  // number
//     console.log(x <= y);
// }
// {
//     let x = 10 // number
//     let y = 11  // number
//     console.log(x <= y);
// }
// {   
//     let x = 10 // number
//     let y = 9  // number
//     console.log(x <= y);
// }

/* GrethetThan Equel to */

// {
//     let x = 10 // number
//     let y = 10  // number
//     console.log(x >= y);
// }
// {
//     let x = 10 // number
//     let y = 11  // number
//     console.log(x >= y);
// }
// {   
//     let x = 12 // number
//     let y = 9  // number
//     console.log(x >= y);
// }


/* Assignment Opera */

{
    // let x = 5
    // let y = 5       

    // console.log(x+=y);// x = x + y
    // console.log(x);

    // console.log(x-=y);// x = x-y
    // console.log(x);

    // console.log(x/=y); // x = x / y
    // console.log(x);

    // console.log(x*=y); // x = x * y
    // console.log(x);

    // console.log(x**=y);

}

/* Logical Opera */

{
    // let x = true;
    // let y = false;
    // let z = false;

    // Logical AND

    // console.log(x&&y&&z);

    // Logical OR

    // console.log(x || y || z);

    // Logical NOT

    // console.log(!(x&&y));
}

/* Ternary Opra */

// condition ? statement of true : statement of false

{
    // let Age = true;

    // if(Age == true){
    //     console.log("You Are Eligible For Vote")
    // }
    // else{
    //     console.log("You Are Not Eligible For Vote");
    // }

    // console.log(Age ? "You Are Eligible For Vote" : "You Are Not Eligible For Vote");
}

/* Assignment to String */

{
    // let str = "SkillQode"
    // let str1 = "Course"

    // /* String Merge*/

    // console.log(str + str1);
}
{
    // let str = "SkillQode" // string
    // let str1 = 10         // number
    // let str2 = 20

    /* String Merge*/

    // console.log(str2 + str2 + str1 + str + str1 + str1 + str2+ str2 + str2);
    // console.log(str2 / str2 + str2 + str1 + str + str1 + str1 + str2+ str2 +  str2 + str2);
    // console.log((str2 + str2 + str2) + (str1 + str + str1 + str1 + str2)+ (str2 +  str2 + str2));
}


/* String Define Way */

{
     let string1 = 'this is a string'
     let string2 = "this is a string"
     let string3 = `this is
    
    
    a string`

    console.log(string1);
    console.log(string2);
    console.log(string3);
}
