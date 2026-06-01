void __fastcall sub_321F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax

  *a1 = &off_4DB00;
  v4 = a1[7];
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4);
  }
  v5 = a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    qfree(v5);
  }
  v6 = a1[1];
  if ( v6 )
  {
    v7 = a1[2];
    if ( v7 )
    {
      v8 = 0;
      do
      {
        v9 = v8++;
        v10 = v6 + 16 * v9;
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v6, a2, a3);
        a2 = v10;
        hexdsp(276, v10);
        v6 = a1[1];
      }
      while ( v7 != v8 );
    }
    a1[2] = 0;
    qfree(v6);
  }
  operator delete(a1, 0x50u);
}

