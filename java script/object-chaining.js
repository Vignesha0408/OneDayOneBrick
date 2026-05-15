const calculator = { 
value: 0, 
add(num) { 
this.value += num; 
return this; 
}, 
subtract(num) { 
this.value -= num; 
return this; 
}, 
getResult() { 
console.log(this.value); 
return this; 
} 
}; 
calculator.add(10).subtract(5).getResult();





const person = { name: "Deepika", age: 25 }; 
Object.freeze(person); 
person.age = 30; // No effect 



const cars = { brand: "Toyota", model: "2022" }; 
Object.seal(cars); 
cars.model = "Corolla"; // Allowed 
cars.year = 2023; // Not allowed 

const user = { name: "John", age: 30 }; 
console.log(user.hasOwnProperty("name")); // true 



