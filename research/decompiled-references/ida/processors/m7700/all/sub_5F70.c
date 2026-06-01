__int64 __fastcall sub_5F70(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  bool v7; // cc
  __int64 v8; // rax
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 261) = (*(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 1) == 0;
    if ( !*(_BYTE *)(a2 + 41) )
    {
LABEL_4:
      if ( !*(_BYTE *)(a2 + 81) )
        goto LABEL_5;
      goto LABEL_28;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 261) = 1;
    if ( !*(_BYTE *)(a2 + 41) )
      goto LABEL_4;
  }
  sub_5C60(a1, a2, a2 + 40);
  if ( !*(_BYTE *)(a2 + 81) )
  {
LABEL_5:
    if ( !*(_BYTE *)(a2 + 121) )
      goto LABEL_6;
    goto LABEL_29;
  }
LABEL_28:
  sub_5C60(a1, a2, a2 + 80);
  if ( !*(_BYTE *)(a2 + 121) )
  {
LABEL_6:
    v6 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned int)(v6 - 33) > 1 )
      goto LABEL_7;
    goto LABEL_30;
  }
LABEL_29:
  sub_5C60(a1, a2, a2 + 120);
  v6 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned int)(v6 - 33) > 1 )
    goto LABEL_7;
LABEL_30:
  if ( !*(_BYTE *)(a2 + 41) || (*(_BYTE *)(a2 + 72) & 2) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 261) )
      return 1;
    goto LABEL_33;
  }
  remember_problem();
  LOWORD(v6) = *(_WORD *)(a2 + 24);
LABEL_7:
  if ( !*(_BYTE *)(a1 + 261) )
    goto LABEL_8;
  if ( (_WORD)v6 == 13 )
  {
    add_cref();
    create_data();
    LOWORD(v6) = *(_WORD *)(a2 + 24);
    v7 = (unsigned __int16)v6 <= 0x3Cu;
    if ( (_WORD)v6 != 60 )
      goto LABEL_9;
LABEL_25:
    split_sreg_range();
    split_sreg_range();
    return 1;
  }
LABEL_33:
  add_cref();
  LOWORD(v6) = *(_WORD *)(a2 + 24);
LABEL_8:
  v7 = (unsigned __int16)v6 <= 0x3Cu;
  if ( (_WORD)v6 == 60 )
    goto LABEL_25;
LABEL_9:
  if ( v7 )
  {
    if ( (_WORD)v6 != 19 )
    {
      if ( (_WORD)v6 != 20 )
        return 1;
      v10 = *(_QWORD *)(a2 + 48);
      if ( (v10 & 0x20) != 0 )
      {
        split_sreg_range();
        v10 = *(_QWORD *)(a2 + 48);
      }
      if ( (v10 & 0x10) == 0 )
        return 1;
LABEL_15:
      split_sreg_range();
      return 1;
    }
  }
  else if ( (_WORD)v6 != 76 )
  {
    if ( (_WORD)v6 != 77 )
      return 1;
    v8 = *(_QWORD *)(a2 + 48);
    if ( (v8 & 0x20) != 0 )
    {
      split_sreg_range();
      v8 = *(_QWORD *)(a2 + 48);
    }
    if ( (v8 & 0x10) == 0 )
      return 1;
    goto LABEL_15;
  }
  split_sreg_range();
  return 1;
}

