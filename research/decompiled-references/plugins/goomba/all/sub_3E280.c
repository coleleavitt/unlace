__int64 __fastcall sub_3E280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // r13
  __int64 v5; // r12
  __int64 *v6; // r15
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 *v11; // r13
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = a3;
  v16 = (a3 - 1) / 2;
  v17 = a3 & 1;
  if ( a2 >= v16 )
  {
    v6 = (__int64 *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_13;
    v5 = a2;
    goto LABEL_15;
  }
  for ( i = a2; ; i = v5 )
  {
    v5 = 2 * (i + 1);
    v6 = (__int64 *)(a1 + 16 * (i + 1));
    v7 = *(v6 - 1);
    v8 = sub_FE30(*v6, a2, a3);
    if ( v8 < (int)sub_FE30(v7, a2, v9) )
    {
      --v5;
      v6 = (__int64 *)(a1 + 8 * v5);
    }
    *(_QWORD *)(a1 + 8 * i) = *v6;
    if ( v5 >= v16 )
      break;
  }
  if ( !v17 )
  {
    a3 = v18 - 2;
    if ( (v18 - 2) / 2 == v5 )
    {
LABEL_15:
      a3 = 2 * v5 + 2;
      v5 = 2 * v5 + 1;
      *v6 = *(_QWORD *)(a1 + 8 * a3 - 8);
      v6 = (__int64 *)(a1 + 8 * v5);
    }
  }
  v10 = (v5 - 1) / 2;
  if ( v5 > a2 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)(a1 + 8 * v10);
      v6 = (__int64 *)(a1 + 8 * v5);
      v12 = sub_FE30(*v11, a2, a3);
      if ( v12 >= (int)sub_FE30(a4, a2, v13) )
        break;
      a3 = v10 - 1;
      v5 = v10;
      *v6 = *v11;
      if ( a2 >= v10 )
      {
        v6 = (__int64 *)(a1 + 8 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *v6 = a4;
  return a4;
}
