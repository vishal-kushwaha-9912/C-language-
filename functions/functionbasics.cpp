//FUNCTION :
// In the first step, we store the work (instructions) inside a function. 
// In the second step, we call the function whenever we need that work to be done.


Imagine Your Mom Says:

👩 "Vishal, whenever I say 'Make Tea', do these steps:"
//steps to make tea
1 Boil water
2 Add tea leaves
3 Add milk
4 Serve tea

You don't do the steps immediately. You just store the instructions.

This is like creating a function.

void makeTea()
{
    // steps to make tea
}
Then Later...

Your mom says:

👉 "Make Tea!"

Now you actually perform those steps.

This is like calling the function.

makeTea(); //calling the function.

int main(){
  makeTea();  //calling the function.
 return 0;
}