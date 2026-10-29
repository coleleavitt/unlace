__int64 *__fastcall sub_E14E0(__int64 a1, __int64 *a2, int *a3, _DWORD *a4)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // rdx
  __int64 *result; // rax
  __int64 *v9; // rbx

  v5 = *a3;
  *a4 = v5;
  if ( (v5 & (v5 - 1)) != 0 )
  {
    result = a2;
LABEL_5:
    v9 = &result[4 * v5];
    *(_OWORD *)v9 = 0;
    *((_OWORD *)v9 + 1) = 0;
    ++*a3;
    return result;
  }
  v7 = v5 << 6;
  if ( !v5 )
    v7 = 32;
  result = sub_DFAD0(a1, a2, v7);
  if ( result )
    goto LABEL_5;
  *a4 = -1;
  return a2;
}
