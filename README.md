# 🎬 DaVinci Resolve Linux Video Converter

An automated C++ utility designed for Linux video editors. This tool automatically extracts a video's directory and filename to encode files into the highly optimized **DNxHR HQ** format inside a `.mov` container, making them instantly compatible with the free version of **DaVinci Resolve on Linux**.

---

## ✨ Features
- **Zero-Config Output:** Automatically detects the source folder and file stem, creating the output file in the same path.
- **DaVinci Resolve Ready:** Converts unreadable MP4/H.264 profiles into production-ready **DNxHR HQ** video and **PCM 16-bit LE** audio.
- **Fast Execution:** Leverages the native power of `FFmpeg` through modern C++ architecture.

## 🛠️ Prerequisites
Before running the tool, ensure you have **FFmpeg 5.0 or newer** installed on your system.

```bash
sudo apt update
sudo apt install ffmpeg
