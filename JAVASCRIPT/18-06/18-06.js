/* Javascript Array Method */

// Javascritp Array Array.keys() Method

// The keys() method of Array instances returns a new array iterator object that contains the keys for each index in the array.

// keys()

{
    // let arr = ['html' , 'nextjs' , 'reactjs' , 20 , 35 , 65]

    // let keys = arr.keys()

    // for(keys of arr){
    //     console.log(`${keys}`);
    // }

}

// Javascript Array Array.lastIndexOf() Method

// The lastIndexOf() method of Array instances returns the last index at which a given element can be found in the array, or -1 if it is not present. The array is searched backwards, starting at fromIndex.

// lastIndexOf(searchElement)
// lastIndexOf(searchElement, fromIndex)


{
    // let arr = [20 , 'html' , 'nextjs' , 'reactjs' , 20 , 35 , 65 , 20]

    // let lastindexof = arr.lastIndexOf(20)
    // let indexof = arr.indexOf(20)

    // console.log(lastindexof);
    // console.log(indexof);
}

// Javascript Array Array.map() Method

// The map() method of Array instances creates a new array populated with the results of calling a provided function on every element in the calling array.

// map(callbackFn)
// map(callbackFn, thisArg)

{    
    //  let arr = [20 , 'html' , 'nextjs' , 'reactjs' , 20 , 35 , 65 , 20]

    //  let maps = arr.map((item) => item + item)

    //  console.log(maps);

    //  let num = [10 , 20 , 30]

    //  console.log(num.map((item) => item / item));

    //  console.log(num.map((item) => console.log(item)));
}

// Javascript Array Array.pop() / Array.push() / Array.shift() / Array.unshift()

// The pop() method of Array instances removes the last element from an array and returns that element. This method changes the length of the array.

// pop()


// The push() method of Array instances adds the specified elements to the end of an array and returns the new length of the array.

// push()
// push(element1)
// push(element1, element2)
// push(element1, element2, /* …, */ elementN)


// The shift() method of Array instances removes the first element from an array and returns that removed element. This method changes the length of the array.

// shift()

// The unshift() method of Array instances adds the specified elements to the beginning of an array and returns the new length of the array.

// unshift()
// unshift(element1)
// unshift(element1, element2)
// unshift(element1, element2, /* …, */ elementN)

{
    //  let arr = [20 , 'html' , 'nextjs' , 'reactjs' , 20 , 35 , 65 , 20]

    //  console.log(arr);
    //  console.log(arr.pop());
    //  console.log(arr.pop());
    //  console.log(arr.pop());
    //  console.log(arr.pop());
    //  console.log(arr.pop());
    //  console.log(arr);
    //  console.log(arr.push('one'));
    //  console.log(arr.push('two'));
    //  console.log(arr.push('three' , 'four'));
    //  console.log(arr);
    //  console.log(arr.shift());
    //  console.log(arr.shift());
    //  console.log(arr.shift());
    //  console.log(arr);
    //  console.log(arr.unshift(100));
    //  console.log(arr.unshift(200));
    //  console.log(arr.unshift(300 , 400));
    //  console.log(arr);
}


// Javascript Array Array.reduce() Method 

// The reduce() method of Array instances executes a user-supplied "reducer" callback function on each element of the array, in order, passing in the return value from the calculation on the preceding element. The final result of running the reducer across all elements of the array is a single value.

// The first time that the callback is run there is no "return value of the previous calculation". If supplied, an initial value may be used in its place. Otherwise the array element at index 0 is used as the initial value and iteration starts from the next element (index 1 instead of index 0).


// reduce(callbackFn)
// reduce(callbackFn, initialValue)


{
    //    let arr = [20 ,20 , 35 , 65 , 20]

    //    let initialValue = 0

    //    const reduces = arr.reduce((prev, current) => prev + current , initialValue)

    //    0 + 20
    //    20 + 20
    //    40 + 35
    //    75 + 65
    //    140 + 20
    //    160

    //    console.log(reduces);

}

// Javascript Array Array.reduceRight() Method

// The reduceRight() method of Array instances applies a function against an accumulator and each value of the array (from right-to-left) to reduce it to a single value.

// See also Array.prototype.reduce() for left-to-right.

// reduceRight(callbackFn)
// reduceRight(callbackFn, initialValue)

{
    // let arr = [[10 , 20] ,[20 , 10],[10 , 10],[20 , 20]]

    // console.log(arr);

    // const ReduceRight = arr.reduceRight((prev , next) => prev + next)
    // const ReduceRight1 = arr.reduceRight((prev , next) => prev.concat(next))

    // console.log(ReduceRight);
    // console.log(ReduceRight1);
}


// Javascript Array Array.reverse() Method

// The reverse() method of Array instances reverses an array in place and returns the reference to the same array, the first array element now becoming the last, and the last array element becoming the first. In other words, elements order in the array will be turned towards the direction opposite to that previously stated.

// To reverse the elements in an array without mutating the original array, use toReversed().

// reverse()


{
    // let arr = [10 ,20 , 35 , 65 , 20]
    // let arr = "dipesh";  // string reverse use

    // let reverses = arr.split('').reverse().join('');

    // console.log(reverses);
}

// javascript Array Array.slice() Method

// The slice() method of Array instances returns a shallow copy of a portion of an array into a new array object selected from start to end (end not included) where start and end represent the index of items in that array. The original array will not be modified.

// slice()
// slice(start)
// slice(start, end)

{
    // let fruits = ['banana' , 'mango' , 'strawberry' , 'watermelon', 'graps']

    // console.log(fruits);

    // console.log(fruits.slice(2));

    // console.log(fruits.slice(2 , 3));
}


// Javascript Array Array.some() Method

// The some() method of Array instances tests whether at least one element in the array passes the test implemented by the provided function. It returns true if, in the array, it finds an element for which the provided function returns true; otherwise it returns false. It doesn't modify the array.

// some(callbackFn)
// some(callbackFn, thisArg)

{
    // let num = [10 , 20 , 30 , 40 , 50]

    // let some = num.some((item) => item === item)

    // console.log(some);
}

// Javascript Array Array.sort() Method

// The sort() method of Array instances sorts the elements of an array in place and returns the reference to the same array, now sorted. The default sort order is ascending, built upon converting the elements into strings, then comparing their sequences of UTF-16 code units values.

// The time and space complexity of the sort cannot be guaranteed as it depends on the implementation.

// To sort the elements in an array without mutating the original array, use toSorted().

// sort()
// sort(compareFn)

{
    // let arr = ['one' , 'two' , 'three' , 'four']

    // console.log(arr);

    // console.log(arr.sort()); // alfabatically

    // let num = [50 , 30 , 400 , 10 , 200]

    // console.log(num.sort(((a,b )=> a - b)));
}

// Javascript Array.Splice() Method

// The splice() method of Array instances changes the contents of an array by removing or replacing existing elements and/or adding new elements in place.

// To create a new array with a segment removed and/or replaced without mutating the original array, use toSpliced(). To access part of an array without modifying it, see slice().

// splice(start)
// splice(start, deleteCount)
// splice(start, deleteCount, item1)
// splice(start, deleteCount, item1, item2)
// splice(start, deleteCount, item1, item2, /* …, */ itemN)

 {
    //  let arr = ['one' , 'two' , 'three' , 'four' , 'five']

    //  console.log(arr);

    //  console.log(arr.splice(2));

    //  console.log(arr.splice(0 , 2));

    //  console.log(arr.splice(2 , 6 , 20));

    //  console.log(arr.splice(5 , 1 , 'six'));

    //  console.log(arr);
 }


  
