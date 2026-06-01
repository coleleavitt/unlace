__int64 (__fastcall **__fastcall sub_1D5E0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = off_2DBA0;
  *a1 = off_2DBA0;
  v3 = a1[108];
  if ( v3 )
  {
    a1[109] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[105];
  if ( v4 )
  {
    a1[106] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v5 = a1[102];
  if ( v5 )
  {
    a1[103] = 0;
    return (__int64 (__fastcall **)())qfree(v5);
  }
  return result;
}

