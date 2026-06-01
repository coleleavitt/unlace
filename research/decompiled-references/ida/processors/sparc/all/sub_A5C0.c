__int64 __fastcall sub_A5C0(__int64 a1, unsigned int a2)
{
  __int64 flags; // rbp
  unsigned __int16 v4; // ax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax

  set_immd(*(_QWORD *)(a1 + 16));
  flags = get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  if ( (unsigned __int8)is_defarg(flags, a2) )
    return flags;
  v4 = *(_WORD *)(a1 + 24);
  if ( v4 > 8u )
  {
    switch ( v4 )
    {
      case 0x52u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Cu:
        goto LABEL_9;
      case 0x5Du:
      case 0x5Eu:
        if ( a2 != 1 )
          return flags;
        break;
      case 0x6Cu:
      case 0x6Du:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
        break;
      default:
        return flags;
    }
    v6 = *(_QWORD *)(a1 + 16);
    v7 = a2;
    v8 = 0x22222202200000LL;
    goto LABEL_7;
  }
  if ( v4 <= 4u )
    return flags;
LABEL_9:
  v9 = *(_QWORD *)(a1 + 16);
  v10 = num_flag();
  v7 = a2;
  v8 = v10;
  v6 = v9;
LABEL_7:
  set_op_type(v6, v8, v7);
  return get_flags_ex(*(_QWORD *)(a1 + 16), 0);
}

