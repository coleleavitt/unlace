__int64 (__fastcall **__fastcall sub_63350(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_AFCF0;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  result = off_AEE30;
  a1[1] = 0;
  *a1 = off_AEE30;
  if ( v3 )
  {
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
