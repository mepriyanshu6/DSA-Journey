//Copy of argument passed to function is created in pass by value. 
//Changes made to parameter inside function does not affect the argument passed.

/*
Core Idea
👉 Every variable you create gets:

its own memory location
its own value
👉 Functions do NOT share variables by default
*/


//example
void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
}

//Step 1: main() starts

int a = 10;

/*
Computer does:
Finds space in memory
Stores 10

Memory:
[a] → 10
*/

//Function call
/*
change(a);


mportant:
Value of a (which is 10) is copied
New variable x is created

Memory:
[a] → 10      (main)
[x] → 10      (copy in change)
*/

//Inside function
/*
x = 100;

Only x changes
Memory:
[a] → 10
[x] → 100
a is untouched
*/

//Step 4: Function ends
/*
👉 x is destroyed completely

Memory:
[a] → 10
*/


//Visual stack diagram
//Step 1:
[ main ]
 a = 10

//tep 2:
[ change ]
 x = 10
------------
[ main ]
 a = 10

//Step 3:
[ change ]
 x = 100
------------
[ main ]
 a = 10

//Step 4:
[ main ]
 a = 10