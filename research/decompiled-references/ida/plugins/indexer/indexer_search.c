__int64 *__fastcall sub_43AE50(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  bool v8; // cc
  char *v9; // r14
  char *v10; // rbx
  char *v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 *result; // rax
  __int64 i; // r15
  char *v17; // rsi
  __int64 v18; // rax
  char *v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a1[1];
  v7 = a4;
  v8 = a4 <= v6;
  v9 = (char *)*a1;
  v23[0] = a2;
  if ( !v8 )
    v7 = v6;
  v23[1] = a3;
  v19 = &v9[8 * v6];
  v10 = &v9[8 * v7];
  v22 = 8 * v7;
  if ( (__int64)(8 * v7) <= 8 )
  {
    v20 = (__int64)(8 * v7) >> 3;
    if ( v10 >= &v9[8 * v6] )
      goto LABEL_12;
LABEL_5:
    v11 = &v9[8 * v7];
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v9;
        v13 = *(_QWORD *)v11;
        if ( (unsigned __int8)sub_438390(v23, *(_QWORD *)v11, *(_QWORD *)v9) )
          break;
        v11 += 8;
        if ( v11 >= v19 )
          goto LABEL_9;
      }
      *(_QWORD *)v11 = v12;
      v11 += 8;
      sub_438600(v9, 0, v20, v13, v23);
    }
    while ( v11 < v19 );
LABEL_9:
    if ( v22 <= 8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v20 = v22 >> 3;
  for ( i = ((v22 >> 3) - 2) / 2; ; --i )
  {
    sub_438600(v9, i, v22 >> 3, *(_QWORD *)&v9[8 * i], v23);
    if ( !i )
      break;
  }
  if ( v10 < v19 )
    goto LABEL_5;
  do
  {
LABEL_10:
    v10 -= 8;
    v14 = *(_QWORD *)v10;
    *(_QWORD *)v10 = *(_QWORD *)v9;
    sub_438600(v9, 0, (v10 - v9) >> 3, v14, v23);
  }
  while ( v10 - v9 > 8 );
LABEL_11:
  v6 = a1[1];
LABEL_12:
  if ( v6 < v7 )
  {
    v17 = (char *)*a1;
    if ( a1[2] < v7 )
    {
      v18 = qvector_reserve(a1, v17, v7, 8);
      v6 = a1[1];
      *a1 = v18;
      v17 = (char *)v18;
    }
    memset(&v17[8 * v6], 0, 8 * (v7 - v6));
    a1[1] = v7;
    return a1;
  }
  else
  {
    result = (__int64 *)v7;
    if ( v7 != v6 )
      a1[1] = v7;
  }
  return result;
}
