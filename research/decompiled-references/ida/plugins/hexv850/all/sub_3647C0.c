__int64 (__fastcall **__fastcall sub_3647C0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi

  result = off_4B9BC8;
  *a1 = off_4B9BC8;
  a1[8] = off_4AF6D8;
  if ( a1[13] )
  {
    a1[14] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v3 = a1[5];
  *a1 = off_4AF6D8;
  if ( v3 )
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

