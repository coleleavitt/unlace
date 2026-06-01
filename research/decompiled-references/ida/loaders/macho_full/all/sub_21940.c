unsigned __int64 __fastcall sub_21940(__int64 a1, unsigned __int64 a2)
{
  int _32bit; // eax
  __int64 v4; // rbp
  int v5; // r12d
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rbp
  unsigned int v11; // eax
  unsigned __int64 result; // rax
  char *v13; // rdx
  unsigned __int64 v14; // r12
  unsigned int v15; // ebp
  char v16; // dl
  unsigned int v17; // edi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax

  _32bit = get_32bit();
  v4 = (unsigned int)_32bit;
  v5 = _32bit + 0x80000000;
  if ( _32bit >= 0 )
    v5 = _32bit;
  v6 = (unsigned int)(v5 - 1);
  v7 = a2 + 4;
  sub_19130();
  v8 = getinf();
  if ( v8 < a2 || v7 < v8 )
    create_32bit_data();
  set_cmt();
  num_flag();
  set_op_type();
  v9 = getinf();
  if ( v9 < v7 || a2 + 8 < v9 )
    create_32bit_data();
  set_cmt();
  num_flag();
  set_op_type();
  if ( (unsigned int)v4 <= 0x2C )
  {
    if ( (unsigned int)v4 > 0x11 )
    {
      if ( ((1LL << v4) & 0x1E7660000000LL) != 0 )
      {
LABEL_28:
        v17 = v4;
        v10 = "";
        sub_119D0(v17);
        if ( (unsigned int)v6 > 0x34 )
          goto LABEL_18;
        goto LABEL_17;
      }
      if ( ((1LL << v4) & 0x3C0000) != 0 )
      {
LABEL_20:
        v13 = "";
        if ( (unsigned int)v6 <= 0x34 )
          v13 = (&off_64A20)[v6];
        return sub_216A0(a1, a2, v13);
      }
      if ( (_DWORD)v4 == 25 )
      {
        v16 = 1;
        return sub_213F0(a1, a2, v16);
      }
    }
    else if ( (unsigned int)(v4 - 1) <= 0xF )
    {
      switch ( v4 )
      {
        case 1LL:
          v16 = 0;
          return sub_213F0(a1, a2, v16);
        case 4LL:
        case 5LL:
          v14 = a2 + 8;
          v15 = get_32bit();
          if ( v15 > 8 )
          {
            v18 = a2 + 12;
            v19 = getinf();
            if ( v19 < v14 || v18 < v19 )
              create_32bit_data();
            set_cmt();
            num_flag();
            v14 = a2 + 12;
            set_op_type();
            if ( v15 > 0xC )
            {
              v20 = a2 + 16;
              v21 = getinf();
              if ( v21 < v18 || v20 < v21 )
                create_32bit_data();
              set_cmt();
              num_flag();
              set_op_type();
              v22 = getinf();
              v14 = 4 * ((v15 - 16) >> 2) + v20;
              if ( v22 < v20 || v14 < v22 )
                create_32bit_data();
              set_cmt();
            }
          }
          result = v14;
          break;
        case 6LL:
        case 7LL:
        case 9LL:
        case 12LL:
        case 13LL:
        case 14LL:
        case 15LL:
          goto LABEL_20;
        case 16LL:
          result = sub_21750(a1, a2);
          break;
        default:
          goto LABEL_16;
      }
      return result;
    }
LABEL_16:
    v10 = "";
    if ( (unsigned int)v6 > 0x34 )
    {
LABEL_18:
      v11 = get_32bit();
      return sub_211A0(a1, a2, v10, v11);
    }
LABEL_17:
    v10 = (&off_64A20)[v6];
    goto LABEL_18;
  }
  switch ( (unsigned int)v4 )
  {
    case 0x80000018:
    case 0x8000001F:
      goto LABEL_20;
    case 0x8000001C:
      h2ti();
      goto LABEL_20;
    case 0x80000022:
    case 0x80000028:
      goto LABEL_28;
    case 0x80000035:
      result = sub_21860(a1, a2, -2147483595);
      break;
    default:
      goto LABEL_16;
  }
  return result;
}

