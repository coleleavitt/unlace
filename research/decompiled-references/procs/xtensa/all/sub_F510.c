__int64 __fastcall sub_F510(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // rax
  unsigned __int16 *i; // rsi

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int16 *)(a2 + 24);
  v6 = 0;
  v7 = *(_DWORD *)(v4 + 104);
  if ( v5 >= v7 && v5 < *(_DWORD *)(v4 + 108) )
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v7) + 8);
  v8 = &unk_14740;
  for ( i = (unsigned __int16 *)(a2 + 46); (*v8 & v6) == 0 || *((_BYTE *)i - 5) != 1 || *i != a3; i += 20 )
  {
    if ( ++v8 == (_DWORD *)&unk_14750 )
      return 0;
  }
  return 1;
}
