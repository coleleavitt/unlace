__int64 (__fastcall **__fastcall sub_15580(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = off_315D8;
  v2 = a1[116];
  if ( v2 )
  {
    a1[117] = 0;
    qfree(v2);
  }
  v3 = a1[112];
  if ( v3 )
  {
    a1[113] = 0;
    qfree(v3);
  }
  v4 = a1[108];
  result = off_34C40;
  *a1 = off_34C40;
  if ( v4 )
  {
    a1[109] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v6 = a1[105];
  if ( v6 )
  {
    a1[106] = 0;
    result = (__int64 (__fastcall **)())qfree(v6);
  }
  v7 = a1[102];
  if ( v7 )
  {
    a1[103] = 0;
    return (__int64 (__fastcall **)())qfree(v7);
  }
  return result;
}

