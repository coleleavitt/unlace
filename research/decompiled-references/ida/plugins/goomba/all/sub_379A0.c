void __fastcall sub_379A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = v5++;
        v7 = v3 + 16 * v6;
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v3, a2);
        a2 = v7;
        hexdsp(276, v7);
        v3 = *a1;
      }
      while ( v4 != v5 );
    }
    a1[1] = 0;
    qfree(v3);
  }
}

