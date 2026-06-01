__int64 __fastcall sub_12080(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // al
  char v6; // dh
  int v7; // r14d
  int v8; // r13d
  int v9; // r12d
  int v10; // ebp
  unsigned __int16 v11; // ax
  bool v12; // cc
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+3h] [rbp-55h]
  int v19; // [rsp+4h] [rbp-54h]
  int v20; // [rsp+4h] [rbp-54h]
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+Ch] [rbp-4Ch]
  char v23; // [rsp+10h] [rbp-48h]
  char v24; // [rsp+11h] [rbp-47h]
  char v25; // [rsp+12h] [rbp-46h]
  char v26; // [rsp+13h] [rbp-45h]
  int v27; // [rsp+14h] [rbp-44h]
  int v28; // [rsp+18h] [rbp-40h]
  int v29; // [rsp+1Ch] [rbp-3Ch]

  split_sreg_range();
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_BYTE *)(a1 + 248) = 1;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    is_forced_operand();
    v18 = is_forced_operand();
    v23 = is_forced_operand();
    v24 = is_forced_operand();
    v25 = is_forced_operand();
  }
  else
  {
    v19 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 248) = ~(_BYTE)v19;
    *(_BYTE *)(a1 + 248) &= 1u;
    v26 = is_forced_operand();
    v18 = is_forced_operand();
    v23 = is_forced_operand();
    v24 = is_forced_operand();
    v5 = is_forced_operand();
    v6 = BYTE1(v19);
    v25 = v5;
    v7 = v19 & 8;
    v8 = v19 & 0x10;
    v27 = v19 & 0x200;
    v9 = v19 & 0x20;
    v10 = v19 & 0x40;
    v28 = v19 & 0x400;
    v29 = v19 & 0x800;
    v22 = v19 & 0x1000;
    v21 = v19 & 0x4000;
    v20 = v19 & 4;
    if ( (v6 & 1) != 0 )
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 40), v26);
    if ( v27 )
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 80), v18);
    if ( v28 )
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 120), v23);
    if ( v29 )
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 160), v24);
    if ( v22 )
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 200), v25);
    if ( v21 )
      remember_problem();
    if ( v20 )
    {
      sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 40), v26);
      if ( v7 )
        goto LABEL_17;
      goto LABEL_25;
    }
  }
  if ( v7 )
  {
LABEL_17:
    sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 80), v18);
    if ( v8 )
      goto LABEL_18;
    goto LABEL_26;
  }
LABEL_25:
  if ( v8 )
  {
LABEL_18:
    sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 120), v23);
    if ( v9 )
      goto LABEL_19;
    goto LABEL_27;
  }
LABEL_26:
  if ( v9 )
  {
LABEL_19:
    sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 160), v24);
    if ( v10 )
      goto LABEL_20;
    goto LABEL_28;
  }
LABEL_27:
  if ( v10 )
  {
LABEL_20:
    sub_11C40(a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 200), v25);
    if ( *(_BYTE *)(a1 + 248) )
      goto LABEL_21;
LABEL_29:
    v11 = *(_WORD *)(a2 + 24);
    v12 = v11 <= 0x65u;
    if ( v11 == 101 )
      goto LABEL_34;
    goto LABEL_30;
  }
LABEL_28:
  if ( !*(_BYTE *)(a1 + 248) )
    goto LABEL_29;
LABEL_21:
  add_cref();
  v11 = *(_WORD *)(a2 + 24);
  v12 = v11 <= 0x65u;
  if ( v11 == 101 )
    goto LABEL_34;
LABEL_30:
  if ( v12 )
  {
    switch ( v11 )
    {
      case '9':
        v17 = *(_QWORD *)(a2 + 48);
        if ( (v17 & 0x20) != 0 )
        {
          split_sreg_range();
          v17 = *(_QWORD *)(a2 + 48);
        }
        if ( (v17 & 0x10) != 0 )
          goto LABEL_34;
        break;
      case 'd':
        v15 = 0;
        if ( (*(_QWORD *)(a2 + 48) & 1) != 0 )
          goto LABEL_47;
        while ( ++v15 != 4 )
        {
          v16 = *(_QWORD *)(a2 + 48);
          if ( _bittest((const int *)&v16, v15) )
LABEL_47:
            split_sreg_range();
        }
        break;
      case '8':
LABEL_34:
        split_sreg_range();
        break;
    }
  }
  else
  {
    switch ( v11 )
    {
      case 0xA6u:
        goto LABEL_34;
      case 0xA7u:
        v14 = *(_QWORD *)(a2 + 48);
        if ( (v14 & 0x20) != 0 )
        {
          split_sreg_range();
          v14 = *(_QWORD *)(a2 + 48);
        }
        if ( (v14 & 0x10) != 0 )
          goto LABEL_34;
        break;
      case 0x8Eu:
        split_sreg_range();
        split_sreg_range();
        break;
    }
  }
  return 1;
}

