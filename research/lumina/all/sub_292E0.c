__int64 __fastcall sub_292E0(__int64 *a1, char a2, const char *a3, const char *a4)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 v14; // r14
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r8
  __int64 v18; // rsi
  size_t v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rsi
  size_t v24; // rax
  __int64 v25; // r13
  size_t v26; // r14
  size_t v27; // r15
  __int64 v28; // rsi
  size_t v29; // rdx
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h]
  size_t v38; // [rsp+0h] [rbp-48h]
  size_t v39; // [rsp+8h] [rbp-40h]

  v7 = a1[4];
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = a1[4];
    v10 = a1[3];
    --v7;
    if ( a1[5] >= v8 )
      goto LABEL_3;
  }
  else
  {
    v10 = a1[3];
    v9 = 1;
    v8 = 2;
    if ( (unsigned __int64)a1[5] >= 2 )
      goto LABEL_3;
  }
  v37 = v9;
  v33 = sub_1987B0(a1 + 3, v10, v8, 1);
  v9 = v37;
  a1[3] = v33;
  v10 = v33;
LABEL_3:
  a1[4] = v8;
  *(_BYTE *)(v10 + v7) = a2;
  *(_BYTE *)(a1[3] + v9) = 0;
  v11 = a1[1];
  v12 = *a1;
  if ( a1[2] < (unsigned __int64)(v11 + 1) )
  {
    v34 = sub_1987B0(a1, v12, v11 + 1, 24);
    v11 = a1[1];
    *a1 = v34;
    v12 = v34;
  }
  v13 = (__int64 *)(v12 + 24 * v11);
  *v13 = 0;
  *(_OWORD *)(v13 + 1) = 0;
  ++a1[1];
  if ( a3 )
  {
    v14 = v13[1];
    v15 = strlen(a3);
    v16 = v15;
    v17 = v15;
    if ( v14 )
    {
      --v14;
      v17 = v15 + v14;
    }
    v18 = *v13;
    v19 = v17 + 1;
    if ( v13[2] < v17 + 1 )
    {
      v39 = v17;
      v38 = v17 + 1;
      v35 = sub_1987B0(v13, v18, v19, 1);
      v17 = v39;
      v19 = v38;
      *v13 = v35;
      v18 = v35;
    }
    v13[1] = v19;
    *(_BYTE *)(v18 + v17) = 0;
    memmove((void *)(v14 + *v13), a3, v16);
  }
  v20 = v13[1];
  if ( v20 )
  {
    v21 = v20 + 1;
    v22 = v13[1];
    v23 = *v13;
    --v20;
    if ( v13[2] >= v21 )
      goto LABEL_13;
  }
  else
  {
    v23 = *v13;
    v22 = 1;
    v21 = 2;
    if ( (unsigned __int64)v13[2] >= 2 )
      goto LABEL_13;
  }
  v32 = sub_1987B0(v13, v23, v21, 1);
  *v13 = v32;
  v23 = v32;
LABEL_13:
  v13[1] = v21;
  *(_BYTE *)(v23 + v20) = 46;
  *(_BYTE *)(*v13 + v22) = 0;
  if ( a4 )
  {
    v24 = strlen(a4);
    v25 = v13[1];
    v26 = v24;
    v27 = v24;
    if ( v25 )
    {
      --v25;
      v27 = v24 + v25;
    }
    v28 = *v13;
    v29 = v27 + 1;
    if ( v13[2] < v27 + 1 )
    {
      v36 = sub_1987B0(v13, v28, v29, 1);
      v29 = v27 + 1;
      *v13 = v36;
      v28 = v36;
    }
    v13[1] = v29;
    *(_BYTE *)(v28 + v27) = 0;
    memmove((void *)(v25 + *v13), a4, v26);
  }
  v30 = a1[4];
  result = (unsigned int)(v30 - 2);
  if ( !v30 )
    return 0xFFFFFFFFLL;
  return result;
}
