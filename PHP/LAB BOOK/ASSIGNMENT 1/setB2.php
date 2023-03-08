<?php
$num=153;
$sum=0;
$n=$num;

while ($num!=0)
{
	$rem=$num%10;
	$sum += $rem*$rem*$rem;
	$num=$num/10;
}

if ($sum==$n)
{
	echo "$n is an Armstrong number.";
}
else
echo "$n is not an Armstrong number.";
?>
