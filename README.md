# RayTracer

A simple C++ ray tracing project implemented as a desktop application.  
This repository contains the source code for a basic ray tracer built with **Visual Studio (C++ / Win32)**.

## 📌 Overview

This project implements the fundamentals of a ray tracer — casting rays from a camera into a 3D scene to render basic geometry with lighting. Ray tracing simulates how light interacts with objects to produce realistic images, including shadows, reflections, and shading.

This repository includes a Visual Studio solution for building and running the ray tracer on Windows.

## 🧱 Features

- Core ray tracing pipeline in C++
- Scene defined in code (no external scene file)
- Basic geometry and lighting support
- Visual Studio project & solution files
- Easy to expand with additional rendering features

## 📁 Repository Structure

```
/
├── Build/                      # Build artifacts or Visual Studio settings
├── Source/                     # Source files for the ray tracer
├── ThirdParty/                 # External dependencies
├── RayTracer.sln               # Visual Studio solution
├── *.vcxproj                   # Project configuration files
├── .gitattributes
├── .gitignore
```

## 🛠️ Requirements

To build and run this project, you’ll need:

- **Windows OS**
- **Visual Studio 2019 / 2022** (or later)
  - Desktop C++ development workload
- Optional tools:
  - CMake (if you migrate to a CMake build)
  - Additional third-party libraries (if added later)

## 🚀 Building the Project

1. **Clone the repository**
   ```sh
   git clone https://github.com/LLCardenas-117/RayTracer.git
   cd RayTracer
   ```

2. **Open the Visual Studio solution**
   - Open **RayTracer.sln** in Visual Studio
   - Choose **Debug** or **Release**

3. **Build & Run**
   - Build: `Ctrl + Shift + B`
   - Run: `F5`

## 💡 How Ray Tracing Works (High Level)

Ray tracing typically follows these stages:

1. **Ray Generation**  
   Cast rays from a camera into the scene.

2. **Intersection Testing**  
   Determine whether and where each ray hits an object.

3. **Shading & Lighting**  
   Compute light interaction (color, shadows, reflections, etc.).

This project implements a foundational version of these steps and serves as a good base for expanding into more advanced rendering techniques.

## 📌 Future Improvements

- Support for more geometry types
- Scene file loading (JSON, OBJ models, etc.)
- Reflection & refraction systems
- BVH acceleration structure
- Textures & advanced materials

## 🤝 Contributing

Contributions are welcome!  
Feel free to open issues or submit pull requests.

## 📜 License

A license is not currently defined.  
Consider adding a license such as **MIT**, **Apache 2.0**, or **GPL** to clarify usage rights.
