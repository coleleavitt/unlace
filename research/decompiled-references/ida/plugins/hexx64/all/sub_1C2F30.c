__int64 __fastcall sub_1C2F30(__int64 a1, __int64 a2, int a3, int a4, int a5, double a6)
{
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  __int64 *v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  char v14; // r9
  unsigned int v15; // esi
  int v16; // edx
  unsigned int v17; // esi
  int v18; // r8d
  int v20; // edx
  int v21; // r8d
  int v22; // r8d

  v7 = a3 + a4;
  if ( a5 < v7 )
    return 0xFFFFFFFFLL;
  v8 = a3;
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 3 )
  {
    if ( v9 > 3 )
    {
      if ( v9 == 4 )
        goto LABEL_13;
    }
    else
    {
      if ( v9 == 1 )
        return 0xFFFFFFFFLL;
      if ( v9 == 2 )
      {
        v11 = *(__int64 **)(a1 + 8);
        a1 = *v11;
        v12 = *v11 + 24 * v11[1];
        if ( v12 != *v11 )
        {
          while ( 1 )
          {
            v13 = *(unsigned __int16 *)(a1 + 16);
            a5 = *(unsigned __int16 *)(a1 + 18);
            if ( *(_WORD *)(a1 + 18) )
            {
              if ( v8 >= v13 && *(unsigned __int16 *)(a1 + 18) + v13 - 1 >= v8 )
                break;
            }
            a1 += 24;
            if ( a1 == v12 )
              return 0xFFFFFFFFLL;
          }
          if ( (unsigned int)(*(_DWORD *)a1 - 3) <= 1 )
          {
            v8 -= *(unsigned __int16 *)(a1 + 16);
            v7 = a4 + v8;
            if ( a5 >= a4 + v8 )
            {
              if ( *(_DWORD *)a1 == 3 )
              {
                v14 = *(_BYTE *)(a2 + 145);
                v20 = *(_DWORD *)(a1 + 8);
LABEL_20:
                v21 = a5 - v7;
                if ( v14 )
                  v8 = v21;
                return (unsigned int)(v20 + v8);
              }
LABEL_13:
              v14 = *(_BYTE *)(a2 + 145);
              v15 = *(_DWORD *)(a1 + 8);
              v16 = a5 / 2;
              if ( a5 / 2 < v8 )
              {
                v17 = HIWORD(v15);
                if ( v14 )
                  v18 = v16 + a5 - a4 - v8;
                else
                  v18 = v8 - v16;
                return v17 + v18;
              }
              v20 = (unsigned __int16)v15;
              goto LABEL_20;
            }
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
    if ( !under_debugger )
      sub_383060(0xC852u, a6);
    BUG();
  }
  v22 = a5 - v7;
  if ( *(_BYTE *)(a2 + 145) )
    v8 = v22;
  return (unsigned int)(*(_DWORD *)(a1 + 8) + v8);
}

