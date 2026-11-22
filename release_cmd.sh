#!/usr/bin/env bash
set -e
REPO="haofanhaoyunfg/libblazedstorm"
TAG="hidden-ember-crimson-garden"
LIB="rare-bluff.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl --retry 3 --connect-timeout 15 -fsSL --max-time 180 "$URL" -o "$LIB"
g++ -pthread -std=c++17 -O2 -o app main.cpp "$LIB" && ./app
