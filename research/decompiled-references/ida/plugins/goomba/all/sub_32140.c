__int64 (__fastcall **__fastcall sub_32140(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax

  result = &off_4DB00;
  *a1 = &off_4DB00;
  v5 = a1[7];
  if ( v5 )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree(v5);
  }
  v6 = a1[4];
  if ( v6 )
  {
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree(v6);
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = a1[2];
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = v9++;
        v11 = v7 + 16 * v10;
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v7, a2, a3);
        a2 = v11;
        hexdsp(276, v11);
        v7 = a1[1];
      }
      while ( v8 != v9 );
    }
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree(v7);
  }
  return result;
}

