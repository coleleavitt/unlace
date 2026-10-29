__int64 __fastcall sub_BF70(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int8 v6; // r14
  char v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  char v14; // dl
  char v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  _BYTE *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-50h]
  unsigned __int64 v27; // [rsp+0h] [rbp-50h]
  __int64 v28; // [rsp+0h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-48h]
  char v30; // [rsp+8h] [rbp-48h]
  __int64 v31; // [rsp+10h] [rbp-40h]

  result = a1[1];
  if ( (int)result > 0 )
  {
    v3 = 2LL * (unsigned int)(result - 1) + 2;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v11 = a2[1];
        v19 = (_BYTE *)(v4 + *a1);
        if ( *v19 )
          break;
        if ( v11 )
        {
          v20 = v11 + 1;
          v21 = v11 + 2;
          v22 = *a2;
          --v11;
          if ( a2[2] < v21 )
            goto LABEL_22;
        }
        else
        {
          v22 = *a2;
          v21 = 3;
          v20 = 2;
          if ( (unsigned __int64)a2[2] < 3 )
          {
LABEL_22:
            v28 = v20;
            v25 = qvector_reserve(a2, v22, v21, 1);
            v20 = v28;
            *a2 = v25;
            v22 = v25;
          }
        }
        a2[1] = v21;
        result = 11822;
        v4 += 2;
        *(_BYTE *)(v22 + v20) = 0;
        *(_WORD *)(*a2 + v11) = 11822;
        if ( v3 == v4 )
          return result;
      }
      v6 = v19[1];
      v7 = (v6 >> 4) + 55;
      if ( (unsigned __int8)(v6 >> 4) <= 9u )
        v7 = (v6 >> 4) + 48;
      if ( v11 )
      {
        v8 = v11 + 1;
        v9 = a2[1];
        v10 = *a2;
        --v11;
        if ( a2[2] >= v8 )
          goto LABEL_7;
      }
      else
      {
        v10 = *a2;
        v9 = 1;
        v8 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_7;
      }
      v31 = v9;
      v30 = v7;
      v27 = v8;
      v24 = qvector_reserve(a2, v10, v8, 1);
      v9 = v31;
      v7 = v30;
      *a2 = v24;
      v8 = v27;
      v10 = v24;
LABEL_7:
      a2[1] = v8;
      *(_BYTE *)(v10 + v11) = v7;
      *(_BYTE *)(*a2 + v9) = 0;
      v12 = a2[1];
      v13 = v6 & 0xF;
      v14 = (v6 & 0xF) + 48;
      v15 = (v6 & 0xF) + 55;
      if ( v13 <= 9u )
        v15 = v14;
      if ( v12 )
      {
        v16 = v12 + 1;
        v17 = a2[1];
        v18 = *a2;
        --v12;
        if ( a2[2] < v16 )
          goto LABEL_18;
      }
      else
      {
        v18 = *a2;
        v17 = 1;
        v16 = 2;
        if ( (unsigned __int64)a2[2] < 2 )
        {
LABEL_18:
          v29 = v17;
          v26 = v16;
          v23 = qvector_reserve(a2, v18, v16, 1);
          v17 = v29;
          v16 = v26;
          *a2 = v23;
          v18 = v23;
        }
      }
      a2[1] = v16;
      v4 += 2;
      *(_BYTE *)(v18 + v12) = v15;
      result = *a2;
      *(_BYTE *)(*a2 + v17) = 0;
    }
    while ( v3 != v4 );
  }
  return result;
}

