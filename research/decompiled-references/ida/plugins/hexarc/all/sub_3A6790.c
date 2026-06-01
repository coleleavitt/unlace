__int64 (__fastcall **__fastcall sub_3A6790(_QWORD *a1))()
{
  __int64 *v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1 + 10;
  *(v2 - 10) = (__int64)off_4B3AE8;
  sub_389850(v2);
  v3 = a1[5];
  result = off_4A8538;
  *a1 = off_4A8538;
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

