__int64 (__fastcall **__fastcall sub_36A840(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  result = off_4E6248;
  *a1 = off_4E6248;
  a1[8] = off_4DBCF8;
  v3 = a1[13];
  if ( v3 )
  {
    a1[14] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[10];
  if ( v4 )
  {
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v5 = a1[5];
  *a1 = off_4DBCF8;
  if ( v5 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v5);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v6);
  }
  return result;
}

