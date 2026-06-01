__int64 __fastcall sub_243E10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r12d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // [rsp+Fh] [rbp-59h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v2 + 8) != 48 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v2 + 8) != 48 )
      v2 = 0;
  }
  v4 = sub_24FC40(*(unsigned int *)(a1 + 8), a2);
  if ( v4 != 1 )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    v13 = (unsigned __int8)((get_tinfo_property() & 0xF) - 10);
    if ( (unsigned __int8)v13 <= 1u != (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    {
      v5 = 0;
      if ( !v2 )
      {
        if ( (unsigned __int8)v13 > 1u )
          v2 = *(_QWORD *)(a1 + 24);
        else
          v2 = *(_QWORD *)(a1 + 32);
      }
      goto LABEL_7;
    }
    if ( (unsigned __int8)v13 > 1u )
    {
      if ( v4 )
      {
        v5 = sub_27DE50(a1, a2, v4, 0);
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    get_tinfo_property();
    clear_tinfo_t();
    get_tinfo_property();
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
      *(_QWORD *)(a1 + 24) = sub_23FAB0(*(_QWORD *)(a1 + 24));
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
    {
      v11 = sub_23FAB0(*(_QWORD *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v11;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 32);
    }
    v12 = sub_324BC0(a2, *(_QWORD *)(a1 + 24) + 48LL, v11 + 48);
    if ( *(_DWORD *)(a1 + 8) == 36 )
    {
      if ( !v12 )
        goto LABEL_27;
    }
    else
    {
      if ( v2 )
      {
LABEL_14:
        v5 = 0;
LABEL_7:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_8;
      }
      if ( v12 )
      {
LABEL_27:
        v2 = *(_QWORD *)(a1 + 24);
        v5 = 0;
        goto LABEL_7;
      }
    }
    v2 = *(_QWORD *)(a1 + 32);
    v5 = 0;
    goto LABEL_7;
  }
  v5 = sub_27DE50(a1, a2, 1, 0);
LABEL_8:
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v6 == v2 )
  {
    v8 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v2 != v7 )
      goto LABEL_10;
  }
  if ( v8 )
  {
    v10 = sub_241780(v2, a2, (_QWORD *)(v8 + 48));
    v7 = *(_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 24);
    v5 |= v10;
  }
LABEL_10:
  if ( !sub_240290(a2, v6, v7, *(_DWORD *)(a1 + 8)) )
  {
    if ( !under_debugger )
      sub_37CFE0(50401);
    BUG();
  }
  return v5;
}

