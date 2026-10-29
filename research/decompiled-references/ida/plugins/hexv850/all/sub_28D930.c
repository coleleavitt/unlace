__int64 __fastcall sub_28D930(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  int v4; // eax
  signed int tinfo_size; // r14d
  signed int v7; // r15d
  __int64 v8; // rax
  unsigned int v9; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_DWORD *)(v3 + 8);
  if ( *(_DWORD *)(v2 + 8) != 61 )
  {
    if ( v4 != 61 )
      return 0;
    v4 = *(_DWORD *)(v2 + 8);
    v2 = *(_QWORD *)(a2 + 32);
    v3 = *(_QWORD *)(a2 + 24);
  }
  if ( v4 != 48 )
    return 0;
  tinfo_size = get_tinfo_size();
  v7 = get_tinfo_size();
  if ( tinfo_size <= v7 )
    return 0;
  v9 = get_tinfo_size();
  v8 = sub_325150(**(_QWORD **)(v2 + 24), v9, 0);
  if ( (int)(tinfo_size - sub_119640(v8, v9)) > v7 )
    return 0;
  return sub_28ACC0(a1, (__int64)"CAST-21", a2, v2, (__int64 *)v3, 1u);
}

