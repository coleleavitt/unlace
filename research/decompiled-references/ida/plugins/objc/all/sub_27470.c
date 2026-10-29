__int64 __fastcall sub_27470(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  char v6; // al
  _BYTE *v7; // rsi
  __int64 v8; // rbx

  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    return 0;
  if ( *(_BYTE *)(a2 + 64) != 9 )
    return 0;
  v4 = *(_QWORD *)(a2 + 72);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  if ( *(_DWORD *)hexdsp(268, v4) != 1 )
    return 0;
  v6 = *(_BYTE *)(a2 + 32);
  v7 = *(_BYTE **)(a2 + 40);
  if ( v6 != 6 && (v6 != 10 || *v7 != 6) )
    return 0;
  v8 = *(_QWORD *)(a2 + 72);
  if ( !netnode_altval() )
    return 0;
  if ( a1 )
    *a1 = v8;
  return 1;
}
