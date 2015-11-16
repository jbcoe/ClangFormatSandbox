for x in coding_styles/*; 
  do cp $x .clang-format; 
  x=`basename $x`; 
  clang-format -style=file code.cpp > output/${x}_code.cpp; 
done
