use v6;
my ($a, $b, $c) = get().chomp.split(' ');
if ($b eq '+') {
	say $a + $c;
} else {
	say $a - $c;
}

exit;
