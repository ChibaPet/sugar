#!/usr/bin/env perl

use strict;
use warnings;

# mg/dl = 18 * mmol/l
# mmol/l = mg/dl / 18

if ($ARGV[0] < 40) {
    printf("%0.1f mmol/l = %0.0f mg/dl\n", $ARGV[0], $ARGV[0] * 18);
} else {
    printf("%0.0f mg/dl = %0.1f mmol/l\n", $ARGV[0], $ARGV[0] / 18);
}
