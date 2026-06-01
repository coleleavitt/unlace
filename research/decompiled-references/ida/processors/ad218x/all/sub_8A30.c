__int64 __fastcall sub_8A30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // r12d
  int v7; // r13d
  char v9; // dh
  int v10; // r14d
  int v11; // esi
  int v12; // [rsp+8h] [rbp-50h]
  int v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+14h] [rbp-44h]
  int v15; // [rsp+18h] [rbp-40h]
  int v16; // [rsp+1Ch] [rbp-3Ch]

  if ( (unsigned __int8)segtype() == 1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    v6 = 0;
    v7 = 0;
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 680) = 1;
  }
  else
  {
    v12 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    v9 = BYTE1(v12);
    v6 = v12 & 1;
    v14 = v12 & 0x200;
    v10 = v12 & 4;
    v15 = v12 & 0x400;
    v16 = v12 & 0x800;
    v7 = v12 & 0x20;
    v11 = v12 & 0x10;
    *(_BYTE *)(a1 + 680) = !(v12 & 1);
    v13 = v12 & 8;
    *(_BYTE *)(a1 + 680) &= 1u;
    if ( (v9 & 1) != 0 )
      sub_8860(a1, a2, a2 + 40);
    if ( v14 )
      sub_8860(a1, a2, a2 + 80);
    if ( v15 )
      sub_8860(a1, a2, a2 + 120);
    if ( v16 )
      sub_8860(a1, a2, a2 + 160);
    if ( v10 )
      sub_8860(a1, a2, a2 + 40);
    if ( v13 )
      sub_8860(a1, a2, a2 + 80);
    if ( v11 )
    {
      sub_8860(a1, a2, a2 + 120);
      if ( !v7 )
        goto LABEL_5;
      goto LABEL_25;
    }
  }
  if ( !v7 )
    goto LABEL_5;
LABEL_25:
  sub_8860(a1, a2, a2 + 160);
LABEL_5:
  if ( v6 )
  {
    *(_BYTE *)(a1 + 680) = 0;
  }
  else if ( *(_BYTE *)(a1 + 680) )
  {
    add_cref();
  }
  return 1;
}

