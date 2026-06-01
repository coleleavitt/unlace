void __fastcall qrefcnt_t<cfunc_t>::delref(__int64 a1)
{
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rax
  void (__fastcall *v8)(__int64, __int64); // rax
  void (__fastcall *v9)(__int64, __int64); // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 104))-- == 1 )
    {
      hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      hexdsp(564, a1);
      if ( *(_QWORD *)(a1 + 160) )
      {
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
      }
      if ( *(_QWORD *)(a1 + 128) )
      {
        v4 = *(_QWORD *)(a1 + 136);
        for ( i = 0; v4 != i; ++i )
        {
          v6 = (_QWORD *)(32 * i + *(_QWORD *)(a1 + 128));
          if ( *v6 )
          {
            v6[1] = 0;
            qfree();
          }
        }
        *(_QWORD *)(a1 + 136) = 0;
        qfree();
      }
      v7 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v7(493, a1 + 16);
      v8 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v8(444, a1 + 16);
      v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v9(130, a1);
    }
  }
}

