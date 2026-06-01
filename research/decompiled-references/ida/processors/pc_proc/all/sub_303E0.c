bool __fastcall sub_303E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    if ( (_WORD)v4 != 129 )
      goto LABEL_4;
    return 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 1) != 0 )
    return 1;
  if ( (_WORD)v4 == 129 )
    return 0;
LABEL_4:
  if ( !(unsigned __int8)sub_36B20(a1, a2, 1) )
    return 1;
  return sub_30310(a1, a2, v6, v7, v8, v9);
}

