__int64 (__fastcall **__fastcall sub_2A8300(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax

  result = &off_4AE558;
  *a1 = &off_4AE558;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v5 + v3);
        v8 = v7[2];
        *v7 = off_4ADBC0;
        if ( v8 )
        {
          v7[3] = 0;
          qfree();
        }
        v3 = a1[5];
        v5 += 56;
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

