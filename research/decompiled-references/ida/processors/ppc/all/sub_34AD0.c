__int64 __fastcall sub_34AD0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v3 > 0x11Eu )
  {
    LOWORD(v3) = v3 - 1157;
    if ( (unsigned __int16)v3 > 0x1Bu || (v6 = 134219781, !_bittest64(&v6, v3)) )
    {
LABEL_6:
      if ( a3 )
        *a3 = 0;
      return *(_QWORD *)(a2 + 8);
    }
  }
  else if ( (unsigned __int16)v3 > 0xE3u )
  {
    v5 = 0x500000000000001LL;
    LOWORD(v3) = v3 - 228;
    if ( !_bittest64(&v5, v3) )
      goto LABEL_6;
  }
  else if ( (_WORD)v3 != 12 && (_WORD)v3 != 157 && (_WORD)v3 != 6 )
  {
    goto LABEL_6;
  }
  if ( a3 )
    *a3 = 1;
  return *(_QWORD *)(a2 + 8) << 16;
}

