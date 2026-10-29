__int64 __fastcall sub_28410(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int dword; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 v8; // bx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int16 v14; // bx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // al
  __int16 word; // bx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *haystack; // [rsp+0h] [rbp-38h]
  char *haystacka; // [rsp+0h] [rbp-38h]
  __int64 v32; // [rsp+8h] [rbp-30h]
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+10h] [rbp-28h]

  if ( !*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg(a2, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v2 = a2 & 3;
    if ( v2 == 1 )
    {
      if ( (unsigned __int8)get_byte(a2) != 0xC0 )
        return 0;
      word = get_word(a2 + 2);
      if ( (unsigned __int8)getinf_flag(3, 32, v26, v27, v28, v29, (__int64)haystack, v32, v34) && *(_BYTE *)(a1 + 288) )
        word = __ROL2__(word, 8);
      result = 3;
      if ( word != 18112 )
        return 0;
      return result;
    }
    if ( v2 == 2 )
    {
      v14 = get_word(a2);
      if ( (unsigned __int8)getinf_flag(3, 32, v15, v16, v17, v18, (__int64)haystack, v32, v34) && *(_BYTE *)(a1 + 288) )
        v14 = __ROL2__(v14, 8);
      if ( v14 == 18112 || v14 == -16640 )
        return 2;
      else
        return 2 * (unsigned int)(v14 == -8450 || v14 == -24351 || v14 == 0);
    }
    if ( (a2 & 3) != 0 )
      return 0;
    dword = get_dword(a2);
    if ( (unsigned __int8)getinf_flag(3, 32, v4, v5, v6, v7, (__int64)haystack, v32, v34) && *(_BYTE *)(a1 + 288) )
      dword = _byteswap_ulong(dword);
    if ( dword && dword != -2147421265 )
    {
      v8 = get_word(a2);
      if ( (unsigned __int8)getinf_flag(3, 32, v9, v10, v11, v12, (__int64)haystacka, v33, v35) )
      {
        if ( *(_BYTE *)(a1 + 288) )
          v8 = __ROL2__(v8, 8);
      }
      return 2 * (unsigned int)(v8 == -16640 || v8 == 18112);
    }
    return 4;
  }
  v19 = get_dword(a2);
  if ( (unsigned __int8)getinf_flag(3, 32, v20, v21, v22, v23, (__int64)haystack, v32, v34) && *(_BYTE *)(a1 + 288) )
    v19 = _byteswap_ulong(v19);
  if ( !v19 )
    return 4;
  if ( (unsigned __int8)sub_55C30(a2) )
  {
    v24 = v19 == -721215457;
    if ( v19 == -736100320 )
    {
      if ( (unsigned int)getinf(5) == 25 )
      {
        getseg();
        get_segm_name();
      }
      return 0;
    }
  }
  else
  {
    v24 = (v19 & 0xFFFFFFF) == 52490240 || (v19 & 0xFFFFFFF) == 27262976;
  }
  return 4 * (unsigned int)v24;
}
