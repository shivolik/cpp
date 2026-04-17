# CPP Foundation

![C++](https://img.shields.io/badge/language-C%2B%2B-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)

A foundational repository for C++ programming, featuring clean implementations of core concepts, algorithmic logic, and functional programming patterns.

## 📖 Overview

The `cpp` repository serves as a streamlined environment for C++ development. It focuses on modular code design, demonstrating how to bridge basic console output with functional logic. Whether you are looking for a boilerplate for C++ projects or specific implementation examples, this repository provides a standardized starting point.

### Key Value Propositions
- **Modular Design**: Logic is encapsulated in functions rather than cluttered in the entry point.
- **Clean Syntax**: Adheres to modern C++ standards for readability and maintainability.
- **Zero-Config**: Designed to be compiled and executed with standard toolchains (GCC/Clang) without complex build systems.

## ✨ Features

- **Functional Arithmetic**: Includes reusable logic for mathematical operations (e.g., `sum` function).
- **Standard I/O**: Demonstrates efficient use of the `iostream` library for console interaction.
- **Entry Point Optimization**: A clean `main()` structure following best practices for return codes.
- **Extensible Architecture**: Easily add new modules or header files to expand functionality.

## 🛠 Tech Stack

- **Language**: C++ (Standard C++11 or higher recommended)
- **Compiler Support**: 
    - GCC (g++)
    - Clang
    - MSVC (Visual Studio)
- **Environment**: Cross-platform (Linux, macOS, Windows)

## 🏗 Architecture

The project follows a flat directory structure for simplicity, making it ideal for competitive programming or utility scripts.

```text
cpp/
└── first.cpp    # Main entry point containing core logic and sum implementation
```

### Component Breakdown
- `sum(int, int)`: A standalone utility function demonstrating parameter passing and arithmetic output.
- `main()`: The orchestration layer that handles program lifecycle and initial execution.

## 🚀 Getting Started

### Prerequisites

Ensure you have a C++ compiler installed on your system:
- **Linux**: `sudo apt install build-essential`
- **macOS**: `xcode-select --install`
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/) or Visual Studio

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/shivolik/cpp.git
   cd cpp
   ```

2. **Verify the environment**:
   ```bash
   g++ --version
   ```

### Compilation

Use the GNU Compiler Collection (GCC) to compile the source code:

```bash
g++ first.cpp -o first_program
```

## 💻 Usage

After compilation, run the generated binary:

```bash
./first_program
```

### Expected Output
```text
Hello World
The sum is: 15
```

## 🔧 Development

### Adding New Features
To add a new function, follow the established pattern in `first.cpp`:

1. Define the function prototype above `main()`.
2. Implement the logic.
3. Call the function within the `main()` block.

### Running Tests
Currently, testing is performed via manual verification of console output. For future iterations, integration with **Google Test (gTest)** is planned.

## 🚢 Deployment

To create an optimized production build, use the `-O3` flag:

```bash
g++ -O3 first.cpp -o first_prod
```

## 🤝 Contributing

Contributions are welcome! Please follow these steps:

1. **Fork** the Project.
2. **Create** your Feature Branch (`git checkout -b feature/AmazingFeature`).
3. **Commit** your Changes (`git commit -m 'Add some AmazingFeature'`).
4. **Push** to the Branch (`git push origin feature/AmazingFeature`).
5. **Open** a Pull Request.

### Code Style
- Use 4 spaces for indentation.
- Follow PascalCase or camelCase consistently for function names.
- Ensure all code is documented with inline comments where logic is non-trivial.

## ❓ Troubleshooting

| Issue | Solution |
| :--- | :--- |
| `g++: command not found` | Ensure your compiler is installed and added to your system PATH. |
| Permission denied | Run `chmod +x first_program` before executing. |
| Compilation errors | Ensure you are using a compiler that supports at least C++11. |

## 🗺 Roadmap
- [ ] Add support for CMake build system.
- [ ] Implement advanced data structures (Linked Lists, Trees).
- [ ] Add unit testing framework integration.
- [ ] Create a library of common algorithms.

## 📜 License

Distributed under the MIT License. See `LICENSE` for more information.

---
**Project Maintainer**: [shivolik](https://github.com/shivolik)