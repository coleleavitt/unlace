bool sub_52C0()
{
  int v0; // edx
  bool result; // al

  v0 = getinf();
  result = v0 == 5 || v0 == 2;
  if ( !result )
    return v0 == 13 || v0 == 6;
  return result;
}

