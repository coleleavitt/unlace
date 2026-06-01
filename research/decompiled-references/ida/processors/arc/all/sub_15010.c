bool sub_15010()
{
  int v0; // edx
  bool result; // al

  v0 = getinf(5);
  result = v0 == 5 || v0 == 2;
  if ( !result )
    return v0 == 13 || v0 == 6;
  return result;
}

