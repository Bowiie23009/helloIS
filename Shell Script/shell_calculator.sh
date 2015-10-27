#!/bin/bash

echo "Shell Script Calculator by HelloIS"
echo "Please insert first number"
read num1

echo "Please select your operator"
echo "1. Add"
echo "2. Minus"
echo "3. Multiply"
echo "4. Divide"
read oprt

echo "Please insert second number"
read num2

if [ $oprt = "1" ]
   then
      echo $((num1+num2))
elif [ $oprt = "2" ]
   then
      echo $((num1-num2))
elif [ $oprt = "3" ]
   then
      echo $((num1/num2))
elif [ $oprt = "4" ]
   then
       echo $((num1*num2))

fi
exit 0
