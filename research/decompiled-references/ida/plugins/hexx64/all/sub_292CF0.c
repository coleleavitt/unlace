__int64 __fastcall sub_292CF0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // eax
  signed int tinfo_size; // r14d
  signed int v8; // r15d
  __int64 v9; // rax
  int v10; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    if ( v5 != 61 )
      return 0;
    v5 = *(_DWORD *)(v3 + 8);
    v3 = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 24);
  }
  if ( v5 != 48 )
    return 0;
  tinfo_size = get_tinfo_size();
  v8 = get_tinfo_size();
  if ( tinfo_size <= v8 )
    return 0;
  v10 = get_tinfo_size();
  v9 = sub_32ABC0(**(_QWORD **)(v3 + 24), v10, 0);
  if ( (int)(tinfo_size - sub_11E200(v9, v10)) > v8 )
    return 0;
  return sub_290080(a1, (__int64)"CAST-21", a2, v3, (__int64 *)v4, 1u, a3);
}

