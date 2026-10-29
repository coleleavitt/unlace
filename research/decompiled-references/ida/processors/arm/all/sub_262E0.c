__int64 __fastcall sub_262E0(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4, char a5)
{
  int v9; // r15d
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 flags; // [rsp+0h] [rbp-178h]
  __int64 v19; // [rsp+8h] [rbp-170h]
  __int64 v20; // [rsp+8h] [rbp-170h]
  __int64 v21; // [rsp+8h] [rbp-170h]
  __int64 v22; // [rsp+8h] [rbp-170h]
  __int64 v23; // [rsp+10h] [rbp-168h]

  flags = get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  v9 = get_flags_ex(a3, 0);
  if ( (v9 & 0x600) != 0x400 )
    return 0;
  v11 = v9 & 0xF0000000;
  if ( v11 == 0x20000000 )
  {
    if ( a2[5] == 2 )
    {
      v15 = a3;
      while ( 1 )
      {
        v21 = v15 + 1;
        if ( !(unsigned __int8)is_loaded() )
          break;
        v15 = v21;
        if ( v21 == a3 + 4 )
          goto LABEL_28;
      }
    }
    return 0;
  }
  if ( v11 == 805306368 )
  {
    if ( a2[5] != 7 )
      return 0;
    v12 = a3;
    while ( 1 )
    {
      v19 = v11;
      v23 = v12 + 1;
      v13 = is_loaded();
      v11 = v19;
      if ( !v13 )
        goto LABEL_14;
      ++v12;
      if ( a3 + 8 == v23 )
        goto LABEL_28;
    }
  }
  if ( v11 != 0x10000000 )
  {
    if ( (v9 & 0xF0000000) == 0 )
    {
      if ( a2[5] || !(unsigned __int8)is_loaded() )
        return 0;
      goto LABEL_28;
    }
    if ( v11 == 0x80000000LL )
    {
      if ( a2[5] == 3 )
      {
        v17 = a3;
        while ( 1 )
        {
          v22 = v17 + 1;
          if ( !(unsigned __int8)is_loaded() )
            break;
          v17 = v22;
          if ( v22 == a3 + 4 )
            goto LABEL_28;
        }
      }
      return 0;
    }
LABEL_14:
    if ( v11 == 2415919104LL && a2[5] == 4 )
    {
      v14 = a3;
      while ( 1 )
      {
        v20 = v14 + 1;
        if ( !(unsigned __int8)is_loaded() )
          break;
        v14 = v20;
        if ( a3 + 8 == v20 )
          goto LABEL_28;
      }
    }
    return 0;
  }
  if ( a2[5] != 1 || !(unsigned __int8)is_loaded() || !(unsigned __int8)is_loaded() )
    return 0;
LABEL_28:
  if ( a5 )
  {
    v16 = flags >> 4;
    if ( !*a2 )
      LODWORD(v16) = flags;
    if ( (v9 & 0xF00000) != (v16 & 0xF00000) )
    {
      get_opinfo();
      set_opinfo();
      set_op_type();
      auto_mark_range();
      auto_mark_range();
    }
  }
  else if ( (unsigned __int8)is_defarg() )
  {
    is_defarg();
  }
  if ( a4 )
  {
    switch ( a2[5] )
    {
      case 0:
        *a4 = get_byte(a3);
        break;
      case 1:
        *(_WORD *)a4 = get_word(a3);
        break;
      case 2:
        *(_DWORD *)a4 = get_dword(a3);
        break;
      case 3:
        *(_DWORD *)a4 = 0;
        get_bytes();
        break;
      case 4:
        *(_QWORD *)a4 = 0;
        get_bytes();
        break;
      case 7:
        *(_QWORD *)a4 = get_qword();
        break;
      default:
        return 1;
    }
  }
  return 1;
}
