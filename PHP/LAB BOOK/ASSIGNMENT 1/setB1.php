<?php
$a=40;
$b=30;
$c=10;

if ($a>$b && $a>$c)
{
	echo "Greater no a=".$a;
}
else
if ($b>$c && $b>$a)
{
	echo "Greater no b=".$b;
}
else
if ($c>$a && $c>$b)
{
	echo "Greater no c=".$c;
}
else
echo "Invalid numbers"
?>
