__int64 __fastcall sub_363BA0(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  _QWORD *v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  int v11; // ecx
  __int64 v12; // r13
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  size_t v38; // r15
  __int32 v39; // r8d
  void *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rsi
  __m128i *v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rsi
  const char *v47; // rsi
  __int64 v48; // [rsp+0h] [rbp-F8h]
  unsigned int v49; // [rsp+0h] [rbp-F8h]
  __int32 v50; // [rsp+0h] [rbp-F8h]
  __int32 v51; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v52; // [rsp+8h] [rbp-F0h]
  unsigned int v53; // [rsp+10h] [rbp-E8h]
  int v54; // [rsp+1Ch] [rbp-DCh]
  unsigned __int64 v55; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v58; // [rsp+48h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-98h] BYREF
  __int128 v60; // [rsp+68h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-78h] BYREF
  __int128 v62; // [rsp+88h] [rbp-70h]
  const char *v63; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-40h]

  v1 = *a1;
  v65 = __readfsqword(0x28u);
  v58 = 0;
  v3 = *(_QWORD **)(v1 + 800);
  v57 = 0;
  v59 = 0;
  v4 = v3[27];
  v60 = 0;
  v61 = 0;
  v55 = v4;
  v62 = 0;
  if ( v4 )
  {
    v57 = qvector_reserve((__int64)&v57, 0, v4, 88);
    if ( *((_QWORD *)&v60 + 1) < v55 )
      v59 = qvector_reserve((__int64)&v59, v59, v55, 32);
    if ( *((_QWORD *)&v62 + 1) < v55 )
      v61 = qvector_reserve((__int64)&v61, v61, v55, 32);
    v31 = 0;
    do
    {
      v44 = *(_QWORD *)(v3[26] + 8 * v31);
      get_func();
      v45 = v60;
      v46 = v59;
      if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v59 = qvector_reserve((__int64)&v59, v59, v60 + 1, 32);
        v45 = v60;
        v46 = v59;
      }
      v32 = v46 + 32 * v45;
      *(_OWORD *)v32 = 0;
      v33 = v58;
      v34 = v57;
      *(_QWORD *)&v60 = v60 + 1;
      *(_QWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 24) = v44;
      if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v57 = qvector_reserve((__int64)&v57, v34, v33 + 1, 88);
        v33 = v58;
        v34 = v57;
      }
      v35 = v34 + 88 * v33;
      *(_QWORD *)v35 = 0;
      *(_QWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 32) = 0;
      *(_QWORD *)(v35 + 56) = 0;
      *(_QWORD *)(v35 + 64) = 0;
      *(_OWORD *)(v35 + 8) = 0;
      *(_OWORD *)(v35 + 40) = 0;
      *(_OWORD *)(v35 + 72) = 0;
      *(_QWORD *)&v58 = v58 + 1;
      *(_QWORD *)(v32 + 16) = calc_func_metadata();
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[1] + 48LL))(a1[1], v35 + 56, v32);
      v38 = *(_QWORD *)(v35 + 72);
      v39 = *(_DWORD *)(v35 + 56);
      v40 = nullptr;
      if ( v38 )
      {
        v51 = *(_DWORD *)(v35 + 56);
        v40 = (void *)qalloc_or_throw(*(_QWORD *)(v35 + 72), v35 + 56, v36, v37);
        memcpy(v40, *(const void **)(v35 + 64), v38);
        v39 = v51;
      }
      v41 = v62;
      v42 = v61;
      if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
      {
        v50 = v39;
        v61 = qvector_reserve((__int64)&v61, v61, v62 + 1, 32);
        v42 = v61;
        v39 = v50;
        v41 = v62;
      }
      ++v31;
      v43 = (__m128i *)(32 * v41 + v42);
      v43->m128i_i32[0] = v39;
      v43->m128i_i64[1] = (__int64)v40;
      v43[1] = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
      *(_QWORD *)&v62 = v62 + 1;
    }
    while ( v55 != v31 );
    v1 = *a1;
  }
  v5 = a1[1];
  v6 = *(_DWORD *)(v1 + 1336);
  v63 = nullptr;
  v64 = 0;
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, const char **, _QWORD))(*(_QWORD *)v5 + 64LL))(
                   v5,
                   &v61,
                   &v63,
                   (v6 >> 10) & 2);
  if ( v7 )
  {
    a1[9] = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if ( !v7[3] )
    {
LABEL_15:
      *((_DWORD *)a1 + 24) = v55;
      v15 = v3[26];
      if ( v15 )
      {
        v3[27] = 0;
        qfree(v15);
        v3[26] = 0;
        v3[28] = 0;
      }
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v16 = 1;
      a1[10] = a1[10] + get_nsec_stamp() - a1[8];
      a1[11] = time(nullptr);
      goto LABEL_18;
    }
    while ( 1 )
    {
      v56 = *(_QWORD *)(v3[26] + 8 * v9);
      v52 = v56;
      v14 = *(_DWORD *)(v7[2] + 4 * v9);
      if ( v14 != -2 )
        break;
      if ( *(_QWORD *)(v57 + v8 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        sub_179D00(a1 + 2, &v56);
        ++v9;
        v8 += 88;
        if ( v9 >= v7[3] )
          goto LABEL_15;
      }
      else
      {
LABEL_10:
        ++v9;
        v8 += 88;
        if ( v9 >= v7[3] )
          goto LABEL_15;
      }
    }
    if ( v14 )
    {
      if ( !under_debugger )
        sub_383060(0xCA7Eu, 0.0);
      BUG();
    }
    v11 = v10 + 1;
    v12 = v7[5] + (v10 << 6);
    v54 = v11;
    v48 = v8 + v57;
    v53 = score_metadata();
    v13 = score_metadata();
    if ( v13 < v53 )
    {
      if ( *(_QWORD *)(v48 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        ++*((_DWORD *)a1 + 28);
        sub_179D00(a1 + 2, &v56);
      }
    }
    else
    {
      v49 = v13;
      a1[9] += sub_3623A0(v3, v52, v12);
      if ( v53 < v49 )
      {
        ++*((_DWORD *)a1 + 26);
        apply_metadata();
      }
      else
      {
        ++*((_DWORD *)a1 + 27);
      }
    }
    v10 = v54;
    goto LABEL_10;
  }
  v47 = s1;
  if ( (_QWORD)v64 )
    v47 = v63;
  sub_6D0A0((__int64)"lumina: %s\n", v47);
  v16 = 0;
LABEL_18:
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree((__int64)v63);
  }
  v17 = v61;
  if ( v61 )
  {
    v18 = v62;
    if ( (_QWORD)v62 )
    {
      v19 = 0;
      do
      {
        v20 = v17 + 32 * v19;
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          *(_QWORD *)(v20 + 16) = 0;
          qfree(v21);
          v17 = v61;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v17);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  v22 = v57;
  if ( v57 )
  {
    v23 = v58;
    if ( (_QWORD)v58 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v22 + v24);
        v27 = *(_QWORD *)(v22 + v24 + 64);
        if ( v27 )
        {
          v26[9] = 0;
          qfree(v27);
        }
        v28 = v26[4];
        if ( v28 )
        {
          v26[5] = 0;
          qfree(v28);
        }
        v29 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v29);
        }
        ++v25;
        v22 = v57;
        v24 += 88;
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v22);
  }
  return v16;
}

