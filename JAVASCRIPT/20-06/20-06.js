/* Javascript Date Object */

// JavaScript Date objects represent a single moment in time in a platform-independent format. Date objects encapsulate an integral number that represents milliseconds since the midnight at the beginning of January 1, 1970, UTC (the epoch).

// {
//     let currentDate = new Date()

//     console.log(currentDate);
// }

// Date Now() Object Method

// The Date.now() static method returns the number of milliseconds elapsed since the epoch, which is defined as the midnight at the beginning of January 1, 1970, UTC.

// Date.now()


// {
//     let currentDate = Date.now()
//     console.log(currentDate);
// }

// Date parse() Object Method

// The Date.parse() static method parses a string representation of a date, and returns the date's timestamp.

// Only the date time string format is explicitly specified to be supported. Other formats are implementation-defined and may not work across all browsers. A library can help if many different formats are to be accommodated.

// Date.parse(dateString)


// {
//     let currentDate = Date.parse('10 january 2024')

//     console.log(currentDate);
// }

// {
//     let currentDate = Date.parse('1 january 1970 05:30:00')

//     console.log(currentDate);
// }

// Date UTC() Object Method 

// Date.UTC(year)
// Date.UTC(year, monthIndex)
// Date.UTC(year, monthIndex, day)
// Date.UTC(year, monthIndex, day, hour)
// Date.UTC(year, monthIndex, day, hour, minute)
// Date.UTC(year, monthIndex, day, hour, minute, second)
// Date.UTC(year, monthIndex, day, hour, minute, second, millisecond)

// 0 - Jan
// 1 - Feb
// 2 - March
// 3 - April
// 4 - May
// 5 - June
// 6 - July
// 7 - August
// 8 - Sept
// 9 - Oct
// 10 - Nov
// 11 - Dec

// {
//     let currentDate = new Date(Date.UTC('1971' , '5'))

//     console.log(currentDate.toUTCString());
// }

/* Date Get Methods */

// getDate()


{
    // let currentDate = new Date('July 20, 69 00:20:18')

    // let GetDate  = currentDate.getDate()
    // let GetDay  = currentDate.getDay()
    // let GetMonth  = currentDate.getMonth()
    // let GetYear  = currentDate.getFullYear()
    // let GetHour  = currentDate.getHours()
    // let GetMinute = currentDate.getMinutes()
    // let GetSeconds = currentDate.getSeconds()
    // let GetMillisecond = currentDate.setMilliseconds(123)

    // console.log(GetDate);
    // console.log(GetDay);
    // console.log(GetMonth);
    // console.log(GetYear);
    // console.log(GetHour);
    // console.log(GetMinute);
    // console.log(GetSeconds);
    // console.log(currentDate.getMilliseconds());
}

// setDate()


{
    // let currentDate = new Date('june 20 , 2024 10:09:00')

    // let setDate  = currentDate.setDate(20)
    // let setDay  = currentDate.setDate(7)
    // let setMonth  = currentDate.setMonth(11)
    // let setYear  = currentDate.setFullYear(2022)
    // let setHour  = currentDate.setHours(12)
    // let setMinute = currentDate.setMinutes(30)
    // let setSeconds = currentDate.setSeconds(30)
    // let setMillisecond = currentDate.setMilliseconds(123)

    // console.log(setDate);
    // console.log(setDay);
    // console.log(setMonth);
    // console.log(setYear);
    // console.log(setHour);
    // console.log(setMinute);
    // console.log(setSeconds);
    // console.log(currentDate);
    // console.log(currentDate.getMilliseconds());
}



const colors = ["red", "yellow", "blue"];
colors[5] = "purple";
colors.forEach((item, index) => {
console.log(`${index}: ${item}`);
});

// Output:  
// 0: red
// 1: yellow  
// 2: blue   
// 5: purple

colors.reverse(); // ['purple', empty × 2, 'blue', 'yellow', 'red']    
     






      

