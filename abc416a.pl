use 5.34.0;

sub main {
    my ($n, $l, $r) = split / /, <>;
    my $s = <>;
    chomp $r;
    chomp $s;
    my $m = substr($s, $l - 1, $r - $l + 1);
    if($m =~ /x/) {
        say "No";
    } else {
        say "Yes";
    }
}

&main();
