__int64 __fastcall sub_9860(__int64 a1, const void *a2, __int64 *a3)
{
  __int64 user_idadir; // rax
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 i; // r14
  _QWORD *v13; // r13
  _QWORD *v14; // r15
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbp
  _BYTE *v19; // rsi
  size_t v20; // rax
  size_t v21; // r15
  _QWORD *v22; // rdx
  _QWORD *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // r9
  __int64 *v26; // r15
  __int64 v27; // rdx
  _QWORD *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // eax
  const char *v32; // rsi
  unsigned __int64 v33; // rax
  size_t v34; // rbp
  const char *v35; // rcx
  const char *v36; // r14
  const char *v37; // rsi
  const char *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // rdi
  size_t v42; // rdx
  void *v43; // rax
  const void *v44; // rsi
  __int64 v45; // rax
  _QWORD *v48; // [rsp+20h] [rbp-10F8h]
  _QWORD *v49; // [rsp+20h] [rbp-10F8h]
  _QWORD *v50; // [rsp+20h] [rbp-10F8h]
  size_t v51; // [rsp+20h] [rbp-10F8h]
  _QWORD *v52; // [rsp+28h] [rbp-10F0h]
  __int64 v53; // [rsp+38h] [rbp-10E0h] BYREF
  const char *v54; // [rsp+40h] [rbp-10D8h] BYREF
  size_t v55; // [rsp+48h] [rbp-10D0h]
  size_t v56; // [rsp+50h] [rbp-10C8h]
  __int128 v57; // [rsp+60h] [rbp-10B8h] BYREF
  __int64 v58; // [rsp+70h] [rbp-10A8h]
  __int128 v59; // [rsp+78h] [rbp-10A0h]
  __int64 v60; // [rsp+88h] [rbp-1090h]
  __int64 v61; // [rsp+90h] [rbp-1088h]
  __int128 v62; // [rsp+98h] [rbp-1080h]
  __m128i v63; // [rsp+A8h] [rbp-1070h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-1060h]
  __int128 v65; // [rsp+C0h] [rbp-1058h]
  char v66[4104]; // [rsp+D0h] [rbp-1048h] BYREF
  unsigned __int64 v67; // [rsp+10D8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  v6 = sub_7550(a1, a1 + 180, 4096, user_idadir, (__int64)"svd", a3);
  if ( !(_BYTE)v6 )
    return 0;
  v9 = *(_QWORD *)(a1 + 4280);
  v7 = v6;
  v10 = *(_QWORD *)(v9 + 40);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v9 + 48);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = (_QWORD *)(v10 + 80 * i);
        if ( v13[6] )
        {
          v13[7] = 0;
          qfree();
        }
        if ( v13[3] )
        {
          v13[4] = 0;
          qfree();
        }
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
        }
        v10 = *(_QWORD *)(v9 + 40);
      }
    }
    *(_QWORD *)(v9 + 48) = 0;
    qfree();
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 56) = 0;
  }
  *(_QWORD *)(v9 + 64) = 0;
  sub_53B0(*(_QWORD **)(v9 + 88));
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = v9 + 80;
  *(_QWORD *)(v9 + 104) = v9 + 80;
  *(_QWORD *)(v9 + 112) = 0;
  sub_5060(*(_QWORD **)(a1 + 4312));
  v14 = *(_QWORD **)(a1 + 4280);
  v15 = (_QWORD *)(a1 + 4304);
  *(_QWORD *)(a1 + 4312) = 0;
  *(_QWORD *)(a1 + 4320) = a1 + 4304;
  *(_QWORD *)(a1 + 4328) = a1 + 4304;
  *(_QWORD *)(a1 + 4336) = 0;
  v16 = v14[6];
  v17 = v14[5];
  if ( v14[7] < (unsigned __int64)(v16 + 1) )
  {
    v40 = qvector_reserve();
    v16 = v14[6];
    v15 = (_QWORD *)(a1 + 4304);
    v14[5] = v40;
    v17 = v40;
  }
  v18 = v17 + 80 * v16;
  *(_QWORD *)(v18 + 24) = 0;
  *(_OWORD *)(v18 + 32) = 0;
  *(_QWORD *)v18 = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 72) = 4;
  *(_OWORD *)(v18 + 8) = 0;
  *(_OWORD *)(v18 + 56) = 0;
  ++v14[6];
  v19 = *(_BYTE **)(v18 + 24);
  if ( *(_QWORD *)(v18 + 40) <= 1u )
  {
    v49 = v15;
    v39 = qvector_reserve();
    v15 = v49;
    *(_QWORD *)(v18 + 24) = v39;
    v19 = (_BYTE *)v39;
  }
  *(_QWORD *)(v18 + 32) = 2;
  *v19 = 47;
  *(_BYTE *)(*(_QWORD *)(v18 + 24) + 1LL) = 0;
  if ( a2 && (v48 = v15, v20 = strlen((const char *)a2), v15 = v48, (v21 = v20) != 0) )
  {
    v41 = *(void **)v18;
    v42 = v20 + 1;
    if ( *(_QWORD *)(v18 + 16) < v20 + 1 )
    {
      v52 = v48;
      v51 = v20 + 1;
      v45 = qvector_reserve();
      v15 = v52;
      v42 = v51;
      *(_QWORD *)v18 = v45;
      v41 = (void *)v45;
    }
    *(_QWORD *)(v18 + 8) = v42;
    v50 = v15;
    memmove(v41, a2, v21);
    v15 = v50;
    *(_BYTE *)(*(_QWORD *)v18 + v21) = 0;
  }
  else
  {
    *(_QWORD *)(v18 + 8) = 0;
  }
  v53 = 0;
  v22 = *(_QWORD **)(a1 + 4312);
  if ( !v22 )
  {
    v23 = v15;
LABEL_26:
    *(_QWORD *)&v57 = &v53;
    v23 = sub_4640((_QWORD *)(a1 + 4296), v23, (unsigned __int64 **)&v57);
    goto LABEL_27;
  }
  do
  {
    v23 = v22;
    v22 = (_QWORD *)v22[2];
  }
  while ( v22 );
  if ( v23 == v15 || v23[4] )
    goto LABEL_26;
