use v6;

my ($a, $b) = get().chomp.split(' ');
if (($a * $b % 2) == 0) {
    say 'Even';
} else {
    say 'Odd';
}

exit
