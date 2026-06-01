__int64 __fastcall sub_84E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v6; // rdx

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v3 > 0x98u )
    return 0;
  if ( (unsigned __int16)v3 > 0x5Au )
  {
    v6 = 0x27C0F800106FC00BLL;
    LOBYTE(v6) = _bittest64(&v6, (unsigned int)(v3 - 91));
    return (unsigned int)v6;
  }
  else
  {
    LOBYTE(a3) = (_WORD)v3 != 0;
    if ( (unsigned __int16)v3 > 4u )
    {
      a3 = 0x14000000BFC1FLL;
      v4 = (unsigned int)(v3 - 41);
      LOBYTE(a3) = _bittest64(&a3, v4);
      if ( (unsigned __int16)v4 >= 0x31u )
        LODWORD(a3) = 0;
    }
    return (unsigned int)a3;
  }
}

