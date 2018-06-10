use v6;

my $n = get().chomp;
my @arr = get().chomp.split(' ');
my $c = 0;
my $f = 0;

while $f != 1 {
    loop (my $i = 0; $i < $n; $i++) {
        if @arr[$i] % 2 == 0 {
            @arr[$i] /= 2;
        } else {
            $f = 1;
            $c--;
            last;
        }
    }
    $c++;
}
say $c;

exit;
