__int64 __fastcall sub_17C10(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax

  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size == -1 )
    return 0;
  v6 = tinfo_size;
  if ( tinfo_size <= 4 )
  {
    cleanup_argloc(a2);
    *a2 = 3;
    a2[2] = 0;
  }
  else if ( tinfo_size == 8 )
  {
    v15 = qalloc_or_throw(24);
    *(_OWORD *)(v15 + 8) = 0;
    *(_QWORD *)v15 = 0;
    v16 = qvector_reserve(v15, 0, 1, 24);
    v17 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)v15 = v16;
    v18 = v16 + 24 * v17;
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 16) = 0xFFFF;
    ++*(_QWORD *)(v15 + 8);
    cleanup_argloc(v18);
    *(_DWORD *)v18 = 3;
    *(_DWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 16) = 0x40000;
    v19 = *(_QWORD *)(v15 + 8);
    v20 = *(_QWORD *)v15;
    if ( *(_QWORD *)(v15 + 16) < (unsigned __int64)(v19 + 1) )
    {
      v23 = qvector_reserve(v15, v20, v19 + 1, 24);
      v19 = *(_QWORD *)(v15 + 8);
      *(_QWORD *)v15 = v23;
      v20 = v23;
    }
    v21 = v20 + 24 * v19;
    *(_QWORD *)v21 = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_DWORD *)(v21 + 16) = 0xFFFF;
    ++*(_QWORD *)(v15 + 8);
    cleanup_argloc(v21);
    *(_DWORD *)v21 = 3;
    *(_DWORD *)(v21 + 8) = 1;
    *(_DWORD *)(v21 + 16) = 262148;
    cleanup_argloc(a2);
    if ( v15 )
    {
      *a2 = 2;
      *((_QWORD *)a2 + 1) = v15;
    }
  }
  else
  {
    if ( (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
    {
      if ( v6 > 8 )
        return 0;
    }
    else if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xB || v6 > 8 )
    {
      return 0;
    }
    v8 = qalloc_or_throw(24);
    *(_OWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = 0;
    v9 = qvector_reserve(v8, 0, 1, 24);
    v10 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)v8 = v9;
    v11 = v9 + 24 * v10;
    *(_QWORD *)v11 = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 16) = 0xFFFF;
    ++*(_QWORD *)(v8 + 8);
    cleanup_argloc(v11);
    *(_DWORD *)v11 = 3;
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 16) = 0x40000;
    v12 = *(_QWORD *)(v8 + 8);
    v13 = *(_QWORD *)v8;
    if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v12 + 1) )
    {
      v22 = qvector_reserve(v8, v13, v12 + 1, 24);
      v12 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)v8 = v22;
      v13 = v22;
    }
    v14 = v13 + 24 * v12;
    *(_QWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 16) = 0xFFFF;
    ++*(_QWORD *)(v8 + 8);
    cleanup_argloc(v14);
    *(_WORD *)(v14 + 18) = v6 - 4;
    *(_DWORD *)v14 = 3;
    *(_DWORD *)(v14 + 8) = 1;
    *(_WORD *)(v14 + 16) = 4;
    cleanup_argloc(a2);
    if ( v8 )
    {
      *a2 = 2;
      *((_QWORD *)a2 + 1) = v8;
    }
  }
  return 1;
}

