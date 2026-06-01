__int64 __fastcall sub_127D0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 *v13; // rax
  unsigned int v14; // r8d
  int v16; // r10d
  int v17; // r10d

  v6 = *(unsigned __int16 *)(a2 + 24);
  LOBYTE(a4) = a3 == 27 && (((_WORD)v6 - 107) & 0xFFFD) == 0;
  if ( !(_BYTE)a4 )
  {
    v7 = a2 + 41;
    v8 = a2 + 121;
    v9 = v7;
    do
    {
      if ( *(_BYTE *)v9 == 3 && *(_BYTE *)(v9 + 32) == 1 )
      {
        v16 = *(unsigned __int16 *)(v9 + 5);
        if ( (unsigned int)(v16 - 3) <= 7 && (unsigned __int8)(*(_BYTE *)(v9 + 33) - 1) <= 1u && v16 == a3 )
          return 1;
      }
      v9 += 40;
    }
    while ( v9 != v8 );
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(v10 + 104);
    if ( v6 >= v11 && v6 < *(_DWORD *)(v10 + 108) )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * (v6 - v11) + 8);
      if ( v12 )
      {
        v13 = qword_1A0A0;
        do
        {
          v14 = *(_DWORD *)v13 & v12;
          if ( !v14 || *(_BYTE *)v7 != 1 )
            goto LABEL_11;
          v17 = *(unsigned __int16 *)(v7 + 5);
          if ( (_WORD)v17 == 2 )
          {
            if ( a3 == 2 || !a3 )
              return 1;
          }
          else
          {
            if ( (unsigned int)(v17 - 11) <= 7 )
            {
              v17 -= 8;
              if ( a3 == 2 )
                goto LABEL_11;
              if ( (unsigned int)(a3 - 11) > 7 )
              {
                if ( a3 == v17 )
                  return 1;
                goto LABEL_11;
              }
LABEL_30:
              if ( a3 - 8 == v17 )
                return 1;
              goto LABEL_11;
            }
            if ( a3 == 2 )
            {
              if ( !*(_WORD *)(v7 + 5) )
                return 1;
            }
            else
            {
              if ( (unsigned int)(a3 - 11) <= 7 )
                goto LABEL_30;
              if ( v17 == a3 )
                return 1;
              if ( (_WORD)v17 )
              {
                LOBYTE(v14) = a3 == 0 && (_WORD)v17 == 1;
                if ( (_BYTE)v14 )
                  return v14;
              }
              else if ( a3 == 1 )
              {
                return 1;
              }
            }
          }
LABEL_11:
          v7 += 40;
          v13 = (__int64 *)((char *)v13 + 4);
        }
        while ( v7 != v8 );
      }
    }
  }
  return a4;
}

