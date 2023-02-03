## Exercises:
**3.9** (Modified Account Class) Modify class Account (Fig. 3.8) to provide a member function called withdraw that withdraws money from an Account. Ensure that the withdrawal amount does not exceed the Account’s balance. 
If it does, the balance should be left unchanged and the member function should display a message indicating "Withdrawal amount exceeded account balance." Modify class AccountTest (Fig. 3.9) to test member function withdraw.

**3.13** (Removing Duplicated Code in the main Function) In Fig. 3.9, the main function contains six statements (lines 14–15, 16–17, 26–27, 28–29, 37–38 and 39–40) that each display an Account object’s name and balance. Study these statements and you’ll notice that they differ only in the Account object being manipulated—account1 or account2. In this exercise, you’ll define a new displayAccount function that contains one copy of that output statement. The member function’s parameter will be an Account object and the member function will output the object’s name and balance. You’ll then replace the six duplicated statements in main with calls to displayAccount, passing as an argument the specific Account object to output.
Modify Fig. 3.9 to define the following displayAccount function after the using directive and before main:
``` c++
void displayAccount(Account accountToDisplay) {
// place the statement that displays
// accountToDisplay’s name and balance here
}
```
Replace the comment in the member function’s body with a statement that displays accountToDisplay’s name and balance.
Once you’ve completed displayAccount’s declaration, modify main to replace the statements that display each Account’s name and balance with calls to displayAccount of the form:
``` c++
displayAccount(nameOfAccountObject);
``` 
In each call, the argument should be the account1 or account2 object, as appropriate. Then, test the updated program to ensure that it produces the same output as shown in Fig. 3.9.

**3.15** (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that your heart rate stays within a safe range suggested by your trainers and doctors. According to the American Heart Association (AHA) (http://bit.ly/AHATargetHeartRates), the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years. Your target heart rate is a range that’s 50–85% of your maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health-care professional before beginning or modifying an exercise program.] Create a class called HeartRates. The class attributes should include the person’s first name, last name and date of birth (consisting of separate attributes for the month, day and year of birth). Your class should have a constructor that receives this data as parameters. For each attribute provide set and get functions. The class also should include a member function that calculates and returns the person’s age (in years), a member function that calculates and returns the person’s maximum heart rate and a member function that calculates and returns the person’s target heart rate. Write a program that prompts for the person’s information, instantiates an object of class HeartRates and prints the information from that object—including the person’s first name, last name and date of birth—then calculates and prints the person’s age in (years), maximum heart rate and target-heart-rate range.


**3.16** (Computerization of Health Records) A health-care issue that has been in the news lately is the computerization of health records. This possibility is being approached cautiously because of sensitive privacy and security concerns, among others. [We address such concerns in later exercises.] Computerizing health records could make it easier for patients to share their health profiles and histories among their various health-care professionals. This could improve the quality of health care, help avoid drug conflicts and erroneous drug prescriptions, reduce costs and, in emergencies, could save lives. In this exercise, you’ll design a “starter” HealthProfile class for a person. The class attributes should include the person’s first name, last name, gender, date of birth (consisting of separate attributes for the month, day and year of birth), height (in inches) and weight (in pounds). Your class should have a constructor that receives this data. For each attribute, provide set and get functions. The class also should include member functions that calculate and return the user’s age in years, maximum heart rate and target-heart-rate range (see Exercise 3.15), and body mass index (BMI; see Exercise 2.30). Write a program that prompts for the person’s information, instantiates an object of class HealthProfile for that person and prints the information from that object—including the person’s first name, last name, gender, date of birth, height and weight—then calculates and prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range. It should also display the BMI values chart from Exercise 2.30.

### References

**2.30** (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in Exercise 1.9. The formulas for calculating BMI are

```
BMI = (weight In Pounds × 703) / (height In Inches × height In Inches) 

or

BMI = (weight In Kilograms) / (height In Meters × height In Meters)
```
Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:

```
BMI VALUES
Underweight: less than 18.5
Normal:      between 18.5 and 24.9
Overweight:  between 25 and 29.9
Obese:       30 or greater
```

- https://learning.oreilly.com/library/view/c-how-to/9780134448930/
- https://cplusplus.com/doc/tutorial/classes/
- https://moodle.concordia.ca/moodle/course/view.php?id=153586
- "Learn C++ Programming -Beginner to Advance- Deep Dive in C++,"  https://concordia.udemy.com/course/cpp-deep-dive/
- "Mastering Data Structures & Algorithms using C and C++," https://concordia.udemy.com/course/datastructurescncpp/
- "Git Going Fast: One Hour Git Crash Course," https://concordia.udemy.com/course/git-going-fast/
- "The Git & Github Bootcamp," https://concordia.udemy.com/course/git-and-github-bootcamp/
