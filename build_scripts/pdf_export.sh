#!/bin/bash

cd docs

python3 -m http.server 8000 &

decktape reveal http://localhost:8000 index.pdf --chrome-path /Applications/Chromium.app/Contents/MacOS/Chromium -s 1920x1080

kill %1
