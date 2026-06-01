unsigned __int64 __fastcall sub_7020(unsigned __int64 **a1)
{
  unsigned __int64 i; // rbp
  __int64 j; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 k; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 *v10; // r13
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  for ( i = **a1; i < (*a1)[1]; i = next_that(i, (*a1)[1], sub_45D0, 0) )
  {
    v14 = 0;
    v15 = 0;
    for ( j = get_first_fcref_from(i); ; j = get_next_fcref_from(i, v3) )
    {
      v3 = j;
      if ( j == -1 )
        break;
      v4 = v15;
      v5 = v14;
      if ( *((_QWORD *)&v15 + 1) < (unsigned __int64)(v15 + 1) )
      {
        v14 = qvector_reserve(&v14, v14, v15 + 1, 8);
        v5 = v14;
        v4 = v15;
      }
      *(_QWORD *)(v5 + 8 * v4) = v3;
      *(_QWORD *)&v15 = v15 + 1;
    }
    for ( k = get_first_dref_from(i); ; k = get_next_dref_from(i, v7) )
    {
      v7 = k;
      v8 = v14;
      v9 = v15;
      if ( v7 == -1 )
        break;
      if ( *((_QWORD *)&v15 + 1) < (unsigned __int64)(v15 + 1) )
      {
        v14 = qvector_reserve(&v14, v14, v15 + 1, 8);
        v8 = v14;
        v9 = v15;
      }
      *(_QWORD *)(v8 + 8 * v9) = v7;
      *(_QWORD *)&v15 = v15 + 1;
    }
    v10 = (unsigned __int64 *)(v14 + 8 * v15);
    if ( v10 != (unsigned __int64 *)v14 )
    {
      v11 = (unsigned __int64 *)v14;
      do
      {
        v12 = *v11;
        if ( *v11 < **a1 || v12 >= (*a1)[1] )
          sub_6D40((__int64)a1, v12, i);
        ++v11;
      }
      while ( v10 != v11 );
      v8 = v14;
    }
    if ( v8 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v8);
    }
  }
  return v16 - __readfsqword(0x28u);
}
