// Creating an array
let fruits = ["apple", "banana", "cherry"];

console.log("Original array:", fruits);

// Adding an element to the end
fruits.push("orange");
console.log("After push:", fruits);

// Removing the last element
fruits.pop();
console.log("After pop:", fruits);

// Adding an element to the beginning
fruits.unshift("mango");
console.log("After unshift:", fruits);

// Removing the first element
fruits.shift();
console.log("After shift:", fruits);

// Accessing an element
console.log("First fruit:", fruits[0]);

// Looping through the array
for (let i = 0; i < fruits.length; i++) {
  console.log("Fruit at index", i, ":", fruits[i]);
}
