/*
Functions use STACK memory

What happens when a function is called?

Every time you call a function:
👉 A stack frame (memory block) is created

This frame stores:
Parameters
Local variables
Return address


Each function has its OWN memory
main() variables ≠ sum() variables
Even if names are same, they are different variables

Memory is temporary
👉 When function ends:
Its variables are destroyed


Stack follows LIFO
Last called → first removed


*/