use v6;
my $c = get().chomp;
if (($c eq 'a') or ($c eq 'e') or ($c eq 'i') or ($c eq 'o') or ($c eq 'u')) {
	say "vowel";
} else {
	say "consonant";
}

exit;
