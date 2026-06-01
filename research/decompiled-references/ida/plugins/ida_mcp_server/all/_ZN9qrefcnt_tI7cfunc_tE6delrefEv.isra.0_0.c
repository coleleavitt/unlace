void __fastcall qrefcnt_t<cfunc_t>::delref(__int64 a1)
{
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 i; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  void (__fastcall *v7)(__int64, __int64); // rax
  void (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // [rsp+0h] [rbp-28h]

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
      v3 = *(_QWORD *)(a1 + 128);
      if ( v3 )
      {
        v4 = *(_QWORD *)(a1 + 136);
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            while ( *(_QWORD *)(v3 + 32 * i) )
            {
              *(_QWORD *)(v3 + 32 * i + 8) = 0;
              v9 = i;
              qfree();
              v3 = *(_QWORD *)(a1 + 128);
              i = v9 + 1;
              if ( v4 == v9 + 1 )
                goto LABEL_11;
            }
          }
        }
LABEL_11:
        *(_QWORD *)(a1 + 136) = 0;
        qfree();
      }
      v6 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v6(493, a1 + 16);
      v7 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v7(444, a1 + 16);
      v8 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
      v8(130, a1);
    }
  }
}

