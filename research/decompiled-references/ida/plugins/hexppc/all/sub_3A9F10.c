__int64 (__fastcall **__fastcall sub_3A9F10(_QWORD *a1))()
{
  __int64 *v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1 + 10;
  *(v2 - 10) = (__int64)off_4D43E8;
  sub_38CFD0(v2);
  v3 = a1[5];
  result = off_4C8E58;
  *a1 = off_4C8E58;
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

