__int64 __fastcall sub_37CA0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v4; // rdx
  unsigned __int64 v8; // r14
  unsigned int v9; // edx
  unsigned __int8 v10; // di
  char v11; // bl
  char v12; // dl
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rsi
  bool v16; // r9
  bool v17; // bl
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  char v28; // [rsp+Ah] [rbp-4Eh]
  bool v29; // [rsp+Ah] [rbp-4Eh]
  char v30; // [rsp+Bh] [rbp-4Dh]
  char v31; // [rsp+Ch] [rbp-4Ch]

  v4 = a3 & 1;
  if ( (_DWORD)v4 )
    return 0;
  v8 = v4;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( a4 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(a2 + v8) & 0xDF) == 0x58 )
          {
            v16 = (*(_BYTE *)(a2 + v8 + 1) & 0xDF) == 88;
            v17 = v16;
          }
          else
          {
            v17 = 0;
            v16 = 0;
          }
          v18 = a4[1];
          v19 = *a4;
          if ( a4[2] < (unsigned __int64)(v18 + 1) )
          {
            v29 = v16;
            v25 = qvector_reserve();
            v16 = v29;
            *a4 = v25;
            v19 = v25;
            v18 = a4[1];
          }
          *(_BYTE *)(v19 + v18) = v17;
          ++a4[1];
          if ( !v16 )
            break;
          v23 = a1[1];
          v24 = *a1;
          if ( a1[2] < (unsigned __int64)(v23 + 1) )
          {
            v26 = qvector_reserve();
            *a1 = v26;
            v24 = v26;
            v23 = a1[1];
          }
          *(_BYTE *)(v24 + v23) = 0;
          v8 += 2LL;
          ++a1[1];
          if ( v8 >= a3 )
            return 1;
        }
      }
      v20 = *(char *)(a2 + v8);
      v28 = *(_BYTE *)(a2 + v8);
      if ( v20 > 0x7F )
        return 0;
      if ( !isxdigit(v20) )
        return 0;
      v9 = *(char *)(a2 + v8 + 1);
      v30 = *(_BYTE *)(a2 + v8 + 1);
      if ( v9 > 0x7F )
        return 0;
      v31 = *(_BYTE *)(a2 + v8 + 1);
      if ( !isxdigit(v9) )
        return 0;
      v10 = v30 - 48;
      if ( (unsigned __int8)(v28 - 48) <= 9u )
        break;
      if ( (unsigned __int8)(v28 - 97) > 5u )
      {
        if ( (unsigned __int8)(v28 - 65) > 5u )
          goto LABEL_35;
        v11 = v20 - 55;
        if ( v10 <= 9u )
        {
LABEL_27:
          v12 = v31 - 48;
          goto LABEL_13;
        }
        goto LABEL_11;
      }
      v11 = v20 - 87;
      if ( v10 <= 9u )
        goto LABEL_27;
      if ( (unsigned __int8)(v30 - 97) <= 5u )
      {
LABEL_34:
        v12 = v31 - 87;
        goto LABEL_13;
      }
LABEL_12:
      v12 = v31 - 55;
      if ( (unsigned __int8)(v30 - 65) > 5u )
      {
LABEL_35:
        v13 = -1;
        goto LABEL_14;
      }
LABEL_13:
      v13 = v12 | (16 * v11);
LABEL_14:
      v14 = a1[1];
      v15 = *a1;
      if ( a1[2] < (unsigned __int64)(v14 + 1) )
      {
        v22 = qvector_reserve();
        *a1 = v22;
        v15 = v22;
        v14 = a1[1];
      }
      *(_BYTE *)(v15 + v14) = v13;
      v8 += 2LL;
      ++a1[1];
      if ( v8 >= a3 )
        return 1;
    }
    v11 = v20 - 48;
    if ( v10 <= 9u )
      goto LABEL_27;
LABEL_11:
    if ( (unsigned __int8)(v30 - 97) <= 5u )
      goto LABEL_34;
    goto LABEL_12;
  }
  return 1;
}

