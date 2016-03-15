![](https://lh3.googleusercontent.com/-22TKlDzZhNs/Vufbz9VMMuI/AAAAAAAAOPQ/5GuECsUozfAFid7hKomIvYy_yQKDf_fgA/s0/log-cpp-banner.png)
**log-cpp** is a simple log header for debug, support log output to stderr, file, console and IDE(only win32). Log will auto be removed in release mode before source compile for performance.
## Installation
You just need download **log.h** and **log.cpp** files then add into your C++ project.

![](https://lh3.googleusercontent.com/-xVjSpZ1yOu4/VuexrQqa4WI/AAAAAAAAONc/_ih4pjwWI90lFULwKM8lVZ4E-hdl8-iDQ/s0/Capture.PNG)
## Usage
Include **log.h** header file in your source code then using macro such as:

1. LOG_D: for debug tag
2. LOG_E: for error tag
3. LOG_I: for infor tag
4. LOG_W: for warning tag
5. LOG: default tag, current version equals LOG_D

Each log line will separate in 5 parts are: tag, file name, lines number, function name and message content.

> You can use standard output format like printf function for show message in log like this: 
>
> LOG("number is %d, string is %s", yourNumber, yourString);

This is a simple demo for using the log header:
``` cpp
#include "log.h"
int main()
{
	LOG("this is a simple log");
}
```
Then output could like this:

![](https://lh3.googleusercontent.com/-hJtn_DgbgTA/VueymuL1QPI/AAAAAAAAONw/Y5mGrwEgl6sh8zqpcRXB0TMQb40N_D7jQ/s0/Capture.PNG)

Current version support output to stderr, file, console(simple messge) and IDE(just win32). Above example show you ouput in IDE(Visual Studio). If you want to switch output to other, you just change define line in **log.h** like this:

``` cpp
#define DEBUG_OUTPUT_MODE	DEBUG_OUTPUT_IDE
```

----------

**Log output in stderr**:  change *DEBUG_OUTPUT_MODE* to this
``` cpp
#define DEBUG_OUTPUT_MODE	DEBUG_OUTPUT_STREAM
```
In fact, your log will be shown in console but we use **stderr** instead of **stdout**.
Output like this:

![](https://lh3.googleusercontent.com/--QRvBNZ-FsQ/Vue2wuPzhzI/AAAAAAAAOOI/c7MfNORt8VsrIqUyxQbMAAJHZIudghVAQ/s0/Capture.PNG)

----------

**Log output in file**:  change *DEBUG_OUTPUT_MODE* to this
``` cpp
#define DEBUG_OUTPUT_MODE	DEBUG_OUTPUT_FILE
```
Log file will be written in current directory with file name is **debug.log** which has been defined:

``` cpp
#define DEBUG_FILENAME	"debug.log"
```
When you write a log message to log file, the log file will be opened to write a log line then close. Log file like this:

![](https://lh3.googleusercontent.com/-u7_ID2FKRLU/VufYhFYPcjI/AAAAAAAAOOg/WFiTKsTaADI1_Kavi5N9kwwMsJkRq79dg/s0/Capture.PNG)

----------
**Log output in console**: change DEBUG_OUTPUT_MODE to this
``` cpp
#define DEBUG_OUTPUT_MODE	DEBUG_OUTPUT_CON
```
Like **Log output in stderr** but only tag and message content will be shown.
 
![](https://lh3.googleusercontent.com/-OXvGUogO7oM/VufZ5utVRwI/AAAAAAAAOO4/LOTslGUCZ6UYpKthr48--dY4mX59GzMJw/s0/Capture.PNG)

## Contributing
1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

##Dependencies
This project not required the dependencies, just get **log.h** and **log.cpp**.
## History
Version 1.0.0 support log output to stderr, file, console and IDE(just win32). Provides LOG, LOG_D, LOG_E, LOG_I and LOG_W for different purposes.
## Author
Developed by sontx/noem, some useful information:

 - Home: [www.sontx.in](http://www.sontx.in)
 - My blog: [www.blog.sontx.in](http://www.blog.sontx.in)
 - Email: <a href="mailto:xuanson33bk@gmail.com">xuanson33bk@gmail.com</a>
 - Facebook: [No Em](https://mobile.facebook.com/Melkior.9x)

## License
Copyright 2016 Tran Xuan Son
