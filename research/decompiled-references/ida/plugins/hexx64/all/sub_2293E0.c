__int64 __fastcall sub_2293E0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // eax
  unsigned int v8; // ebx
  char tinfo_property; // al
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  bool v16; // al
  unsigned __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int tinfo_size; // ebp
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // ebx

  v3 = *(_QWORD *)(a1 + 112);
  v5 = v3 + 24;
  v6 = *(_QWORD *)a2 + 24LL;
  v7 = *(_DWORD *)(v3 + 80);
  if ( (v7 & 4) != 0 && *(_DWORD *)(a1 + 192) == -1 && (*(_BYTE *)(*(_QWORD *)a2 + 80LL) & 1) != 0 )
  {
    v24 = *(_QWORD *)(v5 + 32);
    v25 = *(int *)(v5 + 52);
    if ( (_DWORD)v25 != -1 )
      v24 += v25;
    if ( *(_QWORD *)(v6 + 32) >= v24 )
      return 1;
  }
  if ( (v7 & 2) == 0 )
    return 0;
  if ( (v7 & 0x1018) != 0 )
    return 0;
  v8 = v7 & 1;
  if ( (v7 & 1) != 0 )
    return 0;
  if ( *(_QWORD *)(v5 + 40) == -1 )
  {
    v11 = *(int *)(v5 + 52);
  }
  else
  {
    tinfo_property = get_tinfo_property();
    v11 = *(int *)(v5 + 52);
    v12 = *(_QWORD *)(v5 + 32);
    if ( (tinfo_property & 0xF) == 0xB )
    {
      if ( (_DWORD)v11 != -1 )
        v12 += (int)v11;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) >= v12 )
        return 0;
    }
  }
  v13 = *(_QWORD *)(v6 + 32);
  v14 = *(_QWORD *)(v5 + 32);
  v15 = *(int *)(v6 + 52);
  v16 = (int)v11 != 0 && v13 >= v14;
  if ( (_DWORD)v15 )
  {
    if ( v16 )
    {
      v17 = v14 - 1;
      if ( v14 - 1 + (int)v11 >= v13 + (int)v15 - 1 )
        goto LABEL_16;
    }
LABEL_46:
    if ( (*(_DWORD *)(v6 + 56) & 2) != 0 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v6 + 56) & 0x1418) != 0;
      return v8;
    }
    return 1;
  }
  if ( !v16 )
    goto LABEL_46;
  v17 = v14 - 1;
  if ( v14 - 1 + (int)v11 < v13 )
    goto LABEL_46;
LABEL_16:
  v18 = *(_DWORD *)(v6 + 56);
  if ( (v18 & 1) != 0 )
  {
    v19 = *(int *)(a1 + 196);
    if ( (_DWORD)v19 )
    {
      v20 = *(_QWORD *)(a1 + 176);
      if ( (int)v15 <= 0 )
        v15 = 1;
      v21 = v13 + v15 - 1;
      if ( v21 < v20 )
        goto LABEL_29;
      if ( (int)v19 <= 0 )
        v19 = 1;
      if ( v20 + v19 - 1 < v13 )
      {
LABEL_29:
        if ( v21 >= v14 )
        {
          v22 = 1;
          if ( (int)v11 > 0 )
            v22 = v11;
          if ( v22 + v17 >= v13 && ((*(_BYTE *)(v5 + 56) & 2) == 0 || *(_QWORD *)(v5 + 40) == -1) )
          {
            if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0xF) != 0xB )
              return 1;
            v18 = *(_DWORD *)(v6 + 56);
          }
        }
      }
    }
  }
  if ( (v18 & 0x400) != 0 && (unsigned __int8)*(_QWORD *)(v6 + 24) && !(unsigned int)verify_tinfo() )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
      get_tinfo_property();
    else
      copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCC34u, a3);
      BUG();
    }
    if ( (*(_BYTE *)(v5 + 57) & 4) != 0 || (get_tinfo_property() & 0x2F) == 0xD )
      goto LABEL_38;
    if ( !((*(_QWORD *)(v6 + 32) - *(_QWORD *)(v5 + 32)) % tinfo_size) && !(*(_DWORD *)(v5 + 52) % tinfo_size) )
    {
      if ( *(_QWORD *)(v5 + 40) != -1 )
      {
LABEL_38:
        clear_tinfo_t();
        return v8;
      }
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        get_tinfo_property();
        v26 = compare_tinfo();
        clear_tinfo_t();
        v8 = v26 ^ 1;
        goto LABEL_38;
      }
    }
    v8 = 1;
    goto LABEL_38;
  }
  return 0;
}

