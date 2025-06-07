// Create an array
let fruits = ["Apple", "Banana", "Mango"];
console.log("Original array:", fruits);

// 1. push() - Add item to the end
fruits.push("Orange");
console.log("After push:", fruits);

// 2. pop() - Remove last item
fruits.pop();
console.log("After pop:", fruits);

// 3. unshift() - Add item to the beginning
fruits.unshift("Pineapple");
console.log("After unshift:", fruits);

// 4. shift() - Remove first item
fruits.shift();
console.log("After shift:", fruits);

// 5. indexOf() - Find index of item
let index = fruits.indexOf("Banana");
console.log("Index of Banana:", index);

// 6. splice() - Remove or add items
fruits.splice(1, 1); // remove 1 item at index 1
console.log("After splice (remove 1 item at index 1):", fruits);

// 7. slice() - Copy a portion of the array
let slicedFruits = fruits.slice(0, 2);
console.log("Sliced array (0 to 2):", slicedFruits);

// 8. forEach() - Loop through each item
console.log("Using forEach:");
fruits.forEach(function(fruit, index) {
  console.log(index, fruit);
});

// 9. map() - Create new array by modifying each item
let upperFruits = fruits.map(fruit => fruit.toUpperCase());
console.log("Uppercase fruits:", upperFruits);

// 10. filter() - Filter items based on a condition
let filteredFruits = fruits.filter(fruit => fruit.length > 5);
console.log("Fruits with name longer than 5 letters:", filteredFruits);
