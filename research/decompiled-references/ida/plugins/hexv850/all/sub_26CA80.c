__int64 __fastcall sub_26CA80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // r14
  __int64 v7; // rbx
  char tinfo_property; // al
  __int64 v9; // r13
  __int64 tinfo_size; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // [rsp+8h] [rbp-80h]

  if ( !a1[8] )
    return 0;
  v3 = a1[11] - a1[12];
  if ( v3 < 0 )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 52
    || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 65
    || (v7 = *(_QWORD *)(*(_QWORD *)(a1[1] + 64LL) + 8LL),
        tinfo_property = get_tinfo_property(),
        (tinfo_property & 0xFu) > 0xA)
    && (tinfo_property & 0x3F) != 0x2D )
  {
    if ( (get_tinfo_property() & 0x3F) == 0xD )
      get_tinfo_details();
    return 0;
  }
  v9 = *(_QWORD *)(a2 + 24);
  tinfo_size = get_tinfo_size();
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32);
  if ( *(_DWORD *)v11 != 1 )
    return 0;
  v12 = *(_QWORD *)(v11 + 8) + *(int *)(v11 + 88);
  v13 = 0x7FFFFFFF;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 24LL) == 8 )
    v13 = 0x7FFFFFFFFFFFFFFFLL;
  v14 = *(_QWORD *)(v7 + 432);
  v15 = v14 + 104LL * *(_QWORD *)(v7 + 440);
  if ( v14 == v15 )
    return 0;
  v16 = *(_QWORD *)(v7 + 432);
  v17 = -1;
  v18 = 0;
  do
  {
    if ( *(_DWORD *)v16 == 1 )
      v19 = *(_QWORD *)(v16 + 8);
    else
      v19 = -1;
    if ( v12 <= v19 && v19 < v13 )
    {
      v13 = v19;
      v17 = v18;
    }
    v16 += 104;
    ++v18;
  }
  while ( v15 != v16 );
  if ( v17 == -1 )
    return 0;
  v20 = v14 + 104 * v17;
  v21 = *(_DWORD *)v20 == 1 ? *(_QWORD *)(v20 + 8) : -1LL;
  if ( *(_QWORD *)(v7 + 136) <= v21 && v21 < *(_QWORD *)(v7 + 144) - *(int *)(v7 + 120) )
    return 0;
  v24 = v17;
  if ( (get_tinfo_property() & 0xF) != 0xB )
    return 0;
  v22 = j__qalloc_or_throw();
  *(_QWORD *)(v22 + 32) = 0;
  v23 = v13 + v3 - tinfo_size - v12;
  v5 = v22;
  *(_QWORD *)v22 = -1;
  *(_QWORD *)(v22 + 12) = -1;
  *(_QWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 0;
  *(_DWORD *)(v22 + 56) = 0;
  *(_DWORD *)(v22 + 8) = 65;
  *(_QWORD *)(v22 + 24) = v7;
  *(_DWORD *)(v22 + 32) = v24;
  copy_tinfo_t();
  if ( !v5 )
    return 0;
  v4 = get_tinfo_property();
  if ( v4 <= 0 || v23 % v4 )
  {
    sub_250270(v5);
    clear_tinfo_t();
    j__qfree();
    return 0;
  }
  *(_DWORD *)(v5 + 56) |= 1u;
  a1[12] = -v23;
  a1[11] = 0;
  return v5;
}

