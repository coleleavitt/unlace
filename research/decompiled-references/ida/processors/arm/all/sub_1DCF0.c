unsigned __int8 __fastcall sub_1DCF0(int a1, int a2)
{
  unsigned __int8 result; // al

  result = 1;
  if ( a2 )
    return _bittest(&a1, 4 - a2);
  return result;
}
