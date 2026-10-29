__int64 __fastcall sub_1AC70(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  __int64 i; // r14
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r15
  void (__fastcall *v9)(__int64, __int64); // rax
  void (__fastcall *v10)(__int64, __int64); // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  for ( i = v3 + 16LL * *(_QWORD *)(a1 + 72); i != v3; --*(_QWORD *)(v8 + 16) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      ++v2;
      if ( *(_DWORD *)(v6 + 28) == -1 )
        break;
      hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
      v3 += 16;
      a2 = v6 + 16;
      a1 = 493;
      hexdsp(493, v6 + 16);
      if ( i == v3 )
        return v2;
    }
    v7 = *(_QWORD *)v6;
    v3 += 16;
    v8 = *(_QWORD *)(v3 - 16);
    **(_QWORD **)(v6 + 8) = *(_QWORD *)v6;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
    v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
    v9(493, v6 + 16);
    v10 = (void (__fastcall *)(__int64, __int64))get_hexdsp(493, v6 + 16);
    a2 = v6 + 16;
    v10(444, v6 + 16);
    a1 = v6;
    qfree(v6);
  }
  return v2;
}

