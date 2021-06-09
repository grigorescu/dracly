#!/bin/bash

while read line
do
  HASH=$(echo "$line" | cut -f 16 -d:)
  SALT=$(echo "$line" | cut -f 17 -d:)
  USER=$(echo "$line" | cut -f 1 -d:)

  echo "$USER:$HASH:$SALT" >> hashes.out
done < "${1:-/dev/stdin}"
