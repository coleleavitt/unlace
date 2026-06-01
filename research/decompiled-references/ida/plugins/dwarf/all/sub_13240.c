__int64 (__fastcall **__fastcall sub_13240(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_C74F0;
  *a1 = off_C74F0;
  if ( a1[7] )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

