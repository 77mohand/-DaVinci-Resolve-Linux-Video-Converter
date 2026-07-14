#!/bin/bash
if [ -z "$1" ]; then
    notify-send "Error" "No video file selected"
    exit 1
fi

FILE="$1"
OUTPUT="${FILE%.*}_prores.mov"

ffmpeg -i "$FILE" -c:v prores -profile:v 0 -c:a pcm_s16le "$OUTPUT"

notify-send "Conversion complete" "Video successfully converted to ProRes and ready for DaVinci!"

