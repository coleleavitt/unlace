__int64 __fastcall sub_4AD0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  char v9; // r12
  char v10; // al
  __int16 v11; // dx
  __int16 v12; // si
  int v13; // r15d
  int v14; // r14d
  char v15; // [rsp+2h] [rbp-46h]
  char v16; // [rsp+3h] [rbp-45h]
  int v17; // [rsp+4h] [rbp-44h]
  int v18; // [rsp+4h] [rbp-44h]
  int v19; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned __int8)segtype() == 1 )
    return 1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int16 *)(a2 + 24);
  v6 = *(_DWORD *)(v4 + 104);
  if ( v5 < v6 || v5 >= *(_DWORD *)(v4 + 108) )
  {
    v7 = 0;
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 192) = 1;
  }
  else
  {
    v17 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v6) + 8);
    v15 = is_forced_operand();
    v9 = is_forced_operand();
    v10 = is_forced_operand();
    v11 = v17;
    v16 = v10;
    v12 = v17;
    v7 = v17 & 1;
    v13 = v17 & 8;
    v18 = v17 & 0x200;
    v14 = v11 & 0x10;
    *(_BYTE *)(a1 + 192) = v7 ^ 1;
    v19 = v11 & 4;
    *(_BYTE *)(a1 + 192) &= 1u;
    if ( (v11 & 0x100) != 0 )
      sub_4880(a1, a2, a2 + 40, v15, 1, a3);
    if ( v18 )
      sub_4880(a1, a2, a2 + 80, v9, 1, a3);
    if ( (v12 & 0x400) != 0 )
      sub_4880(a1, a2, a2 + 120, v16, 1, a3);
    if ( v19 )
      sub_4880(a1, a2, a2 + 40, v15, 0, a3);
    if ( v13 )
      sub_4880(a1, a2, a2 + 80, v9, 0, a3);
    if ( v14 )
    {
      sub_4880(a1, a2, a2 + 120, v16, 0, a3);
      if ( *(_WORD *)(a2 + 24) == 26 )
        goto LABEL_23;
      goto LABEL_5;
    }
  }
  if ( *(_WORD *)(a2 + 24) == 26 )
  {
LABEL_23:
    if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) <= 3u )
    {
      get_item_end();
      split_sreg_range();
    }
  }
LABEL_5:
  if ( v7 )
  {
    *(_BYTE *)(a1 + 192) = 0;
  }
  else if ( *(_BYTE *)(a1 + 192) )
  {
    add_cref();
  }
  return 1;
}

