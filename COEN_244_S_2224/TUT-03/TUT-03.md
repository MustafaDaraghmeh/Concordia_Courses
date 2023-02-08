<script
  src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"
  type="text/javascript">
</script>

## Exercises:
**9.4** (Enhancing Class Time) Provide a constructor that’s capable of using the current time from the time and localtime functions—declared in the C++ Standard Library header <ctime>—to initialize an object of the Time class. For descriptions of C++ Standard Library headers, classes and functions, see http://cppreference.com.

**9.5** (Complex Class) Create a class called Complex for performing arithmetic with complex numbers. Write a program to test your class. Complex numbers have the form

``` c++
realPart + imaginaryPart * i
``` 
where i is $$\sqrt{-1}$$
Use double variables to represent the private data of the class. Provide a constructor that enables an object of this class to be initialized when it’s declared. The constructor should contain default values in case no initializers are provided. Provide public member functions that perform the following tasks:

- add—Adds two Complex numbers: The real parts are added together and the imaginary parts are added together.

- subtract—Subtracts two Complex numbers: The real part of the right operand is subtracted from the real part of the left operand, and the imaginary part of the right operand is subtracted from the imaginary part of the left operand.

- toString—Returns a string representation of a Complex number in the form (a, b), where a is the real part and b is the imaginary part.

- In Chapter 10, you’ll learn how to overload +, - and << so you can write expressions like a + b and a-b and cout << a to add, subtract and output Complex objects. [Note: The C++ Standard Library provides its own class complex for complex-number arithmetic. For information on this class, visit http://en.cppreference.com/w/cpp/numeric/complex.]