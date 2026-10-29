__int64 __fastcall sub_10470(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // edx

  v3 = *(_BYTE *)(a2 + 1);
  v4 = 0;
  if ( v3 == *(_BYTE *)(a3 + 1) )
  {
    if ( v3 == 4 )
    {
      if ( *(_WORD *)(a2 + 6) == *(_WORD *)(a3 + 6) )
        LOBYTE(v4) = *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16);
    }
    else
    {
      v4 = 1;
      if ( v3 != 99 )
      {
        v4 = 0;
        if ( v3 == 1 )
        {
          v5 = *(unsigned __int16 *)(a2 + 6);
          v4 = *(unsigned __int16 *)(a3 + 6);
          if ( v5 == 2 )
          {
            v5 = 0;
          }
          else if ( (unsigned int)(v5 - 11) < 8 )
          {
            v5 -= 8;
          }
          v6 = 0;
          if ( v4 != 2 )
          {
            v6 = v4 - 8;
            if ( v4 - 11 >= 8 )
              v6 = v4;
          }
          LOBYTE(v4) = v6 == v5;
        }
      }
    }
  }
  return v4;
}

