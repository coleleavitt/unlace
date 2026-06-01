__int64 *__fastcall sub_310A00(__int64 *a1, __int64 *a2, int a3, char a4)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 *result; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rsi

  v6 = a1[1];
  v7 = *a1;
  if ( v6 == 1 )
    return sub_F6610(a2);
  if ( a3 != 8 )
  {
    v9 = 1LL << (8 * (unsigned __int8)a3 - 1);
    v10 = 1LL << (8 * (unsigned __int8)a3);
    v11 = v6 + v7;
    if ( v9 != v7 )
    {
      if ( v10 != v11 )
      {
        v12 = v11 - 1;
        v13 = v9 - 1;
        goto LABEL_6;
      }
      return sub_F6610(a2);
    }
    if ( v10 != v11 )
      return sub_F6610(a2);
LABEL_14:
    v14 = a2[1];
    if ( v14 )
    {
      v16 = v14 + 1;
      v15 = v14 + 2;
      --v14;
    }
    else
    {
      v15 = 3;
      v16 = 2;
    }
    v17 = *a2;
    if ( a2[2] < v15 )
    {
      v17 = qvector_reserve();
      *a2 = v17;
    }
    a2[1] = v15;
    *(_BYTE *)(v17 + v16) = 0;
    *(_WORD *)(*a2 + v14) = 12348;
    return (_QWORD *)(&stru_3030 + 12);
  }
  if ( v7 == 0x8000000000000000LL )
  {
    if ( v6 != 0x8000000000000000LL )
      return sub_F6610(a2);
    goto LABEL_14;
  }
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v12 = v6 + v7 - 1;
  if ( !(v6 + v7) )
    return sub_F6610(a2);
LABEL_6:
  if ( v13 == v12 || !v7 || !a4 )
    return sub_F6610(a2);
  v19 = a2[1];
  if ( v19 )
  {
    v20 = v19 + 1;
    v21 = a2[1];
    --v19;
  }
  else
  {
    v20 = 2;
    v21 = 1;
  }
  v22 = *a2;
  if ( a2[2] < v20 )
  {
    v22 = qvector_reserve();
    *a2 = v22;
  }
  a2[1] = v20;
  *(_BYTE *)(v22 + v21) = 0;
  *(_BYTE *)(*a2 + v19) = 40;
  result = sub_F6610(a2);
  v23 = a2[1];
  if ( v23 )
  {
    v24 = v23 + 1;
    v25 = a2[1];
    --v23;
  }
  else
  {
    v24 = 2;
    v25 = 1;
  }
  v26 = *a2;
  if ( a2[2] < v24 )
  {
    result = (__int64 *)qvector_reserve();
    v26 = (__int64)result;
    *a2 = (__int64)result;
  }
  a2[1] = v24;
  *(_BYTE *)(v26 + v25) = 0;
  *(_BYTE *)(*a2 + v23) = 41;
  return result;
}

