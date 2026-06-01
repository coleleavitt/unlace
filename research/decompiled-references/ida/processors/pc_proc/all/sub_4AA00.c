__int64 (__fastcall **__fastcall sub_4AA00(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_18AA98;
  *a1 = off_18AA98;
  if ( a1[108] )
  {
    a1[109] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[105] )
  {
    a1[106] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[102] )
  {
    a1[103] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

