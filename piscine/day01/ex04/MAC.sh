#!/bin/sh
networksetup -listallhardwareports | grep -Eo "([0-9A-Fa-f]{2}:*){6}";
