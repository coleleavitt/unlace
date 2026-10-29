__int64 __fastcall sub_2BDD50(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rdx
  const void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 j; // r12
  _QWORD *v25; // rbp
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 i; // r12
  _QWORD *v30; // rbp
  __int64 v31; // [rsp+8h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+10h] [rbp-68h]
  __int64 *v33; // [rsp+18h] [rbp-60h]
  _BYTE v34[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v9 = *a2;
  v10 = a2[1];
  v32 = a2;
  v11 = *(_QWORD *)(a1 + 112);
  v35 = __readfsqword(0x28u);
  v31 = v9 + v10;
  *(__m128 *)v34 = _mm_loadh_ps((const double *)&v31);
  v13 = qalloc_or_throw();
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  v14 = (__int64 *)v13;
  v33 = (__int64 *)v34;
  if ( !(unsigned __int8)sub_2BD560(v11, (__int64 *)v13, (__int64)v34, nullptr) )
  {
    if ( v14 )
    {
      v27 = *v14;
      if ( *v14 )
      {
        v28 = v14[1];
        if ( v28 )
        {
          for ( i = 0; i != v28; ++i )
          {
            v30 = (_QWORD *)(v27 + 80 * i);
            clear_tinfo_t();
            if ( v30[5] )
            {
              v30[6] = 0;
              qfree();
            }
            if ( v30[2] )
            {
              v30[3] = 0;
              qfree();
            }
            cleanup_argloc();
            v27 = *v14;
          }
        }
        v14[1] = 0;
        qfree();
      }
      qfree();
    }
    return v35 - __readfsqword(0x28u);
  }
  if ( !v14 )
    return v35 - __readfsqword(0x28u);
  if ( v31 != *(_QWORD *)v34 )
    sub_66B20((__int64)"%a: ignored garbage at the end of the blob '%c'\n", 0.0, a3);
  v15 = *v14;
  v16 = *v14 + 80 * v14[1];
  if ( v16 != *v14 )
  {
    do
    {
      v17 = v15 + 64;
      v15 += 80;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 32LL))(a4, v17, a5, a6, 1);
    }
    while ( v16 != v15 );
  }
  memset(v34, 0, sizeof(v34));
  sub_2B58C0(v33, (__int64)v14, nullptr);
  v18 = v32;
  v19 = *(_QWORD *)&v34[8];
  v20 = *(const void **)v34;
  v32[1] = 0;
  if ( v19 )
  {
    v21 = v19 - 1;
    if ( v21 )
    {
      sub_2AB490(v18, v20, v21);
      v20 = *(const void **)v34;
    }
  }
  if ( v20 )
  {
    *(_QWORD *)&v34[8] = 0;
    qfree();
  }
  v22 = *v14;
  if ( *v14 )
  {
    v23 = v14[1];
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v25 = (_QWORD *)(v22 + 80 * j);
        clear_tinfo_t();
        if ( v25[5] )
        {
          v25[6] = 0;
          qfree();
        }
        if ( v25[2] )
        {
          v25[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v22 = *v14;
      }
    }
    v14[1] = 0;
    qfree();
  }
  return qfree();
}

