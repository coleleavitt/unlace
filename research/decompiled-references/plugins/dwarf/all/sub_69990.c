__int64 (__fastcall **__fastcall sub_69990(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi

  result = off_C8908;
  *a1 = off_C8908;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = v5 + v3;
        ++v6;
        v5 += 264;
        sub_1B750(v7);
        v3 = a1[3];
      }
      while ( v4 != v6 );
    }
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
