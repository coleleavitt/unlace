void *__fastcall sub_7DD90(__int64 a1, __int64 dtype_by_size, int a3)
{
  unsigned __int16 v3; // ax
  void *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *(_WORD *)(a1 + 248);
  if ( v3 == 92 )
    return 0;
  if ( (*(_BYTE *)(a1 + 254) & 1) != 0 && (*(_BYTE *)(a1 + 497) & 8) != 0 )
  {
    sub_208A0(v3);
    dtype_by_size = (unsigned __int8)get_dtype_by_size();
    if ( (unsigned int)dtype_by_size > 0x11 )
      return 0;
  }
  switch ( dtype_by_size )
  {
    case 0LL:
      v6 = &unk_9185D;
      if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0 )
        return 0;
      break;
    case 1LL:
      v6 = &unk_9186B;
      if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x10000000 )
        return 0;
      break;
    case 2LL:
    case 3LL:
      v6 = &unk_91879;
      if ( (a3 & 0x600) == 0x400 )
      {
        v9 = a3 & 0xF0000000;
        if ( v9 == 0x20000000 || v9 == 0x80000000LL )
          return 0;
      }
      break;
    case 4LL:
    case 7LL:
      v6 = &unk_91888;
      if ( (a3 & 0x600) == 0x400 )
      {
        v8 = a3 & 0xF0000000;
        if ( v8 == 805306368 || v8 == 2415919104LL )
          return 0;
      }
      break;
    case 5LL:
      v6 = &unk_91897;
      if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x40000000 )
        return 0;
      break;
    case 8LL:
      v6 = &unk_918B5;
      if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x70000000 )
        return 0;
      break;
    case 11LL:
      v6 = &unk_918A6;
      break;
    case 16LL:
      v6 = &unk_918C6;
      if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0xE0000000LL )
        return 0;
      break;
    case 17LL:
      v6 = &unk_918D7;
      if ( (a3 & 0x600) == 0x400 && (~a3 & 0xF0000000) == 0 )
        return 0;
      break;
    default:
      return 0;
  }
  return v6;
}
