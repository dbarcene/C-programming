#!/bin/bash
# File              : cleanall.sh
# Author            : David Barcene <dbarcene@indicasat.org.pa>
# Date              : 06.04.2026
# Last Modified Date: 06.04.2026
# Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>

TOPDIR=$(basename "$PWD")
echo "Cleaning all binaries in: $TOPDIR"

find . -mindepth 2 -type f -name "*.out" -delete

echo "Cleanup done."
