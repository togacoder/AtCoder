use v6;

my ($a, $b) = get().chomp.split(' ');
$a = 14 if ($a == 1);
$b = 14 if ($b == 1); 
if ($a == $b) {
	say "Draw";
} elsif ($a > $b) {
	say "Alice";
} else {
	say "Bob";
}

exit;
