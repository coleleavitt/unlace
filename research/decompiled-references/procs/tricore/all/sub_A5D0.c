__int64 (__fastcall **__fastcall sub_A5D0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_23B50;
  *a1 = off_23B50;
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
