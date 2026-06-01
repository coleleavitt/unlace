unsigned __int64 __fastcall sub_1A920(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 *v5; // rax
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  sub_110D0(nullptr, a1, nullptr, a2, 18);
  v3 = a1[1];
  v4 = (__int64 *)(*a1 + 8 * v3);
  if ( (__int64 *)*a1 == v4 )
    goto LABEL_29;
  v5 = (__int64 *)*a1;
  while ( *v5 != a2 )
  {
    if ( v4 == ++v5 )
      goto LABEL_29;
  }
  if ( v4 == v5 )
  {
LABEL_29:
    if ( a1[2] < (unsigned __int64)(v3 + 1) )
    {
      v21 = qvector_reserve(a1, *a1, v3 + 1, 8);
      v22 = a1[1];
      *a1 = v21;
      v4 = (__int64 *)(v21 + 8 * v22);
    }
    *v4 = a2;
    v3 = a1[1] + 1;
    a1[1] = v3;
  }
  v6 = 0;
  v7 = 0;
  if ( v3 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *a1;
        v23 = 0;
        v24 = 0;
        sub_110D0(nullptr, &v23, nullptr, *(_QWORD *)(v8 + 8 * v7), 2);
        v9 = v23;
        if ( (_QWORD)v24 )
          break;
        if ( v23 )
          qfree(v23);
LABEL_10:
        v7 = ++v6;
        if ( v6 >= (unsigned __int64)a1[1] )
          return v25 - __readfsqword(0x28u);
      }
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = a1[1];
        v13 = *(_QWORD *)(v9 + 8 * v11);
        v14 = (_QWORD *)(*a1 + 8 * v12);
        if ( (_QWORD *)*a1 == v14 )
          goto LABEL_26;
        v15 = (_QWORD *)*a1;
        while ( v13 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_22;
        }
        if ( v14 != v15 )
          goto LABEL_18;
LABEL_22:
        v17 = (_QWORD *)*a1;
        while ( v13 != *v17 )
        {
          if ( v14 == ++v17 )
            goto LABEL_26;
        }
        if ( v17 == v14 )
        {
LABEL_26:
          v18 = v12 + 1;
          if ( a1[2] < v18 )
          {
            v19 = qvector_reserve(a1, *a1, v18, 8);
            v20 = a1[1];
            *a1 = v19;
            v14 = (_QWORD *)(v19 + 8 * v20);
          }
          *v14 = v13;
          v9 = v23;
          ++a1[1];
        }
LABEL_18:
        v11 = ++v10;
      }
      while ( v10 < (unsigned __int64)v24 );
      if ( !v9 )
        goto LABEL_10;
      *(_QWORD *)&v24 = 0;
      ++v6;
      qfree(v9);
      v7 = v6;
    }
    while ( v6 < (unsigned __int64)a1[1] );
  }
  return v25 - __readfsqword(0x28u);
}
