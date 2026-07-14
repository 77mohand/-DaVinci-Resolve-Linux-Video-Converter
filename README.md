# 🎬 DaVinci Resolve Linux Video Converter

An automated C++ utility designed for Linux video editors. This tool automatically extracts a video's directory and filename to encode files into the highly optimized **Apple ProRes LT** format inside a `.mov` container, making them instantly compatible with the free version of **DaVinci Resolve on Linux**.

---

## ✨ Features
- **Zero-Config Output:** Automatically detects the source folder and file stem, creating the output file in the same path.
- **DaVinci Resolve Ready:** Converts unreadable MP4/H.264 profiles into production-ready **Apple ProRes LT** video and **PCM 16-bit LE** audio.
- **Fast Execution:** Leverages the native power of `FFmpeg` through modern C++ architecture.
- **System Integration:** Includes a companion Bash script to convert any video directly from your file manager's right-click context menu.

## 🛠️ Prerequisites
Before running the tool, ensure you have **FFmpeg 5.0 or newer** and `libnotify` installed on your system.

```bash
sudo apt update
sudo apt install ffmpeg libnotify-bin
```

## 🚀 Installation & Setup

### 1. Compile the C++ Utility
Compile the core program and move the compiled executable to your local binary path so it can be called system-wide:
```bash
g++ -O3 main.cpp -o dvr-converter
sudo mv dvr-converter /usr/local/bin/
```

### 2. Enable Right-Click Context Menu (GNOME Nautilus)
To seamlessly transcode videos without using the terminal, copy the companion Bash script into your Nautilus scripts folder and grant it execution permissions:
```bash
cp context_menu_script.sh ~/.local/share/nautilus/scripts/Convert_to_ProRes.sh
chmod +x ~/.local/share/nautilus/scripts/Convert_to_ProRes.sh
```

## 💡 How to Use
1. Open your file manager and navigate to your recorded video (e.g., your OBS MP4 recordings).
2. **Right-click** the video file.
3. Hover over **Scripts** and select **Convert_to_ProRes.sh**.
4. A desktop notification will pop up when the conversion is finished. The new `.mov` file will appear right next to your original file, fully ready for DaVinci Resolve!
