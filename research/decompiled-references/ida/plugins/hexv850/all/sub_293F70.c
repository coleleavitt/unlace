_QWORD *__fastcall sub_293F70(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  result = *(_QWORD **)(*(_QWORD *)(a2 + 24) + 432LL);
  v3 = &result[13 * *(int *)(a2 + 32)];
  if ( *v3 != 3 || (int)v3[2] > 7 )
  {
    v4 = (_QWORD *)a1[6];
    v5 = a1[7];
    v6 = &v4[v5];
    if ( v4 == v6 )
      goto LABEL_9;
    result = (_QWORD *)a1[6];
    while ( v3 != (_DWORD *)*result )
    {
      if ( v6 == ++result )
        goto LABEL_9;
    }
    if ( v6 == result )
    {
LABEL_9:
      if ( a1[8] < (unsigned __int64)(v5 + 1) )
      {
        result = (_QWORD *)qvector_reserve();
        v7 = a1[7];
        a1[6] = result;
        v6 = &result[v7];
      }
      *v6 = v3;
      ++a1[7];
    }
  }
  return result;
}

