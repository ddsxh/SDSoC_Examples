#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /proj/xhdhdstaff2/kalib/sprite_makefile_dev/apps/cpp/getting_started/dependence_inter/emu/_sds/vhls/mean_value_accel/solution/.autopilot/db/a.g.bc ${1+"$@"}
