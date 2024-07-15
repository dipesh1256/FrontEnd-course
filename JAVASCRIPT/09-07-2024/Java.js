/* Javascript Html Dom */

/* DOM :-  Document Object Model */

// The Document Object Model (DOM) is the data representation of the objects that comprise the structure and content of a document on the web. This guide will introduce the DOM, look at how the DOM represents an HTML document in memory and how to use APIs to create web content and applications.

/* Dom Method */

// console.log(document);

/* document.write() */

// document.write('Hello Javascript!')


/* getElementById */

// document.getElementById('demo').innerHTML = 'Hello World!!!'

/* Dom Menupilate With Events */

/* Events: - Mouse  , Keybords , Windows */

/* onClick  , onMouseover , bdClick , onMouseout , onMouseleave */

// {
//     function sum(){
//         document.getElementById('demo').innerHTML = 56+14
//     }
// }

// {
//     function styles(){
//         document.getElementById('demo').style.backgroundColor = 'green'
//         document.getElementById('demo').style.color = 'white'
//     }
// }

/* innerHtml , textContent , innerText */

// let dom1 = document.getElementById('heading').innerHTML

// console.log(dom1);

// let dom2 = document.getElementById('heading').innerText

// console.log(dom2);

// let dom3 = document.getElementById('heading').textContent

// console.log(dom3);

/* DOM getElementByClassName */

// let dom4 = document.getElementsByClassName('text')
// let dom5 = document.getElementsByClassName('text')

// let dom4 = document.getElementsByClassName('text')[0].innerHTML = "Hello"
// let dom5 = document.getElementsByClassName('text')[1].innerHTML = "Hello"

// dom4.getElementsByClassName('text')[0].innerHTML = 'Hello World'

// console.log(dom4);
// console.log(dom5);




