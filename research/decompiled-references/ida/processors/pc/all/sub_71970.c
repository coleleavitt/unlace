char __fastcall sub_71970(__int64 a1)
{
  __int16 v1; // dx
  char result; // al
  char v3; // dl
  int v4; // ecx
  char v5; // dl
  int v6; // r8d
  int v7; // r9d
  char v8; // di
  char v9; // dl
  __int16 v10; // ax
  __int16 v11; // dx

  v1 = *(_WORD *)(a1 + 24);
  result = 1;
  if ( v1 != 129 )
  {
    result = v1 == 214 || v1 == 122;
    if ( result )
    {
      result = 0;
      if ( *(_BYTE *)(a1 + 41) != 1 || *(_BYTE *)(a1 + 81) != 1 )
        return result;
      return *(_WORD *)(a1 + 86) == *(_WORD *)(a1 + 46);
    }
    if ( v1 == 92 && *(_BYTE *)(a1 + 41) == 1 )
    {
      v3 = *(_BYTE *)(a1 + 81);
      if ( v3 == 3 || v3 == 4 && !*(_QWORD *)(a1 + 96) )
      {
        v4 = *(_DWORD *)(a1 + 28);
        if ( *(_BYTE *)(a1 + 112) )
        {
          v5 = *(_BYTE *)(a1 + 113);
          v6 = *(unsigned __int16 *)(a1 + 46);
          v7 = v5 & 7;
          if ( (v4 & 0x10) != 0 )
          {
            v8 = *(_BYTE *)(a1 + 33);
            if ( (v8 & 1) != 0 )
            {
              if ( v6 != (v5 & 7 | 8) )
                return result;
            }
            else if ( v6 != v7 )
            {
              return result;
            }
            v9 = v5 >> 3;
            v10 = v9 & 7;
            v11 = v9 & 7 | 8;
            if ( (v8 & 2) != 0 )
              v10 = v11;
          }
          else
          {
            if ( v6 != v7 )
              return result;
            v10 = (v5 >> 3) & 7;
          }
          return v10 == 4;
        }
        if ( (v4 & 0x1000) == 0 )
          return result;
        return *(_WORD *)(a1 + 86) == *(_WORD *)(a1 + 46);
      }
    }
  }
  return result;
}
