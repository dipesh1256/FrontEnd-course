/* Javascript Array */

{
   let arr = []
   console.log(arr);
   console.log(arr.length);
   let arr1 = new Array()
   console.log(arr1);
   console.log(arr1.length);
   let arr2 = ['One' , 'Two' , 'Three' , 4 , true , false]
   console.log(arr2);
   document.write(arr2)
   let arr3 = new Array('One' , 'Two' , 'Three' , 4 , true , false)
   console.log(arr3);
   console.log(arr3[5]);
   console.log(arr3.indexOf("one"))
   let arr4 = []
   let arr5 = arr4.length = 10
   console.log(arr5);
   console.log(arr4);
   console.log(arr4.length);
   arr4[5] = "Six"
   arr4[4] = "Five"
   console.log(arr4);
   console.log(arr4[5]);
   console.log(Object.keys(arr4));
   console.log(arr4.push("Last"));
   console.log(arr4);
   console.log(arr4.unshift("first"))
   console.log(arr4);
   console.log(arr4.pop());
   console.log(arr4);
   console.log(arr4.shift());
   console.log(arr4);
}

{
   let arry = ['html' , 'css' , 'bootstrap' , 'tailwind' , 'reactjs' , 'nodejs']

   console.log(arry);

   for(let value of arry){
      console.log(`${value}`);
   }
}

{
   let arry = ['html' , 'css' , 'bootstrap' , 'tailwind' , 'reactjs' , 'nodejs']
}


// Array.from()
{
   let array = [10 , 20 , 30 , 40 , 50]

   let demo = Array.from(array  , (i) => i * i )

   console.log(demo);
}

