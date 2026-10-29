__int64 __fastcall sub_293190(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int tinfo_size; // r12d
  char tinfo_property; // al
  int v8; // edx
  __int64 v10; // rsi
  __int64 *v11; // rdi
  char v12; // r13
  char v13; // r13
  __int64 v14; // r13
  int v15; // eax
  int v16; // eax
  char v17; // al
  int v18; // eax
  int v19; // eax
  char v20; // r13
  char v21; // r13
  __int64 *v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 *v26; // [rsp+18h] [rbp-50h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_3835A0(51242);
    BUG();
  }
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 22) > 9 )
    return 0;
  v3 = *(_QWORD *)(v2 + 24);
  if ( a2 == v3 )
    v3 = *(_QWORD *)(v2 + 32);
  v22 = (__int64 *)(*(_QWORD *)(a2 + 24) + 48LL);
  tinfo_size = get_tinfo_size();
  tinfo_property = get_tinfo_property();
  v8 = *(_DWORD *)(v3 + 8);
  if ( (unsigned __int8)((tinfo_property & 0xF) - 10) > 1u )
  {
    if ( v8 != 48
      || (unsigned int)lexcompare_tinfo()
      || tinfo_size != get_tinfo_size()
      || tinfo_size != get_tinfo_size()
      || !sub_2459F0(*(_QWORD *)(a1 + 72), v22, (_QWORD *)(*(_QWORD *)(v3 + 24) + 48LL), *(_DWORD *)(v2 + 8)) )
    {
      return 0;
    }
    sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
    v10 = *(_QWORD *)(v3 + 24);
    v11 = (__int64 *)v3;
    goto LABEL_15;
  }
  if ( v8 != 48
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u
    || ((v23 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
      ? (v16 = get_tinfo_size())
      : (v16 = *(_DWORD *)(v23 + 84)),
        tinfo_size != v16 || !sub_2459F0(*(_QWORD *)(a1 + 72), v22, v22, *(_DWORD *)(v2 + 8)))
    || ((v17 = get_tinfo_property(), (v17 & 0xFu) > 0xA) && (v17 & 0x3F) != 0x2D || (unsigned int)lexcompare_tinfo())
    && ((get_tinfo_property() & 0xF) != 0xA
     || (get_tinfo_property() & 0xF) != 0xA
     || ((v24 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
       ? (v18 = get_tinfo_size())
       : (v18 = *(_DWORD *)(v24 + 84)),
         tinfo_size != v18))
    || !(unsigned __int8)sub_2844B0(a1, v3, v22) )
  {
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
      return 0;
    v26 = (__int64 *)(v3 + 48);
    if ( (get_tinfo_property() & 0xF) != 0xA
      || ((v25 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property() & 0xF) != 0xB)
        ? (v19 = get_tinfo_size())
        : (v19 = *(_DWORD *)(v25 + 84)),
          tinfo_size != v19
       || !sub_2459F0(*(_QWORD *)(a1 + 72), v22, v26, *(_DWORD *)(v2 + 8))
       || (get_tinfo_property(), v20 = get_tinfo_property() & 0x3F, clear_tinfo_t(), v20 != 1)
       && (get_tinfo_property(), v21 = get_tinfo_property() & 0x3F, clear_tinfo_t(), v21 != 1)
       && !sub_2459F0(*(_QWORD *)(a1 + 72), (__int64 *)(a2 + 48), v22, 0x16u)
       && !sub_2459F0(*(_QWORD *)(a1 + 72), v22, v26, 0x16u)) )
    {
      get_tinfo_property();
      v12 = get_tinfo_property() & 0x3F;
      clear_tinfo_t();
      if ( v12 == 1 )
      {
        get_tinfo_property();
        v13 = get_tinfo_property() & 0x3F;
        clear_tinfo_t();
        if ( v13 != 1 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
          v15 = (get_tinfo_property() & 0xF) == 0xB ? *(_DWORD *)(v14 + 84) : get_tinfo_size();
          if ( tinfo_size == v15 && sub_2459F0(*(_QWORD *)(a1 + 72), v26, v26, *(_DWORD *)(v2 + 8)) )
            return sub_2844B0(a1, a2, v26);
        }
      }
      return 0;
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = (__int64 *)a2;
LABEL_15:
    sub_255C10(v11, v10);
    if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
  return 1;
}

