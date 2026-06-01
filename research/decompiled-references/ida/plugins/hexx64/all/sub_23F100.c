__int64 __fastcall sub_23F100(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6, double a7)
{
  __int64 v7; // r15
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  char tinfo_property; // al
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  v21[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) == a5 && *(_BYTE *)a4 == 15 && (get_tinfo_property() & 0xF) != 0xB )
  {
    copy_tinfo_t();
    return 1;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(v7 + 1) & 2) == 0 || (get_tinfo_property() & 0x2F) == 0xD )
    {
      if ( *(_BYTE *)v7 != 4 )
        return 0;
      goto LABEL_4;
    }
    v12 = *(_QWORD **)(a2 + 1392);
    v21[0] = 0;
    if ( v12 )
    {
      v13 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v13 )
        goto LABEL_24;
      if ( (*(_BYTE *)(*v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
    }
LABEL_11:
    if ( *(_BYTE *)v7 == 9 )
      goto LABEL_18;
LABEL_12:
    clear_tinfo_t();
    if ( *(_BYTE *)v7 != 4 )
      return 0;
LABEL_4:
    v11 = *(_QWORD *)(v7 + 8);
    if ( (unsigned int)(*(_DWORD *)v11 - 56) <= 1 )
    {
      tinfo_property = get_tinfo_property();
      v11 = *(_QWORD *)(v7 + 8);
      if ( (tinfo_property & 0x2F) == 0xD )
      {
        copy_tinfo_t();
        set_tinfo_property();
        return 1;
      }
    }
    a3 = *(_QWORD *)(v11 + 24);
    v7 = v11 + 64;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v13 + 24);
    if ( a3 >= v15 )
      break;
    v13 = *(_QWORD *)(v13 + 8);
LABEL_16:
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      if ( *(_BYTE *)v7 != 9 )
        goto LABEL_12;
      goto LABEL_18;
    }
  }
  if ( v15 < a3 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    goto LABEL_16;
  }
  if ( v12 == (_QWORD *)v13 )
    goto LABEL_11;
LABEL_24:
  if ( !a6 )
  {
    if ( a5 == get_tinfo_size() )
    {
      copy_tinfo_t();
    }
    else if ( *(_BYTE *)v7 == 9 )
    {
LABEL_18:
      if ( *(_QWORD *)(**(_QWORD **)(v7 + 8) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(v7 + 8) + 16LL) )
        sub_23E380(a7);
      copy_tinfo_t();
      v16 = *(_QWORD *)(v7 + 8);
      goto LABEL_27;
    }
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
  copy_tinfo_t();
  if ( *(_BYTE *)a6 != 9 )
    goto LABEL_26;
  v16 = *(_QWORD *)(a6 + 8);
LABEL_27:
  if ( !LOBYTE(v21[0]) )
    goto LABEL_12;
  if ( (get_tinfo_property() & 0xF) == 0xB || a5 != get_tinfo_size() )
  {
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      if ( v18 >= 0 )
      {
        if ( (unsigned __int8)sub_334D20(a1, v21, v18, a5, 1) )
        {
          set_tinfo_property();
          goto LABEL_40;
        }
      }
    }
    goto LABEL_12;
  }
  v19 = *a1;
  *a1 = v21[0];
  v21[0] = v19;
  set_tinfo_property();
LABEL_40:
  clear_tinfo_t();
  return 1;
}

