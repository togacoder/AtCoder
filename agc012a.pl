use strict;
use warnings;
use 5.010;

my $n = <>;
my $ans = 0;
my $flag = 1;
chomp $n;
my @arr = split / /, <>;
chomp $arr[-1];
@arr = sort{$a <=> $b} @arr;

for(my $i = $n; $i < $n *3; $i++) {
	if($flag) {
		$ans += $arr[$i];
		$flag = 0;
	} else {
		$flag = 1;
	}
}
say $ans;

exit;
