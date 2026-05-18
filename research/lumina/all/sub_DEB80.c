__int64 *__fastcall sub_DEB80(__int64 a1, __int64 a2)
{
  __int64 *result; // rax

  result = sub_DBF10(a1, 128);
  if ( result )
  {
    result[3] = 0;
    *result = 0x400000001LL;
    *(_OWORD *)(result + 1) = 0;
    result[1] = a2;
  }
  else if ( a2 )
  {
    sub_D7720(a1, a2);
    return nullptr;
  }
  return result;
}
