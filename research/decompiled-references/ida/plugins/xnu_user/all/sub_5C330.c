unsigned __int64 __fastcall sub_5C330(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rax
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  const char *v13; // rbp
  _QWORD *v14; // r13
  _DWORD *v15; // rax
  size_t v16; // rax
  __int64 v17; // r12
  size_t v18; // rbx
  const char *v19; // rbx
  const char *v20; // r15
  const char *v21; // rdx
  const char *v22; // r12
  char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  const char *v27; // rsi
  char *v28; // rdi
  __int64 v29; // rax
  const char *v30; // r12
  _QWORD *v31; // rdi
  char *v32; // rsi
  __m128i v33; // xmm0
  __m128i si128; // xmm3
  const char *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // xmm0_8
  char *v39; // rdi
  const char *v40; // rsi
  __m128i v41; // [rsp+0h] [rbp-98h] BYREF
  char *s2; // [rsp+18h] [rbp-80h]
  const char *v43; // [rsp+20h] [rbp-78h]
  _QWORD *v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  void *v47; // [rsp+40h] [rbp-58h]
  __m128i v48; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v44 = a1;
  v49 = __readfsqword(0x28u);
  v2 = sub_158A0();
  v6 = a1[2];
  v46 = *(_QWORD *)(v2 + 872);
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_49FA0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree();
    }
    operator delete(v7, 0x48u);
  }
  v9 = v44;
  v10 = (const char *)(v44 + 1);
  v44[2] = 0;
  v9[3] = v10;
  v9[4] = v10;
  v9[5] = 0;
  v11 = a2[1];
  v12 = *a2;
  v43 = v10;
  v45 = v12 + 40 * v11;
  if ( v12 != v45 )
  {
    while ( 1 )
    {
      v13 = src;
      if ( *(_QWORD *)(v12 + 8) )
        v13 = *(const char **)v12;
      if ( *(_DWORD *)(v12 + 24) != 4 )
        goto LABEL_64;
      v14 = *(_QWORD **)(v12 + 32);
      if ( v14[1] != 4 || (v15 = (_DWORD *)*v14, *(_DWORD *)*v14 != 1) || v15[4] != 1 || v15[8] != 1 || v15[12] != 1 )
        sub_4BC60(
          (__int64)"%s.cfg: bad type of an array entry for architecture map %s",
          v46,
          (__int64)v13,
          v3,
          v4,
          v5,
          v41.m128i_i8[0]);
      v47 = nullptr;
      v48 = 0;
      if ( v13 )
      {
        v16 = strlen(v13);
        v17 = v16 + 1;
        v18 = v16;
        v47 = (void *)qvector_reserve();
        v48.m128i_i64[0] = v17;
        memmove(v47, v13, v18);
        *((_BYTE *)v47 + v18) = 0;
      }
      v19 = v43;
      v20 = (const char *)v44[2];
      if ( !v20 )
        goto LABEL_37;
      v13 = (const char *)v48.m128i_i64[0];
      v21 = src;
      v19 = v43;
      s2 = (char *)v47;
      if ( v48.m128i_i64[0] )
        v21 = (const char *)v47;
      v41.m128i_i64[0] = (__int64)v21;
      while ( 1 )
      {
        v26 = *((_QWORD *)v20 + 5);
        if ( !v13 )
          break;
        v22 = v20;
        if ( v26 )
          goto LABEL_30;
        v23 = s2;
        v24 = src;
LABEL_22:
        v25 = strcmp(v24, v23);
        v3 = *((_QWORD *)v20 + 2);
        v20 = *((const char **)v20 + 3);
        if ( v25 >= 0 )
        {
          v19 = v22;
          v20 = (const char *)v3;
        }
        if ( !v20 )
          goto LABEL_32;
      }
      if ( v26 )
        break;
      while ( 1 )
      {
        v3 = *((_QWORD *)v20 + 2);
        if ( !v3 )
          break;
        v19 = v20;
        v20 = *((const char **)v20 + 2);
        if ( *(_QWORD *)(v3 + 40) )
          goto LABEL_29;
      }
      v19 = v20;
LABEL_32:
      if ( v43 == v19 )
        goto LABEL_37;
      if ( !*((_QWORD *)v19 + 5) )
      {
        v27 = src;
        if ( v13 )
        {
LABEL_35:
          v28 = s2;
          goto LABEL_36;
        }
LABEL_41:
        if ( s2 )
        {
          v48.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_43;
      }
      v27 = *((const char **)v19 + 4);
      v28 = (char *)src;
      if ( v13 )
        goto LABEL_35;
LABEL_36:
      if ( strcmp(v28, v27) >= 0 )
        goto LABEL_41;
LABEL_37:
      v29 = operator new(0x48u);
      v30 = (const char *)v47;
      v31 = v44;
      v32 = (char *)v19;
      v19 = (const char *)v29;
      v33 = _mm_loadu_si128(&v48);
      si128 = _mm_load_si128((const __m128i *)&xmmword_823C0);
      *(_QWORD *)(v29 + 32) = v47;
      *(__m128i *)(v29 + 40) = v33;
      *(__m128i *)(v29 + 56) = si128;
      v47 = nullptr;
      v41 = v33;
      v48 = 0;
      v35 = (const char *)sub_5C170(v31, v32, v29 + 32);
      v13 = v35;
      if ( v36 )
      {
        if ( !v35 )
        {
          v37 = _mm_load_si128(&v41).m128i_u64[0];
          if ( v43 != (const char *)v36 )
          {
            v40 = src;
            if ( *(_QWORD *)(v36 + 40) )
              v40 = *(const char **)(v36 + 32);
            v41.m128i_i64[0] = v36;
            if ( !v37 )
              v30 = src;
            strcmp(v30, v40);
          }
        }
        std::_Rb_tree_insert_and_rebalance();
        ++v44[5];
        s2 = (char *)v47;
        goto LABEL_41;
      }
      if ( v19 )
      {
        if ( v30 )
        {
          *((_QWORD *)v19 + 5) = 0;
          qfree();
        }
        v39 = (char *)v19;
        v19 = v13;
        operator delete(v39, 0x48u);
        s2 = (char *)v47;
        goto LABEL_41;
      }
      v19 = v35;
LABEL_43:
      if ( *(_DWORD *)*v14 != 1 )
      {
LABEL_62:
        if ( !under_debugger )
        {
LABEL_63:
          interr();
LABEL_64:
          sub_4BC60(
            (__int64)"%s.cfg: architecture map %s is not an array",
            v46,
            (__int64)v13,
            v3,
            v4,
            v5,
            v41.m128i_i8[0]);
        }
LABEL_68:
        BUG();
      }
      *((_DWORD *)v19 + 14) = *(_QWORD *)(*v14 + 8LL);
      if ( *(_DWORD *)(*v14 + 16LL) != 1 )
      {
        if ( !under_debugger )
          goto LABEL_63;
        goto LABEL_68;
      }
      *((_DWORD *)v19 + 15) = *(_QWORD *)(*v14 + 24LL);
      if ( *(_DWORD *)(*v14 + 32LL) != 1 )
      {
        if ( !under_debugger )
          goto LABEL_63;
        goto LABEL_68;
      }
      *((_DWORD *)v19 + 16) = *(_QWORD *)(*v14 + 40LL);
      if ( *(_DWORD *)(*v14 + 48LL) != 1 )
        goto LABEL_62;
      v12 += 40;
      *((_DWORD *)v19 + 17) = *(_QWORD *)(*v14 + 56LL);
      if ( v45 == v12 )
        return v49 - __readfsqword(0x28u);
    }
LABEL_29:
    v22 = v20;
LABEL_30:
    v24 = *((const char **)v20 + 4);
    v23 = (char *)v41.m128i_i64[0];
    goto LABEL_22;
  }
  return v49 - __readfsqword(0x28u);
}

