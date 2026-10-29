unsigned __int64 __fastcall sub_58FD0(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 j; // rbx
  __int64 v10; // rsi
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD **)a1;
  v14 = __readfsqword(0x28u);
  v13 = 0;
  v2 = v1[1];
  v12 = 0;
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v6 = *(_QWORD *)(*v1 + 8 * i);
      v7 = *(_QWORD **)(a1 + 8);
      v8 = &v7[*(_QWORD *)(a1 + 16)];
      if ( v7 == v8 )
        goto LABEL_15;
      while ( v6 != *v7 )
      {
        if ( v8 == ++v7 )
          goto LABEL_15;
      }
      if ( v8 == v7 )
      {
LABEL_15:
        if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v4 + 1) )
        {
          v12 = qvector_reserve(&v12, v3, v4 + 1, 8);
          v4 = v13;
          v3 = v12;
        }
        *(_QWORD *)(v3 + 8 * v4) = v6;
        v1 = *(_QWORD **)a1;
        v3 = v12;
        v4 = v13 + 1;
        *(_QWORD *)&v13 = v13 + 1;
      }
    }
    if ( v4 )
    {
      for ( j = 0; j != v4; ++j )
      {
        v10 = *(_QWORD *)(v3 + 8 * j);
        sub_56050((__int64)v1, v10);
        v3 = v12;
      }
    }
    if ( v3 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v3);
    }
  }
  return v14 - __readfsqword(0x28u);
}
