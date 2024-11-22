Package: catch2:x64-osx@3.7.1

**Host Environment**

- Host: x64-osx
- Compiler: AppleClang 15.0.0.15000309
-    vcpkg-tool version: 2024-11-12-eb492805e92a2c14a230f5c3deb3e89f6771c321
    vcpkg-scripts version: ded511cf4 2024-11-22 (2 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
Downloading catchorg-Catch2-v3.7.1.tar.gz
Successfully downloaded catchorg-Catch2-v3.7.1.tar.gz.
-- Extracting source /Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/_deps/vcpkg-src/downloads/catchorg-Catch2-v3.7.1.tar.gz
-- Applying patch fix-install-path.patch
-- Using source at /Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/_deps/vcpkg-src/buildtrees/catch2/src/v3.7.1-253f17e323.clean
-- Found external ninja('1.12.1').
-- Configuring x64-osx
-- Building x64-osx-dbg
-- Building x64-osx-rel
-- Fixing pkgconfig file: /Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/_deps/vcpkg-src/packages/catch2_x64-osx/lib/pkgconfig/catch2-with-main.pc
-- Fixing pkgconfig file: /Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/_deps/vcpkg-src/packages/catch2_x64-osx/lib/pkgconfig/catch2.pc
CMake Error at scripts/cmake/vcpkg_find_acquire_program.cmake:166 (message):
  Could not find pkg-config.  Please install it via your package manager:

      brew install pkg-config
Call Stack (most recent call first):
  scripts/cmake/vcpkg_fixup_pkgconfig.cmake:193 (vcpkg_find_acquire_program)
  /Users/noahmays-smith/.cache/vcpkg/registries/git-trees/6f03dab61d096d616b0c745d442d406e525f4b7f/portfile.cmake:25 (vcpkg_fixup_pkgconfig)
  scripts/ports.cmake:196 (include)



```

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "week-four-lab",
  "version": "1.0.0",
  "description": "Template for week four lab",
  "homepage": "https://github.com/NYU-Processor-Design/onboarding-lab-4",
  "maintainers": [
    "Vito Gamberini <vito@gamberini.email>"
  ],
  "license": "CC0-1.0",
  "dependencies": [
    "catch2",
    "nyu-cmake",
    "nyu-util"
  ]
}

```
</details>
