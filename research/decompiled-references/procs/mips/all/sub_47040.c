__int64 __fastcall sub_47040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rdx

  v4 = *(unsigned __int16 *)(a4 + 24);
  if ( (_WORD)v4 == 144 )
    goto LABEL_14;
  if ( (unsigned __int16)v4 > 0x90u )
  {
    if ( (_WORD)v4 != 195 )
    {
      if ( (unsigned __int16)v4 <= 0xC3u )
      {
        LODWORD(v5) = 0;
        if ( (unsigned __int16)(v4 - 148) > 1u )
          return (unsigned int)v5;
        goto LABEL_14;
      }
      LODWORD(v5) = 0;
      if ( (_WORD)v4 != 473 )
        return (unsigned int)v5;
    }
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    goto LABEL_7;
  }
  if ( (unsigned __int16)v4 > 0x86u )
  {
    if ( (_WORD)v4 != 138 )
      goto LABEL_17;
LABEL_14:
    *(_QWORD *)(a2 + 8) = a4 + 80;
    *(_QWORD *)(a2 + 16) = a4 + 40;
    goto LABEL_7;
  }
  if ( (unsigned __int16)v4 <= 0x77u )
  {
LABEL_17:
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v5 = 30787;
  LOBYTE(v5) = _bittest64(&v5, (unsigned int)(v4 - 120));
  if ( (_BYTE)v5 )
  {
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    *(_BYTE *)(a2 + 24) = sub_46FF0(*(_WORD *)(a4 + 24));
LABEL_7:
    LODWORD(v5) = 1;
  }
  return (unsigned int)v5;
}
