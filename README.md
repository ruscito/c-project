# Template For C Projects

![C](https://img.shields.io/badge/C-99-blue.svg)

This is a basic template for C projects that include documenting, testing and coverage report
- Code documentation with [Doxygen](http://www.stack.nl/~dimitri/doxygen/)
- Unity testing with [Unity](https://github.com/ThrowTheSwitch/Unity)
- Code coverage reports with lcov 
- Dependency graph with [Graphviz](https://graphviz.org/)

## Structure

``` text
├── CMakeLists.txt
├── app
│   ├── CMakesLists.txt
│   └── main.c
├── cmake
│   └── cmake modules
├── docs
│   ├── Doxyfile
│   └── html/
├── extern
│   ├── CMakesLists.txt
│   ├── ...
├── src
│   ├── CMakesLists.txt
│   ├── mylib.h
│   └── mylib.c
└── tests
    ├── CMakeLists.txt
    └── main.c
```

- Library code goes into [src/](src/)
- Library test program code in [app/](app)
- Unity tests code goes into [tests/](tests/)

## Software Requirements

- CMake 3.16+
- GNU Makefile
- Doxygen

## Optional
- cov
- Graphviz
