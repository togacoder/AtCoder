use v6;
my ($w, $x, $y, $z) = get().chomp.split(' ');
if ($w * $x < $y * $z) {
	say $y * $z;
} else {
	say $w * $x;
}

exit;
