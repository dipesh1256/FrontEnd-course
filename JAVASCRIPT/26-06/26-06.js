/* Javascript Object Method */

/* Javascript Object.create() Method */

// The Object.create() static method creates a new object, using an existing object as the prototype of the newly created object.

// Object.create(proto)
// Object.create(proto, propertiesObject)


{
    // let Obj = {
    //     firstName:'Paresh',
    //     lastName:'Dhanani',
    //     proffesion:function(){
    //         console.log(`Hi , My Name Is ${this.firstName} ${this.lastName} and My Job Profile is Buiessness!`);
    //     }
    // }

    // console.log(Obj);

    // console.log(Obj.firstName);
    // console.log(Obj.lastName);
    // console.log(Obj.proffesion());

    // Obj.firstName = 'vivek'
    // Obj.lastName = 'Patel'

    // console.log(Obj);

    // console.log(Obj.proffesion());

    // let myProfile = Object.create(Obj)

    // console.log(myProfile.firstName);
    // console.log(myProfile.lastName);
    // console.log(myProfile.proffesion());


}

/* Javascript Object.defineProperties() method */

// The Object.defineProperties() static method defines new or modifies existing properties directly on an object, returning the object.

// Object.defineProperties(obj, props)

{
// const object1 = {};

// console.log(object1);

// Object.defineProperties(object1, {
//   property1: {
//     value: 42,
//   },
//   property2: {
//     value:100
//   },
// });

// console.log(object1.property2);

}


/* Javascript Object.defineproperty() Method */

// The Object.defineProperty() static method defines a new property directly on an object, or modifies an existing property on an object, and returns the object.

// Object.defineProperty(obj, prop, descriptor)


{
    // const object1 = {};
    
    // Object.defineProperty(object1, 'property1', {
    //   value: 42,
    //   writable: false,
    // });

    // Object.defineProperty(object1, 'property2', {
    //     value: 100,
    //     writable: false,
    //   });
    
    // object1.property1 = 77;
    // object1.property2 =177;
    
    // console.log(object1.property1);
    // console.log(object1.property2);
}

/* Javascript Object.frizze() Method */

// The Object.freeze() static method freezes an object. Freezing an object prevents extensions and makes existing properties non-writable and non-configurable. A frozen object can no longer be changed: new properties cannot be added, existing properties cannot be removed, their enumerability, configurability, writability, or value cannot be changed, and the object's prototype cannot be re-assigned. freeze() returns the same object that was passed in.

// The Object.isFrozen() static method determines if an object is frozen.

// Object.freeze(obj)
// Object.isFrozen(obj)



{

    // let Obj = {
    //     firstName:'SkillQode',
    //     lastName:'CityCenter',
    //     age:'50',
    //     Proffesion:'Education'
    // }
    
    // Object.freeze(Obj)
    
    // Obj.lastName= 'YogiChowk'
    // Obj.Hobbies='baseball'
    // delete Obj.age
    
    // console.log(Obj);
    
    // let frozen  =  Object.isFrozen(Obj)

    // console.log(frozen);

}

/* Javascript Object.seal() Method */

// The Object.seal() static method seals an object. Sealing an object prevents extensions and makes existing properties non-configurable. A sealed object has a fixed set of properties: new properties cannot be added, existing properties cannot be removed, their enumerability and configurability cannot be changed, and its prototype cannot be re-assigned. Values of existing properties can still be changed as long as they are writable. seal() returns the same object that was passed in.

// Object.seal(obj)

{
    let Obj = {
        properties1 : 20
    }

    console.log(Obj);

    let Seal = Object.seal(Obj)
    
    Obj.properties1 = 50
    Obj.properties2 = 60
    delete Obj.properties1
    
    console.log(Obj);

    let IsSealed = Object.isSealed(Obj)

    console.log(IsSealed);
}


