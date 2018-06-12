use v6;
my $a = get().chomp;
my $b = get().chomp;
my $c = get().chomp;
my $x = get().chomp;
my $ans = 0;

loop (my $i = 0; $i <= $a; $i++) {
    loop (my $j = 0; $j <= $b; $j++) {
        last if ($x < 500 * $i + 100 * $j);
        $ans++ if (($x - 500 * $i - 100 * $j) / 50 <= $c);
    }
}

say $ans;

exit;
