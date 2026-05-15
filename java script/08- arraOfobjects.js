let obj1=new Object();
obj1.a=5;
obj1.b=10;
let obj2=new Object();
obj2.a=5;
obj2.b=10;
let obj3=new Object();
obj3.a=5;
obj3.b=10;
console.log(obj1)

let arr=new Array(obj1,obj2,obj3);
console.log(arr);
//[ { a: 5, b: 10 }, { a: 5, b: 10 }, { a: 5, b: 10 } ]