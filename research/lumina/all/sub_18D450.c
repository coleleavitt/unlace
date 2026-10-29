bool __fastcall sub_18D450(__int64 *a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rax
  int v5; // r12d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // r11
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbp
  char v21; // r14
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  char v29; // [rsp+1Bh] [rbp-3Dh]
  int v30; // [rsp+1Ch] [rbp-3Ch]

  v27 = a2;
  result = a1 == nullptr || a2 == 0;
  if ( result )
    return 0;
  if ( a3 >= 0 )
  {
    v4 = ((((unsigned __int64)a3 * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64) & 0xFFFFFFFFFFFFFFFELL) + a3 / 3uLL;
    if ( a3 == v4 )
    {
      v30 = 0;
      if ( !a3 )
        return 1;
    }
    else
    {
      v30 = 3 - (a3 - v4);
    }
    v5 = 0;
    v6 = 0;
    v28 = a3 + a2;
    while ( 1 )
    {
      ++v27;
      v5 += 8;
      v6 = (v6 << 8) | *(unsigned __int8 *)(v27 - 1);
      if ( v5 > 6 )
        break;
LABEL_13:
      if ( v27 == v28 )
      {
        if ( v5 )
        {
          v20 = a1[1];
          v21 = aAbcdefghijklmn[(v6 << (6 - v5)) & 0x3F];
          if ( v20 )
          {
            v22 = v20 + 1;
            v23 = a1[1];
            --v20;
          }
          else
          {
            v23 = 1;
            v22 = 2;
          }
          v24 = *a1;
          if ( a1[2] < v22 )
          {
            v25 = sub_1987B0(a1, v24, v22, 1);
            *a1 = v25;
            v24 = v25;
          }
          a1[1] = v22;
          *(_BYTE *)(v24 + v20) = v21;
          *(_BYTE *)(*a1 + v23) = 0;
        }
        if ( v30 )
        {
          v14 = 0;
          while ( 1 )
          {
            v15 = a1[1];
            if ( v15 )
            {
              v16 = v15 + 1;
              v17 = a1[1];
              v18 = *a1;
              --v15;
              if ( a1[2] < v16 )
                goto LABEL_23;
            }
            else
            {
              v18 = *a1;
              v17 = 1;
              v16 = 2;
              if ( (unsigned __int64)a1[2] < 2 )
              {
LABEL_23:
                v19 = sub_1987B0(a1, v18, v16, 1);
                *a1 = v19;
                v18 = v19;
              }
            }
            a1[1] = v16;
            ++v14;
            *(_BYTE *)(v18 + v15) = 61;
            *(_BYTE *)(*a1 + v17) = 0;
            if ( v14 == v30 )
              return 1;
          }
        }
        return 1;
      }
    }
    while ( 1 )
    {
      v5 -= 6;
      v10 = a1[1];
      v11 = (v6 >> v5) & 0x3F;
      v12 = aAbcdefghijklmn[v11];
      if ( v10 )
      {
        v7 = v10 + 1;
        v8 = a1[1];
        v9 = *a1;
        --v10;
        if ( a1[2] < v7 )
          goto LABEL_12;
      }
      else
      {
        v9 = *a1;
        v8 = 1;
        v7 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_12:
          v29 = aAbcdefghijklmn[v11];
          v26 = v7;
          v13 = sub_1987B0(a1, v9, v7, 1);
          v12 = v29;
          v7 = v26;
          *a1 = v13;
          v9 = v13;
        }
      }
      a1[1] = v7;
      *(_BYTE *)(v9 + v10) = v12;
      *(_BYTE *)(*a1 + v8) = 0;
      if ( v5 <= 6 )
        goto LABEL_13;
    }
  }
  return result;
}
