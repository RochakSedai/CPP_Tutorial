# CPP_Tutorial

It is the repo which contains practicing code of c plus plus.

# Steps for Setting Up C++ Development Environment in VS Code

## 1. Install Visual Studio Code C++ Extension

- Open Visual Studio Code.
- Navigate to the **Extensions** view by clicking on the Extensions icon in the sidebar or pressing `Ctrl+Shift+X`.
- Search for **C/C++** by Microsoft and click **Install**.

## 2. Install GCC/G++ Compiler (Windows)

- Follow this [link](https://code.visualstudio.com/docs/cpp/config-mingw) to download and install the MinGW-w64 toolchain.

## 3. Add GCC/G++ to System Path

- After the installation, add the following path to your environment variables:
- To add this path:

1. Open **Control Panel**.
2. Go to **System and Security** > **System** > **Advanced system settings**.
3. Click on **Environment Variables**.
4. Find and edit the **Path** variable in the **System variables** section.
5. Add the path `C:\msys64\ucrt64\bin` and click **OK**.

## 4. Compiling and Running C++ Files

- **To compile a C++ file**, use the following command in your terminal:

```bash
g++ -o <output-file-name> <cpp-file-name>
```

- **To run a C++ file**, use the following command in your terminal:

```bash
./<output-file-name>
```

- **Example**

```bash
g++ -o hello.exe variable.cpp
```
