echo off
echo Building..
cmake .. -G Ninja -DCMAKE_TOOLCHAIN_FILE=/../cmake/gcc-arm-none-eabi.cmake -DCMAKE_BUILD_TYPE=Release
pause