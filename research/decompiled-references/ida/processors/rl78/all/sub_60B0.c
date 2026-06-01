__int64 __fastcall sub_60B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // edx
  int v5; // esi
  unsigned __int16 v6; // ax
  char v7; // r12
  int v9; // r12d
  __int64 func; // rax
  bool v11; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v12 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v2 + 104);
  v6 = v3;
  if ( v3 < v5 )
  {
    v11 = 1;
    if ( (unsigned __int16)v3 > 0x18u )
    {
      if ( (unsigned __int16)(v3 - 32) > 2u )
        goto LABEL_4;
    }
    else if ( (unsigned __int16)v3 <= 0x15u )
    {
      goto LABEL_4;
    }
    sub_5700();
LABEL_4:
    v7 = 1;
    add_cref();
    if ( *(_WORD *)(a2 + 24) != 35 )
      goto LABEL_14;
    goto LABEL_5;
  }
  if ( v3 >= *(_DWORD *)(v2 + 108) )
  {
    v11 = 1;
    goto LABEL_10;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v5) + 8);
  v11 = (v9 & 1) == 0;
  if ( (v9 & 0x100) != 0 )
    sub_5810(a1, &v11, a2, a2 + 40);
  if ( (v9 & 0x200) != 0 )
    sub_5810(a1, &v11, a2, a2 + 80);
  if ( (v9 & 4) != 0 )
    sub_5810(a1, &v11, a2, a2 + 40);
  if ( (v9 & 8) == 0 )
  {
    v6 = *(_WORD *)(a2 + 24);
LABEL_10:
    v7 = v11;
    if ( v6 <= 0x18u )
      goto LABEL_11;
LABEL_24:
    if ( (unsigned __int16)(v6 - 32) > 2u )
      goto LABEL_12;
    goto LABEL_25;
  }
  sub_5810(a1, &v11, a2, a2 + 80);
  v6 = *(_WORD *)(a2 + 24);
  v7 = v11;
  if ( v6 > 0x18u )
    goto LABEL_24;
LABEL_11:
  if ( v6 <= 0x15u )
    goto LABEL_12;
LABEL_25:
  sub_5700();
LABEL_12:
  if ( v7 )
    goto LABEL_4;
  if ( *(_WORD *)(a2 + 24) != 35 )
    goto LABEL_14;
LABEL_5:
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x12000000000100LL && *(_BYTE *)(a2 + 81) == 5 )
  {
    get_item_end();
    split_sreg_range();
  }
LABEL_14:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    func = get_func();
    if ( v7 )
      sub_5FC0(a1, func, a2);
    else
      recalc_spd();
  }
  return 1;
}

