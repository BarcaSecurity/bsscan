# BSSCAN v0.1.0

**BSSCAN** is a library cross-platform high performance that finds malware and spyware wherever on computers, smartphones or tablets. BSSCAN uses the best strategies to analyze device vulnerabilities.

Build your own strategy for scanning services. Developers to utilize digitization capabilities in their Web and mobile applications with their preferred languages ​​such as: *Python, JavaScript/TypeScript, JAVA, Ruby, PHP, GO, Rust* and more.

We can install **BSSCAN** desktop version on *Windows, Linux & MacOS* systems.

<br>

1. [environment](/docs/environment/intro.md) - Find Environment Vulnerabilities.

2. [files](/docs/file/intro.md) - Find Files Vulnerabilities.

3. [networks](/docs/network/intro.md) - get Find Networks Vulnerabilities.

4. [datasource](/docs/datasource/intro.md) - Find Databases Vulnerabilities.

5. [project](/docs/project/intro.md) - Find Project Vulnerabilities.

6. [servers](/docs/server/intro.md) - Find Web Server Vulnerabilities.

<br>

## Requirements

It is necessary that you have installed the programs below to use **BSSCAN** in developer mode.

### To Linux

<br>

- [Python](https://www.python.org/) **v3.1** or greater
- [Compilers C/C++](https://school.barca.com/edu/ti/overview/c++/compiler/intro.html) 
  - [MinGW/GCC](https://www.mingw-w64.org)
  - [Digital Mars](https://www.digitalmars.com/d/2.0/dmd-linux.html)
  - [Clang](https://clang.llvm.org)
  - [Intel](https://www.intel.com/content/www/us/en/developer/tools/oneapi/dpc-compiler.html)
  - [GNU GCC](http://gcc.gnu.org)
  - [Code Block](https://wiki.codeblocks.org/index.php/Installing_a_supported_compiler)
  - [Cygwin](http://www.cygwin.org)
  - [Small Device](https://sdcc.sourceforge.net)
- [Node.js](https://nodejs.org/) **v8** or greater

<br>

### To Windows

<br>

- [Python](https://www.python.org/) **v3.1** or greater
- [Compilers C/C++](https://school.barca.com/edu/ti/overview/c++/compiler/intro.html) 
  - [MinGW/GCC](https://www.mingw-w64.org)
  - [Clang](https://clang.llvm.org)
  - [Intel](https://www.intel.com/content/www/us/en/developer/tools/oneapi/dpc-compiler.html)
  - [Visual (suggested)](https://visualstudio.microsoft.com/vs/features/cplusplus)
  - [Code Block](https://wiki.codeblocks.org/index.php/Installing_a_supported_compiler)
  - [Cygwin](http://www.cygwin.org)
  - [Small Device](https://sdcc.sourceforge.net)
- [Node.js](https://nodejs.org/) **v8** or greater
  
<br>

### To Apple

<br>

- [Python](https://www.python.org/) **v3.1** or greater
- [Compilers C/C++](https://school.barca.com/edu/ti/overview/c++/compiler/intro.html) 
  - [MinGW/GCC](https://www.mingw-w64.org)
  - [Clang](https://clang.llvm.org)
  - [XCode](https://wiki.xcode.org/index.php/Installing_a_supported_compiler)
  - [Cygwin](http://www.cygwin.org)
- [Node.js](https://nodejs.org/) **v8** or greater

<br>
<br>

## Obtaining BSScan

<br>

View the [changelog](/CHANGELOG.md) for the latest updates and changes by version.

<br>

### Binary Downloads

Binary downloads are available from the [BS downloads](https://sec.barca.com/downloads)
page or from each [GitHub Releases](https://github.com/BarcaSecurity/bsscan/releases) page.


<br>
<br>

## Implementing an [SFML](https://www.sfml-dev.org/) library in the project

Now we need to [download](https://www.sfml-dev.org/download/sfml/2.5.1/) the library and move the necessary **.dll** files to the project and insert them in the debug folder to link.

<br>

Here we're creating a new `sf::TcpSocket`, connecting to the address and port and then returning `true` or `false` depending on whether the connection succeeded. We get rid of the unneeded explicit `sf::IpAddress` constructor call as well as the call to `sf::TcpSocket::disconnect()`. We can use the function in a program like this:

<br>

```c++
#include <iostream>
#include <SFML/Network.hpp>
#include <string>

static bool port_is_open(const std::string& address, int port) {
  return (sf::TcpSocket().connect(address, port) == sf::Socket::Done);
}

int main() {
  std::cout << "PORT 22: ";
  if (port_is_open("localhost", 22))
      std::cout << "OPEN" << std::endl;
  else
      std::cout << "CLOSED" << std::endl;
  return 0;
}
```

<br>

## Build From Source

<br>

**BSSCAN** requires C++ version 17 or newer, the CMakelists requires GNU cmake.

  1. [Install Node.js](https://nodejs.org/) >=8.0.0 (16.11 recommended)
  2. [Install Python](https://www.python.org/downloads/) >=2.6.0 (3.9.0 recommended)
  3. Clone the BSScan repository:
    
      ```sh
      git clone https://github.com/BarcaSecurity/bsscan.git
      ```

<br>

## Build Executable BSSCAN in Your Environment

### To Linux

<br>

  1. Run `cmake CMakeLists.txt` from the source directory

      ```shell
      cd bsscan
      cmake CMakeLists.txt
      ```
  2. Now run `make all` or `make bsscan` to compile the main program

<br>

### To Windows

<br>

Check the **gcc** version of your System. BSSCAN requires version greater than **17**.
We can view a list of *Makefile* generators with the command: `cmake -G`.
Here shows an example to use the **MinGW** *Makefile* generator:

<br>

  1. Run `cmake -G "MinGW Makefiles" <file-cmake>` from the source directory

      ```shell
      cd bsscan
      cmake -G "MinGW Makefiles" CMakeLists.txt
      ```
  
  <br>

  2. Now run `make all` or `make bsscan` to compile the main program

<br>
<br>

## Documentation

[Latest Release Documentation](https://sec.barca.com/docs/bsscan/latest/)

For documentation on the latest development code see the [documentation index](/docs).

<br>

## Contributing

There are many ways to contribute:

- Fix and [report bugs](https://github.com//BarcaSecurity/bsscan/issues/new)
- [Review code and feature proposals](https://github.com/BarcaSecurity/bsscan/pulls)
- Answer questions and discuss here on github and on the [Community Site](https://opensource.barca.com/)
- [Contribute plugins](CONTRIBUTING.md)
