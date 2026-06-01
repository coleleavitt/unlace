__int64 __fastcall sub_464A0(__int64 a1, __int64 a2, int **a3, double a4, double a5, double a6, __m128 a7)
{
  int *v7; // rbx
  __int64 v8; // r14
  char v10; // r15
  unsigned __int64 v11; // rax
  int v12; // r13d
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rsi
  int *v16; // rbx
  int *v17; // r13
  __int64 result; // rax
  unsigned __int8 v19; // [rsp+7h] [rbp-59h]
  __int64 v20; // [rsp+8h] [rbp-58h]
  __int128 v21; // [rsp+10h] [rbp-50h]

  v7 = *a3;
  v21 = 0;
  v20 = 0;
  v8 = (__int64)&(*a3)[(_QWORD)a3[1]];
  if ( *a3 == (int *)v8 )
    return 1;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v11 = *v7;
      v12 = *v7;
      if ( v11 < *(_QWORD *)(a2 + 88) && *(_BYTE *)(*(_QWORD *)(a2 + 80) + v11) )
        goto LABEL_4;
      v13 = *(_BYTE *)(*(_QWORD *)(a1 + 1216) + 48 * v11 + 40);
      if ( !v13 )
        break;
      v10 = v13;
LABEL_4:
      if ( (int *)v8 == ++v7 )
        goto LABEL_11;
    }
    v14 = v21;
    v15 = v20;
    if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
    {
      v20 = qvector_reserve();
      v15 = v20;
      v14 = v21;
    }
    ++v7;
    *(_DWORD *)(v15 + 4 * v14) = v12;
    *(_QWORD *)&v21 = v21 + 1;
  }
  while ( (int *)v8 != v7 );
LABEL_11:
  if ( v10 )
  {
    result = sub_46080(a1, a2, 0.0, a5, a6, a7);
    if ( !(_BYTE)result )
      goto LABEL_16;
  }
  v16 = (int *)v20;
  v17 = (int *)(v20 + 4 * v21);
  if ( v17 == (int *)v20 )
  {
    result = 1;
  }
  else
  {
    do
    {
      result = sub_461F0(a1, a2, *v16);
      if ( !(_BYTE)result )
        break;
      ++v16;
    }
    while ( v17 != v16 );
LABEL_16:
    v16 = (int *)v20;
  }
  if ( v16 )
  {
    v19 = result;
    qfree();
    return v19;
  }
  return result;
}