LABEL_27:
  v23[5] = 0;
  v24 = callui(16, 0, a1);
  if ( v24 < 0 )
    return v7;
  v25 = *(_QWORD **)(a1 + 4280);
  v26 = &qword_1C320;
  v27 = v25[11];
  if ( v27 )
  {
    v28 = v25 + 10;
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v27 + 16);
        v30 = *(_QWORD *)(v27 + 24);
        if ( (int)v24 <= *(_DWORD *)(v27 + 32) )
          break;
        v27 = *(_QWORD *)(v27 + 24);
        if ( !v30 )
          goto LABEL_33;
      }
      v28 = (_QWORD *)v27;
      v27 = *(_QWORD *)(v27 + 16);
    }
    while ( v29 );
LABEL_33:
    v26 = &qword_1C320;
    if ( v28 != v25 + 10 && (int)v24 >= *((_DWORD *)v28 + 8) )
    {
      v33 = v28[5];
      if ( v33 < v25[6] )
      {
        v26 = (__int64 *)(v25[5] + 80 * v33);
        v31 = *((_DWORD *)v26 + 18);
        if ( v31 == 2 )
          goto LABEL_42;
LABEL_36:
        if ( v31 != 4 )
          return 0;
        v58 = 0;
        v32 = s1;
        v60 = 0;
        v57 = 0;
        v59 = 0;
        v62 = 0;
        v65 = 0;
        v61 = 0;
        v64 = 0;
        v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v63.m128i_u64[1], (__m128i)(unsigned __int64)&off_1B9D0);
        if ( v26[1] )
          v32 = (const char *)*v26;
        v7 = sub_165A0(&v57, v32, a3);
        sub_9620(&v57);
        return v7;
      }
    }
  }
  v31 = dword_1C368;
  if ( dword_1C368 != 2 )
    goto LABEL_36;
LABEL_42:
  v56 = 0;
  v34 = v26[1];
  v35 = nullptr;
  if ( v34 )
  {
    v43 = (void *)qalloc_or_throw();
    v44 = (const void *)*v26;
    v56 = v34;
    v35 = (const char *)memcpy(v43, v44, v34);
  }
  v55 = v34;
  v54 = v35;
  sub_49B0((__int64)&v54, "/github.com/", "/raw.githubusercontent.com/");
  sub_49B0((__int64)&v54, "/tree/", "/");
  v36 = v54;
  v37 = v54;
  if ( !v55 )
    v37 = s1;
  v7 = sub_75D0(a1 + 4344, (__int64)v37, 1, a3, 0);
  if ( (_BYTE)v7 )
  {
    v38 = (const char *)(a1 + 4360);
    v60 = 0;
    v57 = 0;
    v59 = 0;
    v62 = 0;
    v65 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v63.m128i_u64[1], (__m128i)(unsigned __int64)&off_1B9D0);
    v7 = sub_165A0(&v57, v38, a3);
    if ( !(_BYTE)v7 )
      goto LABEL_50;
    qmakepath();
    if ( (unsigned int)qmove() )
    {
      qstrerror();
      sub_7490(a3);
LABEL_50:
      sub_9620(&v57);
      if ( v36 )
        qfree();
      return 0;
    }
    sub_5990((__int64)"Renamed %s => %s\n", v38, v66);
    sub_9620(&v57);
  }
  if ( v36 )
    qfree();
  return v7;
}

