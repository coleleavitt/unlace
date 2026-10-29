_QWORD *__fastcall sub_58480(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  bool v7; // sf
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx

  v2 = *a2;
  v3 = a2[1];
  v4 = (_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8LL * (v2 >= 0) + 224) + (v2 & 0x7FFFFFFFFFFFFFFFLL);
  v6 = (*(_DWORD *)(v3 + 8LL * (v2 >= 0) + 224) + v2) | 0xFFFFFFFF80000000LL;
  v7 = v2 < 0;
  result = *(_QWORD **)(a1 + 40);
  if ( !v7 )
    v5 = v6;
  if ( !result )
    return nullptr;
  v9 = (_QWORD *)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v10 = result[2];
      v11 = result[3];
      if ( result[4] < v5 )
        break;
      v9 = result;
      result = (_QWORD *)result[2];
      if ( !v10 )
        goto LABEL_8;
    }
    result = (_QWORD *)result[3];
  }
  while ( v11 );
LABEL_8:
  if ( v9 != v4 && v5 >= v9[4] )
    return (_QWORD *)*((unsigned int *)v9 + 10);
  return result;
}

