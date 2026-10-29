__int64 __fastcall sub_372D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rbp
  char v6; // al

  if ( (*(_BYTE *)a1 & 0xFB) != 1 )
  {
    if ( *(_BYTE *)a1 != 4 )
      return 0;
    while ( 1 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)v2 == 5 )
      {
        v6 = *(_BYTE *)(v2 + 32);
        a1 = v2 + 32;
        if ( (v6 & 0xFB) == 1 )
          return 1;
      }
      else
      {
        if ( *(_DWORD *)v2 != 20 )
          return 0;
        v3 = *(_BYTE *)(v2 + 32);
        v4 = v2 + 32;
        if ( (v3 & 0xFB) != 1 )
        {
          while ( v3 == 4 )
          {
            v5 = *(_QWORD *)(v4 + 8);
            if ( *(_DWORD *)v5 != 5 )
            {
              if ( *(_DWORD *)v5 != 20 )
                return 0;
              result = sub_372D0(v5 + 32);
              if ( !(_BYTE)result )
                return result;
              result = sub_372D0(v5 + 48);
              if ( !(_BYTE)result )
                return result;
              goto LABEL_14;
            }
            v3 = *(_BYTE *)(v5 + 32);
            v4 = v5 + 32;
            if ( (v3 & 0xFB) == 1 )
              goto LABEL_14;
          }
          return 0;
        }
LABEL_14:
        v6 = *(_BYTE *)(v2 + 48);
        a1 = v2 + 48;
        if ( (v6 & 0xFB) == 1 )
          return 1;
      }
      if ( v6 != 4 )
        return 0;
    }
  }
  return 1;
}

