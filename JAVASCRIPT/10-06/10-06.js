/* Javascript String Method */

/* String Replace Method */
 //replace(regex , replacement).


 {
    // let regex = /Dog/i
    // let Str = `Dog is very Cute but
    //  Dog is Danger and Cat is very 
    //  Pritty But is was bite.`
    // console.log(Str.replace(regex , 'cat'));
    // console.log(Str.replaceAll(regex , 'cat'));
 }

 /* String Match And MatchAll Method */

 {

    // let regex = /[A-Z]/g

    // let Str = `Dog is very Cute but
    //  Dog is Danger and Cat is very 
    //  Pritty But is was bite.`

    //  let Array = [...Str.matchAll(regex)]

    //  console.log(Str.match(regex));
    //  console.log(Array);

 }


 /* Map Method */

 /*
new Map()
get
set
delete
clear
entries  
size
keys
values
has
forEach
 */


 {
    let Maps = new Map([['one' , "Toys"] , ['two' , "Accsessories"] , ["three" , 155]]).forEach(greek)
    // console.log(Maps);
    // // console.log(Maps.size);
    // console.log(Maps.get('one'));
    // console.log(Maps.get('two'));
    // console.log(Maps.set('one' , "Object"));
    // console.log(Maps.get('one'));
    // console.log(Maps.clear());
    // console.log(Maps);
    // console.log(Maps.size);
    // console.log(Maps.has('one'));
    // console.log(Maps.has('two'));
    // console.log(Maps.has('three'));
    // console.log(Maps.has('four'));
    // console.log(Maps.keys());
    // console.log(Maps.delete("one"));
    // console.log(Maps.get('one'));
    // console.log(Maps.entries());
    function greek(value , key){
       console.log(`${key} = ${value}`);
       }
       
 }

 {
   let Maps = new Map([['one' , "Toys"] , ['two' , "Accsessories"] , ["three" , 155]])
   console.log(Maps.values());
   console.log(Maps.keys());

 }


