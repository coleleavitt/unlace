__int64 (__fastcall **__fastcall sub_3238D0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_4DDA48;
  qfree();
  qfree();
  v2 = a1[5];
  result = off_4D63B8;
  *a1 = off_4D63B8;
  if ( v2 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

