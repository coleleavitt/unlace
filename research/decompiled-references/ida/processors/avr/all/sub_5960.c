__int64 __fastcall sub_5960(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  char v6; // r12
  char v7; // al
  __int16 v8; // dx
  char v9; // bp
  __int16 v10; // cx
  char v11; // al
  int v12; // r15d
  int v13; // r14d
  char v14; // bp
  __int16 wide_byte; // ax
  int v17; // edx
  char v18; // [rsp+3h] [rbp-45h]
  int v19; // [rsp+4h] [rbp-44h]
  int v20; // [rsp+4h] [rbp-44h]
  int v21; // [rsp+8h] [rbp-40h]
  int v22; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 350) = 1;
    goto LABEL_20;
  }
  v19 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  v18 = is_forced_operand();
  v6 = is_forced_operand();
  v7 = is_forced_operand();
  v8 = v19;
  v9 = v7;
  v10 = v19;
  v11 = ~(_BYTE)v19;
  v12 = v19 & 8;
  v20 = v19 & 0x200;
  v13 = v8 & 0x10;
  *(_BYTE *)(a1 + 350) = v11;
  v21 = v10 & 0x400;
  *(_BYTE *)(a1 + 350) &= 1u;
  v22 = v8 & 4;
  if ( (v8 & 0x100) != 0 )
    sub_5690(a1, a2, (unsigned __int8 *)(a2 + 40), v18, 1, a3);
  if ( v20 )
    sub_5690(a1, a2, (unsigned __int8 *)(a2 + 80), v6, 1, a3);
  if ( v21 )
    sub_5690(a1, a2, (unsigned __int8 *)(a2 + 120), v9, 1, a3);
  if ( v22 )
    sub_5690(a1, a2, (unsigned __int8 *)(a2 + 40), v18, 0, a3);
  if ( v12 )
    sub_5690(a1, a2, (unsigned __int8 *)(a2 + 80), v6, 0, a3);
  if ( !v13 )
  {
LABEL_20:
    v14 = *(_BYTE *)(a1 + 350);
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_21;
  }
  sub_5690(a1, a2, (unsigned __int8 *)(a2 + 120), v9, 0, a3);
  v14 = *(_BYTE *)(a1 + 350);
  if ( !v14 )
  {
LABEL_15:
    if ( *(_QWORD *)(a2 + 16) && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      wide_byte = get_wide_byte();
      v17 = wide_byte & 0xFC00;
      if ( v17 == 38912 )
        v14 = HIBYTE(wide_byte) & 1;
      else
        v14 = v17 == 4096 || v17 == 64512;
    }
    *(_BYTE *)(a1 + 350) = v14;
    if ( (unsigned __int8)segtype() == 1 )
      goto LABEL_17;
    goto LABEL_22;
  }
LABEL_21:
  if ( (unsigned __int8)segtype() == 1 )
  {
LABEL_17:
    *(_BYTE *)(a1 + 350) = 0;
    return 1;
  }
LABEL_22:
  if ( *(_BYTE *)(a1 + 350) )
    add_cref();
  return 1;
}

