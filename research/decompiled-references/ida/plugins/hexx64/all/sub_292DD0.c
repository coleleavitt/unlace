__int64 __fastcall sub_292DD0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int tinfo_size; // r12d
  char tinfo_property; // al
  int v9; // edx
  __int64 v11; // rsi
  __int64 *v12; // rdi
  char v13; // r13
  char v14; // r13
  __int64 v15; // r13
  int v16; // eax
  int v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // eax
  char v21; // r13
  char v22; // r13
  __int64 *v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 *v27; // [rsp+18h] [rbp-50h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_383060(0xC82Au, *(double *)a3.m128_u64);
    BUG();
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 22) > 9 )
    return 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( a2 == v4 )
    v4 = *(_QWORD *)(v3 + 32);
  v23 = (__int64 *)(*(_QWORD *)(a2 + 24) + 48LL);
  tinfo_size = get_tinfo_size();
  tinfo_property = get_tinfo_property();
  v9 = *(_DWORD *)(v4 + 8);
  if ( (unsigned __int8)((tinfo_property & 0xF) - 10) > 1u )
  {
    if ( v9 != 48
      || (unsigned int)lexcompare_tinfo()
      || tinfo_size != get_tinfo_size()
      || tinfo_size != get_tinfo_size()
      || !sub_245630(*(_QWORD *)(a1 + 72), v23, (_QWORD *)(*(_QWORD *)(v4 + 24) + 48LL), *(_DWORD *)(v3 + 8)) )
    {
      return 0;
    }
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), *(double *)a3.m128_u64);
    v11 = *(_QWORD *)(v4 + 24);
    v12 = (__int64 *)v4;
    goto LABEL_15;
  }
  if ( v9 != 48
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u
    || ((v24 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
      ? (v17 = get_tinfo_size())
      : (v17 = *(_DWORD *)(v24 + 84)),
        tinfo_size != v17 || !sub_245630(*(_QWORD *)(a1 + 72), v23, v23, *(_DWORD *)(v3 + 8)))
    || ((v18 = get_tinfo_property(), (v18 & 0xFu) > 0xA) && (v18 & 0x3F) != 0x2D || (unsigned int)lexcompare_tinfo())
    && ((get_tinfo_property() & 0xF) != 0xA
     || (get_tinfo_property() & 0xF) != 0xA
     || ((v25 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
       ? (v19 = get_tinfo_size())
       : (v19 = *(_DWORD *)(v25 + 84)),
         tinfo_size != v19))
    || !(unsigned __int8)sub_2840F0(a1, v4, v23, *(double *)a3.m128_u64) )
  {
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
      return 0;
    v27 = (__int64 *)(v4 + 48);
    if ( (get_tinfo_property() & 0xF) != 0xA
      || ((v26 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
        ? (v20 = get_tinfo_size())
        : (v20 = *(_DWORD *)(v26 + 84)),
          tinfo_size != v20
       || !sub_245630(*(_QWORD *)(a1 + 72), v23, v27, *(_DWORD *)(v3 + 8))
       || (get_tinfo_property(), v21 = get_tinfo_property() & 0x3F, clear_tinfo_t(), v21 != 1)
       && (get_tinfo_property(), v22 = get_tinfo_property() & 0x3F, clear_tinfo_t(), v22 != 1)
       && !sub_245630(*(_QWORD *)(a1 + 72), (__int64 *)(a2 + 48), v23, 0x16u)
       && !sub_245630(*(_QWORD *)(a1 + 72), v23, v27, 0x16u)) )
    {
      get_tinfo_property();
      v13 = get_tinfo_property() & 0x3F;
      clear_tinfo_t();
      if ( v13 == 1 )
      {
        get_tinfo_property();
        v14 = get_tinfo_property() & 0x3F;
        clear_tinfo_t();
        if ( v14 != 1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
          v16 = (get_tinfo_property() & 0xF) == 0xB ? *(_DWORD *)(v15 + 84) : get_tinfo_size();
          if ( tinfo_size == v16 && sub_245630(*(_QWORD *)(a1 + 72), v27, v27, *(_DWORD *)(v3 + 8)) )
            return sub_2840F0(a1, a2, v27, *(double *)a3.m128_u64);
        }
      }
      return 0;
    }
    v11 = *(_QWORD *)(a2 + 24);
    v12 = (__int64 *)a2;
LABEL_15:
    sub_255850(v12, v11, *(double *)a3.m128_u64);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), *(double *)a3.m128_u64);
  return 1;
}

