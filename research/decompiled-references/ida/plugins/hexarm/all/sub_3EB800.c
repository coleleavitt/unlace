__int64 __fastcall sub_3EB800(__int64 a1, __int64 a2, int *a3)
{
  int tinfo_size; // eax
  int v5; // r14d
  int v6; // eax
  int v7; // r12d
  char tinfo_property; // al
  int v10; // edx
  int v11; // eax

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 112LL) + 80LL);
  if ( *(_DWORD *)(a2 + 80) == 8 )
  {
    tinfo_property = get_tinfo_property();
    v10 = *a3;
    if ( (tinfo_property & 0xF) == 9 )
    {
      if ( ((v10 - 16) & 0xFFFFFFEF) != 0 && v10 > 8 )
        goto LABEL_8;
      v7 = *(_DWORD *)(a2 + 488);
      goto LABEL_6;
    }
    if ( v10 <= v5 )
      goto LABEL_5;
    if ( v10 != 16 )
    {
      if ( v10 != 32 )
        goto LABEL_8;
      goto LABEL_14;
    }
LABEL_23:
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      goto LABEL_5;
    v7 = *(_DWORD *)(a2 + 360);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)getinf_flag() || (get_tinfo_property() & 0xF) != 9 )
  {
    v6 = *a3;
    if ( *a3 <= v5 )
    {
LABEL_5:
      v7 = *(_DWORD *)(a2 + 356);
      goto LABEL_6;
    }
    if ( v6 != 8 )
    {
      if ( v6 != 16 )
        goto LABEL_8;
LABEL_14:
      if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
        goto LABEL_5;
      v7 = *(_DWORD *)(a2 + 368);
LABEL_6:
      if ( v7 != -1 )
        cleanup_argloc();
      goto LABEL_8;
    }
    goto LABEL_23;
  }
  v11 = *a3;
  if ( *a3 <= 16 )
  {
    v7 = *(_DWORD *)(a2 + 488);
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      v7 -= (v11 + 3) & 0xFFFFFFFC;
    goto LABEL_6;
  }
LABEL_8:
  *(_DWORD *)a1 = 0;
  copy_argloc();
  cleanup_argloc();
  return a1;
}

