__int64 *__fastcall sub_E0FE0(__int64 *a1, int **a2, __int16 *a3, __int64 a4)
{
  int v5; // eax
  int *v6; // rbx
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *result; // rax
  __int16 v11; // si
  __int64 v13; // [rsp+8h] [rbp-20h]

  v5 = (unsigned __int16)*a3;
  v6 = *a2;
  if ( !(_WORD)v5 )
  {
    if ( v6 )
    {
      v7 = *v6;
      goto LABEL_9;
    }
LABEL_11:
    v11 = 1;
    goto LABEL_10;
  }
  if ( !v6 )
    goto LABEL_11;
  v7 = *v6;
  if ( *v6 < v5 )
  {
LABEL_9:
    v11 = v7 + 1;
LABEL_10:
    *a3 = v11;
    result = sub_E0F20(a1, v6, a4);
    *a2 = (int *)result;
    return result;
  }
  v8 = v5 - 1;
  v9 = *(_QWORD *)&v6[6 * v8 + 2];
  if ( v9 )
  {
    v13 = a4;
    sub_D7720(*a1, v9);
    a4 = v13;
    v8 = (unsigned __int16)*a3 - 1;
  }
  result = (__int64 *)(3 * v8);
  *(_QWORD *)&v6[2 * (_QWORD)result + 2] = a4;
  return result;
}
