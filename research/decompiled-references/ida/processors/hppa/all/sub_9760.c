_BOOL8 __fastcall sub_9760(__int64 a1, char a2)
{
  unsigned int dword; // eax
  unsigned __int64 v3; // rdx
  unsigned int v4; // edx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  _BOOL8 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  dword = get_dword();
  if ( (dword & 2) == 0 )
    goto LABEL_11;
  v3 = dword >> 26;
  if ( dword <= 0xCFFFFFFF )
  {
    if ( (unsigned int)v3 > 0x31 )
    {
      if ( (dword & 0xE000) == 0x8000 )
        goto LABEL_7;
      if ( a2 )
        return 1;
      goto LABEL_11;
    }
    if ( (unsigned int)(v3 - 34) > 0xD || (v8 = 0x8C0C00000000LL, !_bittest64(&v8, v3)) || (dword & 0xE000) != 0 )
    {
LABEL_18:
      if ( !a2 )
        goto LABEL_11;
      v9 = 0x80F8F8F00000000LL;
      if ( _bittest64(&v9, v3) )
        return 1;
      goto LABEL_28;
    }
LABEL_7:
    if ( !a2 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (get_flags_ex() & 0x10000) != 0 && v5 > 3 && (unsigned int)sub_9480(v5 - 4, 4) == 1 )
        goto LABEL_11;
    }
    return 1;
  }
  if ( (_DWORD)v3 == 56 )
    goto LABEL_7;
  if ( (_DWORD)v3 != 58 )
    goto LABEL_18;
  v4 = (unsigned __int16)dword >> 13;
  if ( v4 > 2 )
  {
    if ( v4 == 6 )
      goto LABEL_7;
  }
  else if ( (dword & 0x3E00000) == 0 )
  {
    goto LABEL_7;
  }
  if ( a2 )
  {
LABEL_28:
    if ( sub_9070(dword) )
      return 1;
  }
LABEL_11:
  if ( (get_flags_ex() & 0x10000) == 0 )
    return 0;
  v6 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( v6 > 3 )
    return sub_95F0(v6 - 4, a2);
  return result;
}

