_QWORD *__fastcall sub_3DD40(__int64 a1, unsigned __int64 *a2, __int64 a3, char *a4)
{
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // r10
  _QWORD *result; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi

  v6 = *a2;
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 184LL) + 64LL);
  if ( !v8 )
    return (_QWORD *)sub_3C700(v7, v6, a3, *a4);
  v9 = (_QWORD *)(v8 + 16);
  result = *(_QWORD **)(v8 + 24);
  if ( !result )
    return (_QWORD *)sub_3C700(v7, v6, a3, *a4);
  v11 = v9;
  do
  {
    while ( 1 )
    {
      v12 = result[2];
      v13 = result[3];
      if ( result[4] >= v6 )
        break;
      result = (_QWORD *)result[3];
      if ( !v13 )
        goto LABEL_7;
    }
    v11 = result;
    result = (_QWORD *)result[2];
  }
  while ( v12 );
LABEL_7:
  if ( v9 == v11 || v6 < v11[4] )
    return (_QWORD *)sub_3C700(v7, v6, a3, *a4);
  return result;
}

