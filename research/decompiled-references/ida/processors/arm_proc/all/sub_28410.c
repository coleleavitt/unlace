__int64 __fastcall sub_28410(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int dword; // r12d
  __int16 v4; // bx
  __int64 result; // rax
  __int16 v6; // bx
  unsigned int v7; // r12d
  bool v8; // al
  __int16 word; // bx

  if ( !*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v2 = a2 & 3;
    if ( v2 == 1 )
    {
      if ( (unsigned __int8)get_byte() != 0xC0 )
        return 0;
      word = get_word();
      if ( (unsigned __int8)getinf_flag() && *(_BYTE *)(a1 + 288) )
        word = __ROL2__(word, 8);
      result = 3;
      if ( word != 18112 )
        return 0;
      return result;
    }
    if ( v2 == 2 )
    {
      v6 = get_word();
      if ( (unsigned __int8)getinf_flag() && *(_BYTE *)(a1 + 288) )
        v6 = __ROL2__(v6, 8);
      if ( v6 == 18112 || v6 == -16640 )
        return 2;
      else
        return 2 * (unsigned int)(v6 == -8450 || v6 == -24351 || v6 == 0);
    }
    if ( (a2 & 3) != 0 )
      return 0;
    dword = get_dword();
    if ( (unsigned __int8)getinf_flag() && *(_BYTE *)(a1 + 288) )
      dword = _byteswap_ulong(dword);
    if ( dword && dword != -2147421265 )
    {
      v4 = get_word();
      if ( (unsigned __int8)getinf_flag() )
      {
        if ( *(_BYTE *)(a1 + 288) )
          v4 = __ROL2__(v4, 8);
      }
      return 2 * (unsigned int)(v4 == -16640 || v4 == 18112);
    }
    return 4;
  }
  v7 = get_dword();
  if ( (unsigned __int8)getinf_flag() && *(_BYTE *)(a1 + 288) )
    v7 = _byteswap_ulong(v7);
  if ( !v7 )
    return 4;
  if ( (unsigned __int8)sub_55C30(a2) )
  {
    v8 = v7 == -721215457;
    if ( v7 == -736100320 )
    {
      if ( (unsigned int)getinf() == 25 )
      {
        getseg();
        get_segm_name();
      }
      return 0;
    }
  }
  else
  {
    v8 = (v7 & 0xFFFFFFF) == 52490240 || (v7 & 0xFFFFFFF) == 27262976;
  }
  return 4 * (unsigned int)v8;
}

