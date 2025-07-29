use 5.34.0;

sub main {
    my @s = split //, <>;
    chomp $s[-1];
    my @t;
    my $flag = 0;
    for(my $i = 0; $i < $#s; $i++) {
        if($s[$i] eq '#') {
            $t[$i] = $s[$i];
            $flag = 0;
        } else {
            if($flag) {
                $t[$i] = $s[$i];
            } else {
                $flag = 1;
                $t[$i] = 'o';
            }
        }
    }
    say @t;
}

&main();