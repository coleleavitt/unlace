unsigned __int64 __fastcall sub_18250(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *std_dirtree; // rbx
  __int64 v3; // rbp
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __int64 v6; // rbx
  __int64 i; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  const char *v15; // rsi
  __m128i v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  __m128i v18; // [rsp+18h] [rbp-80h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __m128i v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+60h] [rbp-38h]
  unsigned __int64 v25; // [rsp+68h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v1 = qvector_reserve(&v22, 0, 7, 1);
  v22 = v1;
  *(_QWORD *)&v23 = 7;
  *(_DWORD *)v1 = 1769435951;
  *(_WORD *)(v1 + 4) = 29798;
  *(_BYTE *)(v22 + 6) = 0;
  LODWORD(v24) = 0;
  std_dirtree = (_QWORD *)get_std_dirtree(0);
  v17 = 0;
  v18 = 0;
  dirtree_getcwd(&v17, *std_dirtree);
  v3 = v17;
  v17 = 0;
  v4 = _mm_loadu_si128(&v18);
  v18 = 0;
  if ( v20 )
  {
    v16 = v4;
    v21.m128i_i64[0] = 0;
    qfree(v20);
    v5 = _mm_load_si128(&v16);
    v20 = v3;
    v21 = v5;
    if ( v17 )
    {
      v18.m128i_i64[0] = 0;
      qfree(v17);
    }
  }
  else
  {
    v20 = v3;
    v21 = v4;
  }
  BYTE4(v24) = (unsigned __int8)dirtree_mkdir(*std_dirtree, "/swift") == 0;
  dirtree_chdir(*std_dirtree, "/swift");
  v6 = *(_QWORD *)(a1 + 464);
  for ( i = a1 + 448; i != v6; v6 = std::_Rb_tree_increment(v6) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v6 + 156) && *(_DWORD *)(v6 + 40) == 2 )
      {
        sub_A400(&v17, v6 + 40, ".");
        v8 = sub_131C0(a1 + 488, (__int64)&v17);
        if ( v8 == (_QWORD *)(a1 + 496) )
        {
          if ( !under_debugger )
            interr(30655);
          BUG();
        }
        if ( *((_DWORD *)v8 + 31) == 2 )
          sub_181C0(
            a1,
            (__int64)(v8 + 7),
            a1 + 496,
            v9,
            v10,
            v11,
            v16.m128i_i32[0],
            v16.m128i_i64[1],
            v17,
            v18.m128i_i32[0],
            v18.m128i_i32[2],
            v19,
            v20,
            v21.m128i_i32[0],
            v21.m128i_i64[1],
            v22,
            v23,
            SDWORD2(v23),
            v24);
        if ( v17 )
          break;
      }
      v6 = std::_Rb_tree_increment(v6);
      if ( i == v6 )
        goto LABEL_14;
    }
    v18.m128i_i64[0] = 0;
    qfree(v17);
  }
LABEL_14:
  v12 = (_QWORD *)get_std_dirtree((unsigned int)v24);
  v13 = v12;
  if ( v21.m128i_i64[0] )
  {
    dirtree_chdir(*v12, v20);
    if ( !BYTE4(v24) )
      goto LABEL_16;
  }
  else
  {
    dirtree_chdir(*v12, s1);
    if ( !BYTE4(v24) )
      goto LABEL_16;
  }
  v15 = s1;
  if ( (_QWORD)v23 )
    v15 = (const char *)v22;
  dirtree_rmdir(*v13, v15);
LABEL_16:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v25 - __readfsqword(0x28u);
}
