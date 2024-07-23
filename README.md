# HelloWorldCpp
Simple hello world to test my devenv repo with. I want to test that I can clone and use a git repo from within the container

# Prebuild
Make sure you delete the "build" directorty if it exists, from any previous build, before attempting the below.

## Conan Package Manager
To Install dependencies before building use the Conan Package manager with the following command
```
conan install . --output-folder=build --build=missing -s compiler.cppstd=gnu20 --settings=build_type=Debug
```

# Build outside of IDE
```
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```

# Run test suite outside IDE
from the build dir
```
test/hellotest
```