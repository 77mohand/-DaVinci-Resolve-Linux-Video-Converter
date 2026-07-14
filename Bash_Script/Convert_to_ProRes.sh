#!/bin/bash

# التحقق من أن المستخدم حدد ملفاً
if [ -z "$1" ]; then
    notify-send "خطأ" "لم يتم تحديد أي ملف فيديو"
    exit 1
fi

FILE="$1"
OUTPUT="${FILE%.*}_prores.mov"

# التحويل إلى ProRes LT (profile=1) وصوت PCM غير مضغوط
ffmpeg -i "$FILE" -c:v prores -profile:v 0 -c:a pcm_s16le "$OUTPUT"

# إرسال إشعار للنظام عند الانتهاء
notify-send "اكتمل التحويل" "تم تحويل الفيديو إلى ProRes بنجاح وجاهز لداڤينشي!"

