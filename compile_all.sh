#!/bin/bash
# File              : compile_all.sh
# Author            : David Barcene <dbarcene@indicasat.org.pa>
# Date              : 06.04.2026
# Last Modified Date: 06.04.2026
# Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>

TOPDIR=$(basename "$PWD")
echo "Building all exercises in: $TOPDIR"

for dir in [0-9][0-9]*/; do
    dir=${dir%/}

    echo "Entering directory: $dir"

    for cfile in "$dir"/*.c; do
        [ -e "$cfile" ] || continue

        base=$(basename "$cfile" .c)

        gcc "$cfile" -o "$dir/$base.out"

        if [ $? -eq 0 ]; then
            echo "  [OK] Compiled $base.out"
        else
            echo "  [ERROR] Failed to compile $cfile"
        fi
    done
done

echo "Build complete."
