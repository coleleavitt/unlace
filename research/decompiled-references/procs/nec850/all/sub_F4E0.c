__int64 __fastcall sub_F4E0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v1 <= 0x43u )
  {
    if ( (unsigned __int16)v1 > 5u )
    {
      LODWORD(v2) = 1;
      v3 = 0x3FFFC16000400001LL;
      if ( !_bittest64(&v3, (unsigned int)(v1 - 6)) )
      {
        if ( (_WORD)v1 == 45 )
        {
          if ( *(_BYTE *)(a1 + 41) != 1 )
          {
            v2 = *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26);
            LOBYTE(v2) = *(_QWORD *)(a1 + 56) + 16LL * *(_QWORD *)a1 != v2;
          }
          return (unsigned int)v2;
        }
        return 0;
      }
      return (unsigned int)v2;
    }
    return 0;
  }
  if ( (unsigned __int16)v1 > 0x78u )
  {
    v2 = 13107201;
    LOWORD(v1) = v1 - 206;
    LOBYTE(v2) = _bittest64(&v2, v1);
    if ( (unsigned __int16)v1 <= 0x17u )
      return (unsigned int)v2;
    return 0;
  }
  v5 = 0x11F00000007C1LL;
  v6 = (unsigned int)(v1 - 72);
  LOBYTE(v6) = _bittest64(&v5, v6);
  if ( (unsigned __int16)v1 <= 0x47u )
    LODWORD(v6) = 0;
  return (unsigned int)v6;
}
