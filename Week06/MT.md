# Week 6 - Monday & Tuesday

### Problem 1 (1:10)
To help you understand what exactly is being stored in pointers, let's output them!  
Create a program that will:
1. Ask the user for an integer. Store this as a normal integer.
2. Create a pointer that will point at your new integer.
3. Print the pointer and the address of the normal integer variable. Then print out the address of the pointer.
    * What do you see? (Discuss with your group) 
4. Create an empty class `Foo`
5. Create an object pointer and print the pointer.
    * What is the value supposed to mean? (Discuss with your group)
6. Call for me using the "Ask for help" button in order to provide an answer for these questions.

### Problem 2 (1:15)
Pointers are used for dynamic memory allocation. What is that? (Discuss it with group)  
Create a program that will:
1. Dynamically allocate an int variable.
2. Create a new pointer (assign it to `nullptr`, it's good practice)
3. Point the new pointer at the dynamic int variable
5. Using the new pointer assign a number to it.
4. Now delete the new pointer.
6. Delete the dynamically allocated int variable.
    * Congratulations. What you've just done is called a double free and is shunned.
7. Comment out the second delete and you now have two hanging pointers. Add a line of code s.t. they are not hanging anymore.
8. Now, using your two pointers, print out "Dang Pointers are Wack" iff the two pointers *equal* each other and at least one pointer is equal to zero.
    * What did you observe? Provide an explanation with your group and call for me using the "Ask for help" button to explain.
    <details>
        <summary> </summary>
        It should Print
    </details>

### Problem 3 (1:25)
You know what hanging pointers are now and what a double free is.
But let's say that we do want to delete one of the pointer's, but we want the other pointer to still point at it.
1. Create a `Foo` class with a public variable `x = 3`.
2. Create a vector of `Foo` pointer objects.
3. Fill the vector with 5 dynamically allocated `Foo` objects.
4. Now create a blank `Foo` pointer (name it however you want) and point it at the first element in the vector
5. Delete the first element in the vector
6. Now print the `x` variable of your `Foo` pointer
7. Oh No! You've deleted the first element of the vector, which also deleted the memory at your pointer. 
   What ever shall we do!?
8. It's Rewind Time! Rewind your code to before you deleted the first element.
9. Now, add a few lines of code that will let use delete the first element in the vector, BUT your pointer can still access that memory location
    * What do you do? Discuss and implement it with your group. Provide an explanation with your group and call for me using the "Ask for help" button to explain.
10. Congratulations! You've learned to delete a pointer without actually deleting the memory location!
You've done it! Now you are ready to put it all together :D Good Luck!

### Problem 4 (Putting it all together) - EASY (1:30)
[(Starter Code)](Codes%20&%20Practice%20Problems/main.cpp)  
If you want a challenge, do problem 5 instead.
Make a Point pointer point to a new Point with 20 and 30 as the x,y. 
Print the x times the y of the pointer and delete the pointer.
Make a new pointer point to a new Point with 100 and -100 as the x,y
Print the difference of the x and y times the sum of x and y.
Make a vector of Point pointers. Fill the vector with any 3 points you want.
Print the vector's points like the following:
`"X: {x}, Y: {y}" where {x} and {y} are the vector.at(i)'s x and y`

* Problem 5 covers iterators and a few functions involving it. I want ya'll to learn that bit too, so go ahead and do this points as well:
    * Look at this link: https://www.cplusplus.com/reference/vector/vector/erase/
        * More specifically, how do you use this? (Discuss with your group).
    * Also look at this: https://www.cplusplus.com/reference/vector/vector/begin/
        * More specifically, what is an iterator? How is it useful? How might you use it? (Look at ex line 11)
        * Where have you seen this before?
    * Discuss this with your group. Once your group has a general agreement as to what an iterator is and how to use it, call for me using the "Ask for help" button.

### Problem 5 (Putting it all together) - HARD (1:30)
[(Starter Code)](Codes%20&%20Practice%20Problems/main.cpp)  
**You don't need a destructor for this problem, you can implement one if you want**  

Create a program that will have a `Graph` class that will store multiple `Point` objects as pointers. 
Ask the user to enter 9 coordinates `x y` and store it in a `Graph` object. 
Delete 5th item in the list (print out which coordinate was deleted). 
Then sort each `Point` s.t. the coordinates closest to the x-axis is first, farthest is last. 
Create a second `Graph` object of `Point` objects that will point at the same coordinates as the other vector. 
Sort the second `Graph` the same way as the first vector, except aligned to the y-axis.
For both vectors, delete the lowest and highest coordinates (**Be careful of double frees and/or unwanted deletes**).
Print out the coordinates in both vectors in their sorted order. (**Note: If you deleted a coordinate in a vector, it should still show up in the other vector, unless it's deleted in both**).

* Assume all accesses to list will be valid (no out of bounds)
* **Try to dynamically allocate the `Graph` objects**

* How do we make sure that we can avoid a double free or an unwanted deletion?
    * I would suggest not writing the deletion of the closest/farthest as a class member.
* You will most likely need a `sort()` method, and an `add()` method. 
* Accessors would be nice. 
* Maybe overloading an operator can be useful... or is it?
* Maybe this link can help out: https://www.cplusplus.com/reference/vector/vector/erase/
    * More specifically, how do you use this? (Discuss with your group).
* Or maybe this: https://www.cplusplus.com/reference/vector/vector/begin/
    * More specifically, what is an iterator? How is it useful? How might you use it? (Look at ex line 11)
    * Where have you seen this before?
* Discuss this with your group. Once your group has a general agreement as to what an iterator is and how to use it, call for me using the "Ask for help" button.