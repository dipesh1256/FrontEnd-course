/* Javascript Array */

// {
//    let arr = []
//    console.log(arr);
//    console.log(arr.length);
//    let arr1 = new Array()
//    console.log(arr1);
//    console.log(arr1.length);
//    let arr2 = ['One' , 'Two' , 'Three' , 4 , true , false]
//    console.log(arr2);
//    document.write(arr2)
//    let arr3 = new Array('One' , 'Two' , 'Three' , 4 , true , false)
//    console.log(arr3);
//    console.log(arr3[5]);
//    console.log(arr3.indexOf("one"))
//    let arr4 = []
//    let arr5 = arr4.length = 10
//    console.log(arr5);
//    console.log(arr4);
//    console.log(arr4.length);
//    arr4[5] = "Six"
//    arr4[4] = "Five"
//    console.log(arr4);
//    console.log(arr4[5]);
//    console.log(Object.keys(arr4));
//    console.log(arr4.push("Last"));
//    console.log(arr4);
//    console.log(arr4.unshift("first"))
//    console.log(arr4);
//    console.log(arr4.pop());
//    console.log(arr4);
//    console.log(arr4.shift());
//    console.log(arr4);
// }

// {
//    let arry = ['html' , 'css' , 'bootstrap' , 'tailwind' , 'reactjs' , 'nodejs']

//    console.log(arry);

//    for(let value of arry){
//       console.log(`${value}`);
//    }
// }

// {
//    let arry = ['html' , 'css' , 'bootstrap' , 'tailwind' , 'reactjs' , 'nodejs']
// }
// Array.from()

// The Array.from() static method creates a new, shallow-copied Array instance from an iterable or array-like object.

// Array.from(arrayLike)
// Array.from(arrayLike, mapFn)
// Array.from(arrayLike, mapFn, thisArg)

// {
//    let array = [10 , 20 , 30 , 40 , 50]

//    let demo = Array.from(array  , (i) => i * i )

//    console.log(demo);
// }

// Array is.Array() Method
// The Array.isArray() static method determines whether the passed value is an Array.
// Array.isArray(value)

{
   // let arr = [10 , 20 , 30 , 40]
   // let obj = {}
   // let str = 'This is Array Method'
   // console.log(Array.isArray(arr));
   // console.log(Array.isArray(obj));
   // console.log(Array.isArray(str));
}

// Array Array.of Method 
// The Array.of() static method creates a new Array instance from a variable number of arguments, regardless of number or type of the arguments.
// Array.of()
// Array.of(element1)
// Array.of(element1, element2)
// Array.of(element1, element2, /* …, */ elementN)

{
   // let ArrayOf = Array.of()
   // let ArrayOf2 = Array.of('greek' , true , 10)
   // let ArrayOf3 = new Array('greek' , true , 10)
   // console.log(ArrayOf);
   // console.log(ArrayOf2);
   // console.log(ArrayOf3);
}

// Array Array.at()
// The at() method of Array instances takes an integer value and returns the item at that index, allowing for positive and negative integers. Negative integers count back from the last item in the array.
// at(index)

{
   // let arr = ['html',  'css' , 'reactJs' , 15 , true]
   // console.log(arr.at(0));
   // console.log(arr.at(-2));
   // console.log(arr[-1]);
}

//Array Array.concat() Method
// The concat() method of Array instances is used to merge two or more arrays. This method does not change the existing arrays, but instead returns a new array.
// concat()
// concat(value1)
// concat(value1, value2)
// concat(value1, value2, /* …, */ valueN)

{
   // let arr1 = ['html' ,'css', 'javascript']
   // let arr2 = [56 , 547 , 352]
   // let arr3 = [true , undefined , 'concat']

   // let arr4 = arr1.concat(arr3 , arr2)

   // console.log(arr4);
}

// Array Array.copyWithin() Method
// The copyWithin() method of Array instances shallow copies part of this array to another location in the same array and returns this array without modifying its length.
// copyWithin(target, start)
// copyWithin(target, start, end)

{
   // let arr1 = ['html' , 'css' , 'tailwind' , 'sass' , 'reactJs']
   // console.log(arr1);
   // // console.log(arr1.copyWithin(0 , 3));
   // console.log(arr1.copyWithin(0 , 2, 5));
}

