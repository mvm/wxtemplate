# A template for building wxWidgets C++ apps

## Building from source

For now this project has four presets: `linux`, `linux-release`,
`windows`, and `windows-release`. All are known to build and run.

Build commands should be, as run from the project build folder:

```
cmake -B build --preset <your_preset>
cd build
ninja
```

Dependencies are managed by VCPKG.

For any problem detecting compilers or libraries, deleting the
`build` directory seems to be a requirement to get CMake to update
its settings if anything in the system changes.
