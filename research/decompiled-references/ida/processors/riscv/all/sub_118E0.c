__int64 __fastcall sub_118E0(__int64 a1, __int64 a2, __int16 a3, unsigned __int16 a4, char a5, unsigned __int8 a6)
{
  unsigned __int8 v10; // dl
  __int16 v11; // si
  unsigned __int8 v12; // r10
  unsigned int v13; // edi
  unsigned __int8 v15; // bl
  int v16; // r15d
  unsigned __int16 v19; // [rsp+0h] [rbp-34h]

  v10 = (a3 < 0) + ((2 * a4) & 0x1E);
  v11 = ((unsigned __int16)a3 >> 7) & 0x1F;
  v12 = (a4 >> 4) & 0x1F;
  if ( (unsigned __int8)a5 > 5u )
  {
    v13 = 0;
    if ( (unsigned __int8)(a5 - 6) <= 1u )
    {
      v15 = v10;
      v16 = a6;
      v19 = a3;
      v13 = sub_10DC0(a1, a2, a3, a4, a5, a6, v11, v10, v12);
      if ( !v13 )
        return (unsigned int)sub_11550(a1, a2, v19, a4, a5, v16, v15);
    }
  }
  else if ( (unsigned __int8)a5 > 3u )
  {
    return (unsigned int)sub_10DC0(a1, a2, a3, a4, a5, a6, v11, v10, v12);
  }
  else if ( a5 )
  {
    return (unsigned int)sub_108A0(a1, a2, a3, a4, a5, a6, v11, v10, v12);
  }
  else
  {
    if ( !(_BYTE)v11 )
      JUMPOUT(0xB8B0);
    return 0;
  }
  return v13;
}

