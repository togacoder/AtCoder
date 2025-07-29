use 5.34.0;
use strict;
use warnings;

sub make_list {
    my ($n, $k, $x, $s) = @_;
    my @num;
    for(my $i = 0; $i <= $k; $i++) {
        $num[$i] = 1;
    }
    $num[0] = 0;
    $num[$k] = 0;
    my @dict;
    my $dict_key = 0;
    while(1) {
        if($num[$k] == $n) {
            for(my $j = 0; $j < $k; $j++) {
                $num[$k - $j] = 1;
                if($num[$k - $j - 1] != $n) {
                    $num[$k - $j - 1]++;
                    last;
                }
            } 
        } else {
            $num[$k]++;
        }
        last if($num[0] == 1);
        for(my $i = 1; $i <= $k; $i++) {
            $dict[$dict_key] .= $s->[$num[$i] - 1];
        }
        $dict_key++;
    }
    @dict = sort { $a cmp $b } @dict;
    say $dict[$x - 1];
 
}

sub main {
    my ($n, $k, $x) = split / /, <>;
    chomp $x;
    my @s;
    for(my $i = 0; $i < $n; $i++) {
        my $str = <>;
        chomp $str;
        $s[$i] = $str;
    }
    &make_list($n, $k, $x, \@s);
}

&main();