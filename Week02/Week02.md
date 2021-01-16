# Week 2

* [Session 1 Warm Up](SessionWarmUp.pdf)  
Solutions:
1. A
2. A & C
3. B
4. g++ main.cpp
5. B & C

Solutions to Week 01 W/R's Coding activity: [VFSolution.cpp](../Week01/VFSolution.cpp)

### File Streams
---
* `#include <fstream>` is needed to use the file stream
* `ifstream` is for inputting/reading from the file (similar to `cin`)
* `ofstream` is for outputting/writing to the file (similar to `cout`)
* `fstream` is the default (blank state) of `ofstream` and `ifstream`
    * A stream buffer labeled using `fstream` does not have an input or output, you must declare it using a flag
* When opening a file flags can be set for the stream buffer.
  * ios::in - sets the stream buffer as input (default for ifstream)
  * ios::out - sets the stream buffer as output (default for ofstream)
  * ios::app - sets all output operations at the end of the file (append)
      * Only the operations are done at the end of the file
  * ios::ate - sets the output position at the end of the file
  * [Other Modes/Flags](http://www.cplusplus.com/reference/fstream/fstream/fstream/)
* Every file stream has its own methods (similar to string and vector)
  * `.open(<filename>, <flag(1) | flag(2) | ...>)`
      * Note: files can also be opened when declaring the stream buffer i.e. `ifstream fin(<filename>, <flag(1) | ...>)`
  * `.is_open()` returns false if file did not opene correctly or could not be opened, true otherwise
  * `.close()` closes the file and makes it available to use for other uses
  * `.ignore()` reads and ignores next input, or for parameters `(<max num char to skip>, <char to skip to>)`
  * `.eof()` checks if the eof bit was set
      * Note: Returns a bool, but is best **not** to be used with loops as bugs often occur
  * `.clear()` resets state bits
  * `.good()` returns true if good bit is 1
  * `.bad()` returns true if bad bit is 1
  * `.fail()` returns true if fail bit is `
  
### Command Arguments
---
* To read arguments from command line `int argc, char* argv[]` must be set as `main()`'s parameters
  * Note: `char* argv[]` is interchangable with `char** argv`
  * When running the program, everything in the command line is read and stored in `argv[]`
  * `char* argv[]` is a c-string and behaves similar to strings included in `<string>`
  * `./a.out` will also be stored (as the first argument)
* Always check that there is enough arguments and/or the argument exists before trying to access it

### Terminal Commands
---
* `pwd` - Print Working Directory: displays currently directory
* `ls` - List: lists directories and files in current director
  * Appending `-l` displays directories and files w/ permissions & last edit time
  * Appending `-a` displays all directories and files **including hidden files**
  * Appending `-la` or `al` combines the power of `-l` and `-a`
  * Appending a folder name (i.e. `ls home/` lists files in that directory without entering it)
* `cd` - Change Directory: changes working directory
  * `cd ..` exits current directory and enters previous direct
    * If you are in `home/homework`, typing `cd ..` will take you to `home/`
  * `cd` by itself or `cd ~` changes working directory to ROOT directory
  * Appending a directory path will take you directly to that directory
    * ex) `cd home/homework/CS10B` takes you to the CS10B folder in homework, which is in home
    * `..` can be used as well
      * ex) If you're in `home/homework/CS10B`, typing `cd ../../labs` will take you to the labs folder in `home`
* `mkdir` Creates a directory given a name
* `touch` Creates a file given a name (must include file type in name)
* `cp` Copies a file into a specified directory
  * ex) `cp main.cpp ../homework/CS10B`
* `rm` Removes a FILE
  * appending `-rf` will remove a FOLDER and all contents within (You don't get a confirmation message)
* `mv` Moves a file into a specified directory
  * ex) `mv main.cpp ../homework/CS110B`
  * Specifying another file name will *rename* the file
    * ex) `mv main.cpp run.cpp`
* `cat` Displays all contents within the specified file onto the terminal
* `nano` or `vim` Opens the specified file in an in-terminal file editor
  * Note: Nano is more simple than vim; vim focuses on keeping your hands on the home-row, which means your arrow movements use the homerow
* `g++ -Wall -Werror main.cpp -o run.out` Compiles a C++ code
  * `-Wall` tells compiler to display all warnings into the terminal
  * `-Werror` tells compiler to treat all warnings as errors
  * `-o` tells compiler to create executable using following argument
    * `-o run.out` creates a `run.out` executable rather than the default `a.out`