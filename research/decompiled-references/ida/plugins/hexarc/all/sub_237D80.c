__int64 __fastcall sub_237D80(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  char tinfo_property; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4;
  v22[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) == a5 && *(_BYTE *)a4 == 15 && (get_tinfo_property() & 0xF) != 0xB )
  {
    copy_tinfo_t();
    return 1;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(v6 + 1) & 2) == 0 || (v12 = *a1, v13 = 2, (get_tinfo_property() & 0x2F) == 0xD) )
    {
      if ( *(_BYTE *)v6 != 4 )
        return 0;
      goto LABEL_4;
    }
    v14 = *(_QWORD **)(a2 + 1392);
    v22[0] = 0;
    if ( v14 )
    {
      v13 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v13 )
        goto LABEL_24;
      if ( (*(_BYTE *)(*v14 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
    }
LABEL_11:
    if ( *(_BYTE *)v6 == 9 )
      goto LABEL_18;
LABEL_12:
    clear_tinfo_t();
    if ( *(_BYTE *)v6 != 4 )
      return 0;
LABEL_4:
    v11 = *(_QWORD *)(v6 + 8);
    if ( (unsigned int)(*(_DWORD *)v11 - 56) <= 1 )
    {
      tinfo_property = get_tinfo_property();
      v11 = *(_QWORD *)(v6 + 8);
      if ( (tinfo_property & 0x2F) == 0xD )
      {
        copy_tinfo_t();
        set_tinfo_property();
        return 1;
      }
    }
    a3 = *(_QWORD *)(v11 + 24);
    v6 = v11 + 64;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v13 + 24);
    if ( a3 >= v16 )
      break;
    v13 = *(_QWORD *)(v13 + 8);
LABEL_16:
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      if ( *(_BYTE *)v6 != 9 )
        goto LABEL_12;
      goto LABEL_18;
    }
  }
  if ( v16 < a3 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    goto LABEL_16;
  }
  if ( v14 == (_QWORD *)v13 )
    goto LABEL_11;
LABEL_24:
  if ( !a6 )
  {
    v12 = 0;
    v13 = *(_QWORD *)(v13 + 32);
    if ( a5 == get_tinfo_size() )
    {
      copy_tinfo_t();
    }
    else if ( *(_BYTE *)v6 == 9 )
    {
LABEL_18:
      if ( *(_QWORD *)(**(_QWORD **)(v6 + 8) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(v6 + 8) + 16LL) )
        sub_237000(v12, v13);
      copy_tinfo_t();
      v17 = *(_QWORD *)(v6 + 8);
      goto LABEL_27;
    }
LABEL_26:
    v17 = 0;
    goto LABEL_27;
  }
  copy_tinfo_t();
  if ( *(_BYTE *)a6 != 9 )
    goto LABEL_26;
  v17 = *(_QWORD *)(a6 + 8);
LABEL_27:
  if ( !LOBYTE(v22[0]) )
    goto LABEL_12;
  if ( (get_tinfo_property() & 0xF) == 0xB || a5 != get_tinfo_size() )
  {
    if ( v17 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 >= 0 )
      {
        if ( (unsigned __int8)sub_32D500(a1, v22, v19, a5, 1) )
        {
          set_tinfo_property();
          goto LABEL_40;
        }
      }
    }
    goto LABEL_12;
  }
  v20 = *a1;
  *a1 = v22[0];
  v22[0] = v20;
  set_tinfo_property();
LABEL_40:
  clear_tinfo_t();
  return 1;
}

