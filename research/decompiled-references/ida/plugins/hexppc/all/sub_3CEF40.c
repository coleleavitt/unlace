bool __fastcall sub_3CEF40(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rsi

  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) || !rangeset_t_find_range() )
    return 0;
  v8 = sub_3CB3D0(a2, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3, a4);
  v10 = *(_DWORD *)(a1 + 48);
  if ( v10 < (int)v9 )
    goto LABEL_16;
  if ( v10 > (int)v9 )
    return (unsigned int)(v9 - 1) <= 1;
  if ( v10 )
  {
    if ( *(_QWORD *)(a1 + 40) < v8 )
      goto LABEL_16;
    return (unsigned int)(v9 - 1) <= 1;
  }
  v11 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v11 = *(_QWORD *)(a1 + 40);
  v12 = -v8;
  if ( v8 > 0 )
    v12 = v8;
  if ( v11 <= v12 && (v11 < v12 || *(_QWORD *)(a1 + 40) <= v8) )
    return (unsigned int)(v9 - 1) <= 1;
LABEL_16:
  *(_QWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 40) = v8;
  return (unsigned int)(v9 - 1) <= 1;
}

