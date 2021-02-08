# Week 6 - Monday & Tuesday

### Problem 1
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

### Problem 2
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

### Problem 3
**You don't need a destructor for this problem, you can implement one if you want**  

Create a program that will have a `Graph` class that will store multiple `Point` objects as pointers. 
Ask the user to enter a bunch of coordinates `x y` and store it in a `Graph` object. 
Delete the point at the middle index (print out which coordinate was deleted). 
Then sort each `Point` s.t. the coordinates closest to the x-axis is first, farthest is last. 
Create a second `Graph` object of `Point` objects that will point at the same coordinates as the other vector. 
Sort the second `Graph` the same way as the first vector, except aligned to the y-axis.
For both vectors, delete the lowest and highest coordinates (**Be careful of double frees and/or unwanted deletes**).
Print out the coordinates in both vectors in their sorted order. (**Note: If you deleted a coordinate in a vector, it should still show up in the other vector, unless it's deleted in both**).

* How do we make sure that we can avoid a double free or an unwanted deletion?
    * I would suggest not writing the deletion of the closest/farthest as a class member.
* You will most likely need a `sort()` method, and an `add()` method. 
* Accessors would be nice. 
* Maybe overloading an operator can be useful
* Maybe this link can help out: https://www.cplusplus.com/reference/vector/vector/erase/
    * More specifically, how do you use this? (Discuss with your group).
* Or maybe this: https://www.cplusplus.com/reference/vector/vector/begin/
    * More specifically, what is an iterator? How is it useful? How might you use it? (Look at ex line 11)
    * Where have you seen this before?
    * Discuss this with your group. Once your group has a general agreement as to what an iterator is, call for me using the "Ask for help" button.