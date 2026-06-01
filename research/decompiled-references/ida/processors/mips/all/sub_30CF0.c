_QWORD *__fastcall sub_30CF0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  *(_WORD *)(a1[47] + 4LL) = *(_QWORD *)(a2 + 8);
  result = (_QWORD *)(a1[108] + 40LL * a3);
  *(_QWORD *)(a1[47] + 24LL) = result[3];
  v4 = (_QWORD *)a1[105];
  v5 = a1[106];
  v6 = result[2];
  v7 = &v4[v5];
  if ( v4 == v7 )
    goto LABEL_6;
  result = (_QWORD *)a1[105];
  while ( v6 != *result )
  {
    if ( v7 == ++result )
      goto LABEL_6;
  }
  if ( result == v7 )
  {
LABEL_6:
    v8 = v5 + 1;
    if ( a1[107] < v8 )
    {
      result = (_QWORD *)qvector_reserve(a1 + 105, v4, v8, 8);
      v9 = a1[106];
      a1[105] = result;
      v7 = &result[v9];
    }
    *v7 = v6;
    ++a1[106];
  }
  return result;
}

