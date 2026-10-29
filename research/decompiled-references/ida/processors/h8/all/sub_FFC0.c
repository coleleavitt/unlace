__int64 __fastcall sub_FFC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // r13
  char v6; // r12
  char v7; // al
  __int16 v8; // dx
  int v9; // r15d
  int v10; // r14d
  char v12; // [rsp+3h] [rbp-45h]
  int v13; // [rsp+4h] [rbp-44h]
  int v14; // [rsp+4h] [rbp-44h]
  int v15; // [rsp+8h] [rbp-40h]
  int v16; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 229) = 1;
  }
  else
  {
    v13 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    v5 = is_forced_operand();
    v6 = is_forced_operand();
    v7 = is_forced_operand();
    v8 = v13;
    v12 = v7;
    v9 = v13 & 8;
    v10 = v13 & 0x10;
    *(_BYTE *)(a1 + 229) = ~(_BYTE)v13;
    *(_BYTE *)(a1 + 229) &= 1u;
    v14 = v13 & 0x200;
    v15 = v8 & 0x400;
    v16 = v8 & 4;
    if ( (v8 & 0x100) != 0 )
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 40), v5, 1);
    if ( v14 )
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 80), v6, 1);
    if ( v15 )
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 120), v12, 1);
    if ( v16 )
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 40), v5, 0);
    if ( v9 )
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 80), v6, 0);
    if ( v10 )
    {
      sub_F850(a1, a2, (unsigned __int8 *)(a2 + 120), v12, 0);
      if ( (*(_BYTE *)(a1 + 224) & 8) != 0 )
        goto LABEL_15;
LABEL_21:
      if ( (unsigned __int8)segtype() == 1 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 224) & 8) == 0 )
    goto LABEL_21;
LABEL_15:
  sub_FF10(a1, a2);
  if ( (unsigned __int8)segtype() == 1 )
  {
LABEL_16:
    *(_BYTE *)(a1 + 229) = 0;
    goto LABEL_17;
  }
LABEL_22:
  if ( *(_BYTE *)(a1 + 229) )
    add_cref();
LABEL_17:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 229) )
      sub_F5A0(a1, a2);
    else
      recalc_spd();
  }
  return 1;
}

