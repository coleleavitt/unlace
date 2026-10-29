__int64 __fastcall sub_C2860(char *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  int v15; // r8d

  v2 = *a1;
  if ( (v2 & 0x80u) != 0LL )
  {
    v4 = a1[1];
    if ( a1[1] >= 0 )
    {
      *a2 = v4 | ((unsigned __int8)v2 << 7) & 0x3F80u;
      return 2;
    }
    else
    {
      v5 = (unsigned __int8)a1[2] | ((unsigned __int8)v2 << 14);
      v6 = v5 & 0x1FC07F;
      if ( (v5 & 0x80u) == 0 )
      {
        *a2 = v6 | ((v4 & 0x7F) << 7);
        return 3;
      }
      else
      {
        v7 = (unsigned __int8)a1[3] | ((unsigned __int8)v4 << 14);
        v8 = v7 & 0x1FC07F;
        if ( (v7 & 0x80) != 0 )
        {
          v9 = (unsigned __int8)a1[4];
          v10 = (v6 << 14) | v9;
          if ( (v9 & 0x80u) == 0 )
          {
            *a2 = ((unsigned __int64)(v6 >> 18) << 32) | (v8 << 7) | (unsigned int)v10;
            return 5;
          }
          else
          {
            v11 = v8 | (v6 << 7);
            v12 = (unsigned __int8)a1[5] | (v8 << 14);
            if ( (v12 & 0x80u) == 0 )
            {
              *a2 = ((unsigned __int64)(v11 >> 18) << 32) | (v10 << 7) & 0xFE03F80 | (unsigned int)v12;
              return 6;
            }
            else
            {
              v13 = (unsigned __int8)a1[6] | (v10 << 14);
              if ( (v13 & 0x80u) == 0 )
              {
                *a2 = ((unsigned __int64)(v11 >> 11) << 32) | v13 & 0xF01FC07F | (v12 << 7) & 0xFE03F80;
                return 7;
              }
              else
              {
                v14 = v13 & 0x1FC07F;
                v15 = (unsigned __int8)a1[7] | (v12 << 14);
                if ( (v15 & 0x80u) != 0 )
                {
                  *a2 = ((unsigned __int64)(((unsigned __int8)(v9 & 0x7F) >> 3) | (16 * v11)) << 32)
                      | (unsigned __int8)a1[8]
                      | (v15 << 8) & 0x1FC07F00
                      | (unsigned int)(v14 << 15);
                  return 9;
                }
                else
                {
                  *a2 = ((unsigned __int64)(v11 >> 4) << 32) | v15 & 0xF01FC07F | (v14 << 7);
                  return 8;
                }
              }
            }
          }
        }
        else
        {
          *a2 = (v6 << 7) | v8;
          return 4;
        }
      }
    }
  }
  else
  {
    *a2 = v2;
    return 1;
  }
}
