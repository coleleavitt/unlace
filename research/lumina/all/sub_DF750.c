__int64 __fastcall sub_DF750(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  char *v8; // r14
  char *v9; // rsi
  int v10; // edx
  unsigned __int64 v11; // rdi
  __int16 v12; // dx
  int i; // edx
  __int16 v14; // dx
  __int64 **v15; // r13
  char v16; // r15
  __int64 *v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v5 = a2;
  v6 = *(int *)(a1 + 24);
  result = *(unsigned int *)(a1 + 20);
  v8 = *(char **)(a1 + 32);
  if ( (int)result < (int)v6 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 20) = result + 1;
    v9 = &v8[56 * (int)result];
    if ( (a3 & 2) != 0 )
    {
      if ( v5 )
        goto LABEL_4;
    }
    else
    {
      *(_DWORD *)(a1 + 28) = result + 1;
      if ( v5 )
      {
LABEL_4:
        if ( (*(_BYTE *)(v5 + 6) & 4) == 0 )
        {
          *((_WORD *)v9 + 8) = 1;
          goto LABEL_7;
        }
        v11 = *(int *)(v5 + 44);
        if ( v11 > 7 )
        {
          _BitScanReverse64(&v19, v11);
          v11 >>= 60 - ((unsigned __int8)v19 ^ 0x3Fu);
          v14 = 10 * (60 - (v19 ^ 0x3F)) + 30;
        }
        else
        {
          v12 = -270;
          if ( v11 <= 1 )
            goto LABEL_25;
          for ( i = 40; ; i -= 10 )
          {
            v11 *= 2LL;
            if ( v11 > 7 )
              break;
          }
          v14 = i - 20;
        }
        v12 = v14 + word_1BACD0[v11 & 7] - 270;
LABEL_25:
        *((_WORD *)v9 + 8) = v12;
LABEL_7:
        while ( 1 )
        {
          v10 = *(_DWORD *)(v5 + 4);
          if ( (v10 & 0x41000) == 0 )
            goto LABEL_11;
          if ( (v10 & 0x40000) != 0 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL);
            if ( !v5 )
              goto LABEL_10;
          }
          else
          {
            v5 = *(_QWORD *)(v5 + 16);
            if ( !v5 )
            {
LABEL_10:
              v5 = 0;
              goto LABEL_11;
            }
          }
        }
      }
    }
    v5 = 0;
    *((_WORD *)v9 + 8) = 1;
LABEL_11:
    *(_QWORD *)v9 = v5;
    *((_WORD *)v9 + 9) = a3;
    *((_QWORD *)v9 + 1) = a1;
    *((_DWORD *)v9 + 13) = 0;
    *(_OWORD *)(v9 + 20) = 0;
    *(_OWORD *)(v9 + 36) = 0;
    return result;
  }
  v15 = *(__int64 ***)a1;
  v16 = 112 * v6;
  v20 = ***(_QWORD ***)a1;
  v17 = sub_DBF10(v20, 112 * v6 + 16);
  if ( v17 )
  {
    v18 = v15[13];
    *((_BYTE *)v17 + 8) = v16;
    *v17 = (__int64)v18;
    v15[13] = v17;
    *(_QWORD *)(a1 + 32) = v17 + 2;
    if ( v17 != (__int64 *)-16LL )
    {
      memcpy(v17 + 2, v8, 56LL * *(int *)(a1 + 20));
      *(_DWORD *)(a1 + 24) *= 2;
      v8 = *(char **)(a1 + 32);
      result = *(unsigned int *)(a1 + 20);
      goto LABEL_2;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  if ( a2 && (a3 & 1) != 0 )
    sub_D7720(v20, a2);
  *(_QWORD *)(a1 + 32) = v8;
  return 0;
}
