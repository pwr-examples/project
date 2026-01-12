# Manual compilation

```bash
g++ -c main.cpp -o main.o
g++ -c texts.cpp -o texts.o
g++ main.o texts.o -o program
```

# CMake

```bash
mkdir build
cd build
cmake ..
make
```

