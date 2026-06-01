__int64 __fastcall sub_7800(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  char v6; // r13
  char v7; // r12
  char v8; // al
  __int16 v9; // dx
  int v10; // r15d
  int v11; // r14d
  char v13; // [rsp+3h] [rbp-45h]
  int v14; // [rsp+4h] [rbp-44h]
  int v15; // [rsp+4h] [rbp-44h]
  int v16; // [rsp+8h] [rbp-40h]
  int v17; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 281) = 1;
    goto LABEL_19;
  }
  v14 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  v6 = is_forced_operand();
  v7 = is_forced_operand();
  v8 = is_forced_operand();
  v9 = v14;
  v13 = v8;
  v10 = v14 & 8;
  v11 = v14 & 0x10;
  *(_BYTE *)(a1 + 281) = ~(_BYTE)v14;
  *(_BYTE *)(a1 + 281) &= 1u;
  v15 = v14 & 0x200;
  v16 = v9 & 0x400;
  v17 = v9 & 4;
  if ( (v9 & 0x100) != 0 )
    sub_7460(a1, a2, (unsigned __int8 *)(a2 + 40), v6, 1, a3);
  if ( v15 )
    sub_7460(a1, a2, (unsigned __int8 *)(a2 + 80), v7, 1, a3);
  if ( v16 )
    sub_7460(a1, a2, (unsigned __int8 *)(a2 + 120), v13, 1, a3);
  if ( v17 )
    sub_7460(a1, a2, (unsigned __int8 *)(a2 + 40), v6, 0, a3);
  if ( v10 )
    sub_7460(a1, a2, (unsigned __int8 *)(a2 + 80), v7, 0, a3);
  if ( !v11 )
  {
LABEL_19:
    if ( (unsigned __int8)segtype() == 1 )
      goto LABEL_15;
    goto LABEL_20;
  }
  sub_7460(a1, a2, (unsigned __int8 *)(a2 + 120), v13, 0, a3);
  if ( (unsigned __int8)segtype() == 1 )
  {
LABEL_15:
    *(_BYTE *)(a1 + 281) = 0;
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 45 <= 2 && !*(_BYTE *)(a2 + 72) )
      *(_BYTE *)(a1 + 281) = 0;
    goto LABEL_23;
  }
LABEL_20:
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 45 > 2 || *(_BYTE *)(a2 + 72) )
  {
    if ( *(_BYTE *)(a1 + 281) )
      add_cref();
  }
  else
  {
    *(_BYTE *)(a1 + 281) = 0;
  }
LABEL_23:
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 && !*(_BYTE *)(a1 + 281) )
    recalc_spd();
  return 1;
}

