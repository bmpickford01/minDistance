# minDistance
Program that runs two functionally identical algorithms (search for minimum distance between two integers in an array) and compares them in terms of time and number of basic functions

### Tests
To test, in main.cpp, the test class should be instantiated, taking no arguments
```tests * a = new tests();```

Then runTests should be called to run the tests in tests.cpp
```a->run()```

This will return 1 if successful, and -1 if not. The result of each algorithm will also be outputted to the console for validation

##### Adding tests
To add a test, simply create a new function called testN where N is the next logical number in the tests. In the function, assign the descrption to a string and run both algorithms asserting the both return the desired value.
If they do, return true, otherwise return false

Then add the function call to the runTests() function in an if statement, returning 1 if it runs successfully

Finally, add the testN function to the test.h file under the private section

### Testing time taken


### Testing number of basic operations
