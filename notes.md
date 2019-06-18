Server steps:
- Listen for incoming connections
- Recieve the HTTP request
- Parse HTTP request
- Build response
- Close the connection
- Repeat


Sprint 
- Header file good summary to see how to get started





   Hint: 
    `sprintf()` for creating the HTTP response.
    `strlen()` for computing content length.
    `sprintf()` also returns the total number of bytes in the result string, which might be helpful.
     For getting the current time for the Date field of the response, you'll want to look at the `time()` and `localtime()` functions, both of which are already included in the `time.h` header file.
