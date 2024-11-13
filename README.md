# A template for building wxWidgets C++ apps

## Building from source

For now this project has three presets: `linux-dynamic`, `windows`,
and `windows-release`. The first two are tested and seem to work,
but I can't get it to build for `windows-release`.

Build commands should be, as run from the project build folder:

```
cmake -B build --preset <your_preset>
cd build
ninja
```

Dependencies are managed by VCPKG.
