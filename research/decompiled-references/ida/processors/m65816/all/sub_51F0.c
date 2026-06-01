__int64 __fastcall sub_51F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  unsigned __int8 byte; // al
  char *v6; // rax
  __int16 v7; // dx
  char v8; // al
  char v9; // r12
  int v11; // r12d
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  int v14; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 )
  {
    *(_BYTE *)(a1 + 264) = 1;
LABEL_3:
    add_cref();
    goto LABEL_4;
  }
  if ( v3 < *(_DWORD *)(v2 + 108) )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 264) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 264) &= 1u;
    if ( (v11 & 0x100) != 0 )
      sub_4ED0(a1, a2 + 40, 1, a2);
    if ( (v11 & 0x200) != 0 )
      sub_4ED0(a1, a2 + 80, 1, a2);
    if ( (v11 & 4) != 0 )
      sub_4ED0(a1, a2 + 40, 0, a2);
    if ( (v11 & 8) != 0 )
      sub_4ED0(a1, a2 + 80, 0, a2);
    if ( (v11 & 0x4000) != 0 )
      remember_problem();
  }
  else
  {
    *(_BYTE *)(a1 + 264) = 1;
  }
  if ( *(_BYTE *)(a1 + 264) )
    goto LABEL_3;
LABEL_4:
  byte = get_byte();
  v6 = sub_4930(byte);
  if ( (*(_DWORD *)v6 & 0xFFFFFFFD) == 0x20 && (unsigned int)(*((_DWORD *)v6 + 1) - 3) <= 2 )
    remember_problem();
  v7 = *(_WORD *)(a2 + 24);
  switch ( v7 )
  {
    case 31:
    case 32:
    case 33:
    case 34:
      v12 = *(_QWORD *)(a2 + 64);
      if ( v12 )
      {
        if ( ((v7 - 31) & 0xFFFD) != 0 )
          map_code_ea();
        else
          sub_9880(a1, v12);
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
        get_sreg();
        split_sreg_range();
      }
      break;
    case 54:
      if ( (unsigned int)sub_B760(*(_QWORD *)(a2 + 16), 1, 1) != -1 )
      {
        split_sreg_range();
        split_sreg_range();
      }
      break;
    case 55:
      if ( (unsigned int)sub_B760(*(_QWORD *)(a2 + 16), 2, 1) != -1 )
        goto LABEL_11;
      break;
    case 56:
      if ( sub_BC30(*(_QWORD *)(a2 + 16), 50) != -1 )
      {
        get_sreg();
        get_sreg();
        get_sreg();
        split_sreg_range();
        split_sreg_range();
      }
      break;
    case 59:
    case 69:
      v8 = get_byte();
      v9 = v8 & 0x10;
      if ( (v8 & 0x20) != 0 )
        split_sreg_range();
      if ( v9 )
        goto LABEL_11;
      break;
    case 92:
      if ( *(_QWORD *)(a2 + 16) )
      {
        v13 = get_byte();
        v14 = *(_DWORD *)sub_4930(v13);
        if ( v14 == 16 || v14 == 66 )
LABEL_11:
          split_sreg_range();
      }
      break;
    default:
      return 1;
  }
  return 1;
}

