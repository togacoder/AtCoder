use v6;

my @s = get().chomp.split('');
my $n = 0;
for (@s) {
    if $_ == 1 {
        $n++;
    }
}
say $n;

exit;
