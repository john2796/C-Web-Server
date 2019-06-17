
/*
Server steps:
- Listen for incoming connections
- Recieve the HTTP request
- Parse HTTP request
- Build response
- Close the connection
- Repeat
*/

/* scanf ---->
GET /foobar.html HTTP/1.1
Host: www.example.com
Connection: close
X-Header: whatever
X-Header-2: whatever

*/
/*
#include <stdio.h>
int main(void)
{
  char *request = "GET /foobar.html HTTP/1.1\n"
                  "Host: www.example.com\n"
                  "Connection: close\n"
                  "X-Header: whatever\n"
                  "X-Header-2: whatever\n\n";

  char method[200];
  char path[8192];

  sscanf(request, "%s %s", method, path);

  printf("method: %s\n", method); // GET
  printf("path: %s\n", path);     // /foobar.html
}
 */
// ============================================
// sprintf ------>
/*
HTTP/1.1 200 OK
Content-Type: text/html
Content-Length: 5
Connection: close
hello
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
  char response[500000];

  char *body = "<h1>Hello, world!</h1>";
  int len = strlen(body);

  sprintf(response, "HTTP/1.1 200 OK\n"
                    "Content-Type: text/html\n"
                    "Content-Length: %d\n"
                    "Connection: close\n"
                    "\n"
                    "%s",
          len, body);

  printf("%s\n", response);
}
