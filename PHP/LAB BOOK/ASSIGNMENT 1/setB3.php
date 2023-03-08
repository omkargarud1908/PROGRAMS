<?php
$n=7;
$cnt=0;

if($n==0 || $n==1)
{
echo"given number is not Prime number";
}
else
{
	for($i=2;$i<=$n;$i++)
	{
		if($n%$i==0)
		{
		$cnt=$cnt+1;
		}
	}
	if($cnt==0)
	{
	echo "the given number is prime ";
	}
	else
	{
	echo "The given number is not prime";
	}
}
?>
