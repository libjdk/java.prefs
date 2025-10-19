# libjdk - Java Preferences Library

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

## Overview

This project provides a complete C++ implementation of Java's preferences functionality, including:

- **User Preferences**: User-specific preference storage
- **System Preferences**: System-wide preference storage
- **XML Storage**: XML-based preference file format
- **Platform Integration**: OS-specific preference storage
- **Encryption**: Secure preference storage with encryption
- **Performance**: High-performance preference access with caching

## Features

- ✅ **Cross-platform Support**: Windows, Linux, and macOS
- ✅ **CMake Build System**: Modern, portable build configuration
- ✅ **Comprehensive Testing**: Extensive test suite included
- ✅ **OpenJDK Compatible**: Based on OpenJDK 17.35
- ✅ **GPL Licensed**: Free software with Classpath exception

## Dependencies

- **java.base**: Core Java functionality (required)
- **java.xml**: XML processing (required)

## Project Structure

```
java.prefs/
├── main/                   # Main source code
│   ├── share/              # Platform-independent code
│   │   ├── classes/         # Java class implementations
│   │   ├── include/         # Header files
│   │   └── native/          # Native implementations
│   ├── windows/             # Windows-specific code
│   ├── linux/               # Linux-specific code
│   └── macos/               # macOS-specific code
├── test/                    # Test suite
├── legal/                   # Legal notices and licenses
└── CMakeLists.txt           # Build configuration
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for new functionality
5. Ensure all tests pass
6. Submit a pull request

## License

This project is licensed under the GNU General Public License v2 with the Classpath exception, allowing linking with proprietary software. See the [LICENSE](LICENSE) file for details.

## Legal Notices

This project includes code from various open source projects. See the [legal/](legal/) directory for detailed licensing information for each component.