__int64 __fastcall sub_271E40(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // r14
  __int64 v8; // rbx
  char tinfo_property; // al
  __int64 v10; // r13
  __int64 tinfo_size; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r12
  int v27; // [rsp+8h] [rbp-80h]

  if ( !a1[8] )
    return 0;
  v4 = a1[11] - a1[12];
  if ( v4 < 0 )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 52
    || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 65
    || (v8 = *(_QWORD *)(*(_QWORD *)(a1[1] + 64LL) + 8LL),
        tinfo_property = get_tinfo_property(),
        (tinfo_property & 0xFu) > 0xA)
    && (tinfo_property & 0x3F) != 0x2D )
  {
    if ( (get_tinfo_property() & 0x3F) == 0xD )
      get_tinfo_details();
    return 0;
  }
  v10 = *(_QWORD *)(a2 + 24);
  tinfo_size = get_tinfo_size();
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 432LL) + 104LL * *(int *)(v10 + 32);
  if ( *(_DWORD *)v12 != 1 )
    return 0;
  v13 = *(_QWORD *)(v12 + 8) + *(int *)(v12 + 88);
  v14 = 0x7FFFFFFF;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 1496) + 24LL) + 24LL) == 8 )
    v14 = 0x7FFFFFFFFFFFFFFFLL;
  v15 = *(_QWORD *)(v8 + 432);
  v16 = v15 + 104LL * *(_QWORD *)(v8 + 440);
  if ( v15 == v16 )
    return 0;
  v17 = *(_QWORD *)(v8 + 432);
  v18 = -1;
  v19 = 0;
  do
  {
    if ( *(_DWORD *)v17 == 1 )
      v20 = *(_QWORD *)(v17 + 8);
    else
      v20 = -1;
    if ( v13 <= v20 && v20 < v14 )
    {
      v14 = v20;
      v18 = v19;
    }
    v17 += 104;
    ++v19;
  }
  while ( v16 != v17 );
  if ( v18 == -1 )
    return 0;
  v21 = v15 + 104 * v18;
  v22 = *(_DWORD *)v21 == 1 ? *(_QWORD *)(v21 + 8) : -1LL;
  if ( *(_QWORD *)(v8 + 136) <= v22 && v22 < *(_QWORD *)(v8 + 144) - *(int *)(v8 + 120) )
    return 0;
  v27 = v18;
  if ( (get_tinfo_property() & 0xF) != 0xB )
    return 0;
  v25 = j__qalloc_or_throw(64, 2, v23, v24);
  *(_QWORD *)(v25 + 32) = 0;
  v26 = v14 + v4 - tinfo_size - v13;
  v6 = v25;
  *(_QWORD *)v25 = -1;
  *(_QWORD *)(v25 + 12) = -1;
  *(_QWORD *)(v25 + 40) = 0;
  *(_QWORD *)(v25 + 48) = 0;
  *(_DWORD *)(v25 + 56) = 0;
  *(_DWORD *)(v25 + 8) = 65;
  *(_QWORD *)(v25 + 24) = v8;
  *(_DWORD *)(v25 + 32) = v27;
  copy_tinfo_t();
  if ( !v6 )
    return 0;
  v5 = get_tinfo_property();
  if ( v5 <= 0 || v26 % v5 )
  {
    sub_255630(v6, a3);
    clear_tinfo_t();
    j__qfree(v6);
    return 0;
  }
  *(_DWORD *)(v6 + 56) |= 1u;
  a1[12] = -v26;
  a1[11] = 0;
  return v6;
}

