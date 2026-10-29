unsigned __int64 __fastcall sub_262430(int *a1, __int64 *a2, char a3, double a4)
{
  unsigned __int64 v4; // rax
  int v6; // ebp
  unsigned __int64 result; // rax
  const char *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r13
  size_t v18; // rax
  size_t v19; // r14
  size_t v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v4 = a1[2];
  if ( v4 >= *(_QWORD *)(*(_QWORD *)a1 + 440LL) )
  {
    if ( !under_debugger )
      sub_383060(0xC3CBu, a4);
    BUG();
  }
  LOBYTE(v6) = 16;
  result = *(_QWORD *)(*(_QWORD *)a1 + 432LL) + 104 * v4;
  if ( (*(_BYTE *)(result + 25) & 4) != 0 )
  {
    if ( !*(_QWORD *)(result + 40) )
      return result;
LABEL_4:
    v8 = *(const char **)(result + 32);
    if ( !*v8 )
      return result;
    v9 = a2[1];
    if ( v9 )
    {
      v12 = v9 + 1;
      v11 = a2[1];
      v10 = *a2;
      --v9;
      if ( a2[2] >= v12 )
        goto LABEL_7;
    }
    else
    {
      v10 = *a2;
      v11 = 1;
      v12 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_7;
    }
    v31 = qvector_reserve((__int64)a2, v10, v12, 1);
    *a2 = v31;
    v10 = v31;
LABEL_7:
    a2[1] = v12;
    *(_BYTE *)(v10 + v9) = 1;
    *(_BYTE *)(*a2 + v11) = 0;
    v13 = a2[1];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = a2[1];
      v16 = *a2;
      --v13;
      if ( a2[2] >= v14 )
        goto LABEL_9;
    }
    else
    {
      v16 = *a2;
      v15 = 1;
      v14 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_9;
    }
    v32 = qvector_reserve((__int64)a2, v16, v14, 1);
    *a2 = v32;
    v16 = v32;
LABEL_9:
    a2[1] = v14;
    *(_BYTE *)(v16 + v13) = v6;
    *(_BYTE *)(*a2 + v15) = 0;
    if ( v8 )
    {
      v17 = a2[1];
      v18 = strlen(v8);
      v19 = v18;
      v20 = v18;
      if ( v17 )
      {
        --v17;
        v20 = v18 + v17;
      }
      v21 = *a2;
      v22 = v20 + 1;
      if ( a2[2] < v20 + 1 )
      {
        v35 = qvector_reserve((__int64)a2, v21, v22, 1);
        v22 = v20 + 1;
        *a2 = v35;
        v21 = v35;
      }
      a2[1] = v22;
      *(_BYTE *)(v21 + v20) = 0;
      memmove((void *)(v17 + *a2), v8, v19);
    }
    v23 = a2[1];
    if ( v23 )
    {
      v24 = v23 + 1;
      v25 = a2[1];
      v26 = *a2;
      --v23;
      if ( a2[2] >= v24 )
        goto LABEL_17;
    }
    else
    {
      v26 = *a2;
      v25 = 1;
      v24 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_17;
    }
    v34 = qvector_reserve((__int64)a2, v26, v24, 1);
    *a2 = v34;
    v26 = v34;
LABEL_17:
    a2[1] = v24;
    *(_BYTE *)(v26 + v23) = 2;
    *(_BYTE *)(*a2 + v25) = 0;
    v27 = a2[1];
    if ( v27 )
    {
      v28 = v27 + 1;
      v29 = a2[1];
      v30 = *a2;
      --v27;
      if ( a2[2] >= v28 )
      {
LABEL_19:
        a2[1] = v28;
        *(_BYTE *)(v30 + v27) = v6;
        result = *a2;
        *(_BYTE *)(*a2 + v29) = 0;
        return result;
      }
    }
    else
    {
      v30 = *a2;
      v29 = 1;
      v28 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_19;
    }
    v33 = qvector_reserve((__int64)a2, v30, v28, 1);
    *a2 = v33;
    v30 = v33;
    goto LABEL_19;
  }
  v6 = a3 == 0 ? 24 : 13;
  if ( *(_QWORD *)(result + 40) )
    goto LABEL_4;
  return result;
}

