// Array.prototype.findLastIndex()
// Array.prototype.flat()
// Array.prototype.flatMap()
// Array.prototype.forEach()
// Array.prototype.includes()
// Array.prototype.indexOf()
// Array.prototype.join()


// Array.prototype.findLastIndex()  

// let array1 = [5, 12, 50, 130, 44];

// let Num = (element) => element > 45;

// console.log(array1.findLastIndex(Num));


// Array.prototype.flat()

// let arr1 = [0, 1, 2, [3, 4 , 5 , 6]];

// console.log(arr1.flat());
// let arr2 = [0, 1, [2, , 3 [4 , 5 [6, 7]]]];
// console.log(arr2.flat());
// console.log(arr2.flat(3));
// console.log(arr2.flat(Infinity));


// Array.prototype.flatMap()

// let arr1 = [1, 2, 1];

// let map = arr1.flatMap((num) => (num === 2 ? [2, 2] : 1));

// console.log(map);


// Array.prototype.forEach()

// let array1 = ['a', 'b', 'c'];

// array1.forEach((amt) => console.log(amt));



// Array.prototype.includes()
// return true fals

// let arr1 = [1, 2, 3];

// console.log(arr1.includes(2));  //true

// const pets = ['dips', 'nayan', 'het'];

// console.log(pets.includes('dips')); // true

// console.log(pets.includes('th')); //false


// Array.prototype.indexOf()

// The indexOf() method of Array instances returns the first index at which a given element can be found in the array, or -1 if it is not present.


// let beasts = ['tailwind', 'css', 'sass', 'js', 'html'];

// console.log(beasts.indexOf('css'));

// console.log(beasts.indexOf('html', 2));

// console.log(beasts.indexOf('python'));

      
// Array.prototype.join()

let elements = ['one', 'two', 'three'];

console.log(elements.join());

console.log(elements.join('.'));

console.log(elements.join('=')); 










