# dso-demo
Shared Libraries DEMO

1. GCC default toolchain

    ```
    g++ -fPIC --shared -fvisibility=hidden -o test_lib.so -I . test_lib.cpp
    nm -C -D test_lib.so | grep " W "
    ```