// Array Array.entries() Method
// The entries() method of Array instances returns a new array iterator object that contains the key/value pairs for each index in the array.
// entries()

// {
//    let arr1 = ['html' , 'css' , 'tailwind' , 'sass' , 'reactJs']
//    let Entries = arr1.entries()
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
// }

// Array Array.keys() Method

// {
//    let arr1 = ['html' , 'css' , 'tailwind' , 'sass' , 'reactJs']
//    let Entries = arr1.keys()
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
//    console.log(Entries.next().value);
// }

// Array Array.every() Method
// The every() method of Array instances tests whether all elements in the array pass the test implemented by the provided function. It returns a Boolean value.
// every(callbackFn)
// every(callbackFn, thisArg)

{
   // let arr1 = ['html' , 'css' , 'tailwind' , 'sass' , 'reactJs']
   // let arr2 = [10 , 20 , 30 , 40]
   // // let Array = arr1.every((item) => item+item )
   // // console.log(Array);
   // let Array1 = arr2.every(item => item < 30)
   // console.log(Array1);
}

// Array Array.fill() Method
// The fill() method of Array instances changes all elements within a range of indices in an array to a static value. It returns the modified array.
// fill(value)
// fill(value, start)
// fill(value, start, end)

{
   //  let arr2 = [10 , 20 , 30 , 40 , 50 , 60]
   // //  let Fill = arr2.fill(10)
   // //  let Fill2 = arr2.fill(10 , 2)
   //  let Fill3 = arr2.fill(10  , 3 , 5)

   // //  console.log(Fill);
   // //  console.log(Fill2);
   //  console.log(Fill3);
}

// Array Array.filter() Method
// The filter() method of Array instances creates a shallow copy of a portion of a given array, filtered down to just the elements from the given array that pass the test implemented by the provided function.
// filter(callbackFn)
// filter(callbackFn, thisArg)

{
   // let arr2 = [10, 20, 30, 40, 50, 60]
   // let Filter = arr2.filter(index => index >= 50)
   // console.log(Filter);


   // let arr1 = ['html' , 'css' , 'tailwind' , 'sass' , 'reactJs']
   // let Filter2 = arr1.filter(item => item.length < 5 )
   // console.log(Filter2);
}


//Array Array.find() Method
// The find() method of Array instances returns the first element in the provided array that satisfies the provided testing function. If no values satisfy the testing function, undefined is returned.

// If you need the index of the found element in the array, use findIndex().
// If you need to find the index of a value, use indexOf(). (It's similar to findIndex(), but checks each element for equality with the value instead of using a testing function.)
// If you need to find if a value exists in an array, use includes(). Again, it checks each element for equality with the value instead of using a testing function.
// If you need to find if any element satisfies the provided testing function, use some().
// If you need to find all elements that satisfy the provided testing function, use filter().

// find(callbackFn)
// find(callbackFn, thisArg)

{
   // let arr1 = [10 , 20 , 40 , 50 , 60 , 51 , 70 ]

   // let Finds = arr1.find(element => element > 50)

   // console.log(Finds);
}

// Array Array.findIndex() Method

//The findIndex() method of Array instances returns the index of the first element in an array that satisfies the provided testing function. If no elements satisfy the testing function, -1 is returned.

// See also the find() method, which returns the first element that satisfies the testing function (rather than its index).

// findIndex(callbackFn)
// findIndex(callbackFn, thisArg)

{
   // let arr1 = [ 4 , 5 , 10 , 20 , 40 , 50 , 60 , 51 , 70 ]

   // let Finds = arr1.findIndex(item => item > 10)

   // console.log(Finds);
}


// Array Arry.findLastIndex() Method

// The findLast() method of Array instances iterates the array in reverse order and returns the value of the first element that satisfies the provided testing function. If no elements satisfy the testing function, undefined is returned.

// findLast(callbackFn)
// findLast(callbackFn, thisArg)


{  
    let arr1 = [ 4 , 5 , 10 , 20 , 80 ,  40 , 50 , 60 , 51 , 70 ]

   let Finds = arr1.findLast(item => item > 40);

   console.log(Finds);
}
   














