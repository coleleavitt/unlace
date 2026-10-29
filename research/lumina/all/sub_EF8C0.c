void __fastcall sub_EF8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // r9d
  int v11; // edi
  unsigned int v12; // edx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // r8

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v7 = sub_EF2D0((_QWORD *)(a1 + 8), v6, 0, a4, a5, a6);
  else
    v7 = *(_QWORD **)(v6 + 8);
  if ( v7 )
  {
    v8 = v7[3];
    v9 = v7[1];
    if ( v8 <= 1 )
    {
LABEL_12:
      v7[3] = 1;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = 1;
      v13 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *(_BYTE *)(v9 + v13);
          v15 = v12 + 1;
          if ( v14 == 44 )
            break;
          if ( v14 == 34 )
          {
            v11 ^= 1u;
            ++v12;
          }
          else
          {
            v12 += 2;
            if ( v14 != 92 )
            {
              if ( v11 )
              {
                v12 = v15;
              }
              else
              {
                v16 = v14 & 0xDF;
                if ( v16 == 91 )
                {
                  ++v10;
                  v12 = v15;
                }
                else
                {
                  v12 = v15;
                  if ( v16 == 93 )
                    --v10;
                }
              }
            }
          }
          v13 = v12;
          if ( v12 >= v8 )
            goto LABEL_12;
        }
        if ( !(v11 | v10) )
          break;
        ++v12;
        v13 = (unsigned int)v15;
        v11 = v11 != 0;
        if ( (unsigned int)v15 >= v8 )
          goto LABEL_12;
      }
      v17 = v8 - v13;
      v7[3] = v17;
      memmove((void *)(v9 + 1), (const void *)(v9 + v15), v17 - 1);
      *(_BYTE *)(v9 + v7[3]) = 0;
    }
  }
}
