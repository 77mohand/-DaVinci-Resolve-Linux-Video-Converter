# 🎬 DaVinci Resolve Linux Video Converter

An automated C++ utility and Bash script designed for Linux video editors. It automatically converts unreadable MP4/H.264 files into **Apple ProRes LT** (.mov) with **PCM Audio**, making them instantly compatible with **DaVinci Resolve on Linux**.

---

## ✨ Features
- **Right-Click Conversion:** Convert videos instantly from your file manager.
- **Zero-Config:** Automatically saves the output file right next to the original one.
- **DaVinci Ready:** Fixes both video format and audio codec compatibility in one click.

## 🛠️ Prerequisites
Open your terminal and run this command to install the required tools:
```bash
sudo apt update && sudo apt install ffmpeg libnotify-bin
```

---

## 🚀 Installation & Setup

Follow these **3 simple steps** to install the tool on your system:

### Step 1: Compile the C++ Core
Build the program and move it to your system path so it can be used anywhere:
```bash
g++ -O3 main.cpp -o dvr-converter
sudo mv dvr-converter /usr/local/bin/
```

### Step 2: Install the Right-Click Script
Copy the companion script to your file manager (Nautilus) folder:
```bash
cp context_menu_script.sh ~/.local/share/nautilus/scripts/Convert_to_ProRes.sh
```

### Step 3: Give Execution Permission
Make the script executable so the system can run it:
```bash
chmod +x ~/.local/share/nautilus/scripts/Convert_to_ProRes.sh
```

---

## 💡 How to Use
1. Open your file manager and find your video (e.g., OBS MP4 recording).
2. **Right-click** the video file.
3. Go to **Scripts** ➔ Select **Convert_to_ProRes.sh**.
4. Wait for the desktop notification. Your new video is ready for DaVinci Resolve!
