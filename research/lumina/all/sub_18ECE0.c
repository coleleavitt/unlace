__int64 __fastcall sub_18ECE0(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rcx
  unsigned int v3; // edi
  int v4; // edx
  unsigned __int8 *v5; // rcx
  int v7; // esi
  __int16 v8; // r8
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // si
  __int16 v11; // dx
  __int16 v12; // si
  unsigned __int8 v13; // r8
  unsigned __int16 v14; // dx

  v1 = *a1;
  v3 = 0;
  v4 = *v1;
  if ( (_BYTE)v4 )
  {
    if ( (v4 & 0x80u) == 0 )
    {
      v5 = v1 + 1;
      v3 = (char)v4;
LABEL_4:
      *a1 = v5;
      return v3;
    }
    if ( (v4 & 0xE0) == 0xC0 )
    {
      v10 = v1[1];
      v3 = -1;
      if ( (unsigned __int8)(v10 + 0x80) <= 0x3Fu )
      {
        v11 = v10 & 0x3F | ((_WORD)v4 << 6) & 0x7C0;
        if ( v11 > 127 )
        {
          v5 = v1 + 2;
          v3 = v11;
          goto LABEL_4;
        }
      }
    }
    else if ( (v4 & 0xF0) == 0xE0 )
    {
      v12 = v1[1];
      v3 = -1;
      if ( (unsigned __int8)(v12 + 0x80) <= 0x3Fu )
      {
        v13 = v1[2];
        if ( (unsigned __int8)(v13 + 0x80) <= 0x3Fu )
        {
          v5 = v1 + 3;
          v14 = (v12 << 6) & 0xFC0 | v13 & 0x3F | ((_WORD)v4 << 12);
          v3 = v14;
          if ( v14 > 0x7FFu )
            goto LABEL_4;
          return (unsigned int)-1;
        }
      }
    }
    else
    {
      v3 = -1;
      if ( (v4 & 0xF8) == 0xF0 )
      {
        v7 = v1[1];
        if ( (unsigned __int8)(v7 + 0x80) <= 0x3Fu )
        {
          v8 = v1[2];
          if ( (unsigned __int8)(v8 + 0x80) <= 0x3Fu )
          {
            v9 = v1[3];
            if ( (unsigned __int8)(v9 + 0x80) <= 0x3Fu )
            {
              v3 = (v8 << 6) & 0xFC0 | v9 & 0x3F | (v7 << 12) & 0x3F000 | (v4 << 18) & 0x1C0000;
              if ( v3 - 0x10000 <= (unsigned int)&loc_FFFFF )
              {
                v5 = v1 + 4;
                goto LABEL_4;
              }
              return (unsigned int)-1;
            }
          }
        }
      }
    }
  }
  return v3;
}
