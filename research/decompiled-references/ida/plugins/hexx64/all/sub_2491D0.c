__int64 __fastcall sub_2491D0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // [rsp+Fh] [rbp-59h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v3 + 8) != 48 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v3 + 8) != 48 )
      v3 = 0;
  }
  v5 = sub_255000(*(_DWORD *)(a1 + 8));
  if ( v5 != 1 )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    v17 = (unsigned __int8)((get_tinfo_property() & 0xF) - 10);
    if ( (unsigned __int8)v17 <= 1u != (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    {
      v6 = 0;
      if ( !v3 )
      {
        if ( (unsigned __int8)v17 > 1u )
          v3 = *(_QWORD *)(a1 + 24);
        else
          v3 = *(_QWORD *)(a1 + 32);
      }
      goto LABEL_7;
    }
    if ( (unsigned __int8)v17 > 1u )
    {
      if ( v5 )
      {
        v6 = sub_283210(a1, a2, v5, 0);
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    get_tinfo_property();
    clear_tinfo_t();
    get_tinfo_property();
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
      *(_QWORD *)(a1 + 24) = sub_244E70(*(_QWORD *)(a1 + 24), a2 + 200, v12, v13);
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
      *(_QWORD *)(a1 + 32) = sub_244E70(*(_QWORD *)(a1 + 32), a2 + 200, v14, v15);
    v16 = sub_32A510(a2);
    if ( *(_DWORD *)(a1 + 8) == 36 )
    {
      if ( !v16 )
        goto LABEL_26;
    }
    else
    {
      if ( v3 )
      {
LABEL_14:
        v6 = 0;
LABEL_7:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_8;
      }
      if ( v16 )
      {
LABEL_26:
        v3 = *(_QWORD *)(a1 + 24);
        v6 = 0;
        goto LABEL_7;
      }
    }
    v3 = *(_QWORD *)(a1 + 32);
    v6 = 0;
    goto LABEL_7;
  }
  v6 = sub_283210(a1, a2, 1u, 0);
LABEL_8:
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v7 == v3 )
  {
    v9 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v3 != v8 )
      goto LABEL_10;
  }
  if ( v9 )
  {
    v11 = sub_246B40(v3, a2, (_QWORD *)(v9 + 48), a3);
    v8 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 24);
    v6 |= v11;
  }
LABEL_10:
  if ( !sub_245650(a2, v7, v8, *(_DWORD *)(a1 + 8)) )
  {
    if ( !under_debugger )
      sub_383060(0xC4E1u, a3);
    BUG();
  }
  return v6;
}

