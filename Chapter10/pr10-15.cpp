// This program demonstrates a function that returns 
// a pointer.
#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>     // For the time function
using namespace std;


//**************************************************
// The getRandomNumbers function returns a pointer *
// to an array of random integers. The parameter   *
// indicates the number of numbers requested.      *
//**************************************************

int *getRandomNumbers(int size)
{
   int *array = NULL;    // Array to hold the numbers
   
   // Return NULL if size is zero or negative
   if (size <= 0)
      return NULL;
   
   // Dynamically allocate the array
   array = new int[size];
   
   // Seed the random number generator by passing
   // the return value of time(0) to srand
   srand( time(0) );
   
   // Populate the array with random numbers
   for (int count = 0; count < size; count++)
      array[count] = rand();
      
   // Return a pointer to the array
   return array;
}


int main()
{
   int *numbers = NULL;  // To point to the numbers
   int SIZE;
   cout<<"How many Random Numbers do you want? : "<<endl;
   cin>>SIZE;
   cout<<" "<<endl;
   // Get an array of five random numbers
   numbers = getRandomNumbers(SIZE);
   
   // Display the numbers
   for (int count = 0; count < SIZE; count++)
      cout << numbers[count] << endl;

   // Free the memory
   //delete numbers;
   delete [] numbers; //make sure to delete your new
   numbers = NULL; //just to make sure you have no leaking memory make sure to set it to Null
   return 0;
}

