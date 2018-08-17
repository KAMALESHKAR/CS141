#!/bin/bash
echo "Hello"
echo "WHAT IS YOUR NAME?"
read "NAME"
mkdir "$NAME"
cd "$NAME"
touch "$NAME".cpp
