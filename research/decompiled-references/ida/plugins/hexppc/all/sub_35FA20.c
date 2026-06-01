__int64 __fastcall sub_35FA20(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r14
  unsigned __int64 v4; // rcx
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
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r13
  size_t v31; // r15
  __int32 v32; // r8d
  void *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __m128i *v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rsi
  const char *v40; // rsi
  __int64 v41; // [rsp+0h] [rbp-F8h]
  unsigned int v42; // [rsp+0h] [rbp-F8h]
  __int32 v43; // [rsp+0h] [rbp-F8h]
  __int32 v44; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v45; // [rsp+8h] [rbp-F0h]
  unsigned int v46; // [rsp+10h] [rbp-E8h]
  int v47; // [rsp+1Ch] [rbp-DCh]
  unsigned __int64 v48; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-B8h]
  __int128 v51; // [rsp+48h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  __int128 v53; // [rsp+68h] [rbp-90h]
  __int64 v54; // [rsp+80h] [rbp-78h] BYREF
  __int128 v55; // [rsp+88h] [rbp-70h]
  const char *v56; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v1 = *a1;
  v58 = __readfsqword(0x28u);
  v51 = 0;
  v3 = *(_QWORD **)(v1 + 800);
  v50 = 0;
  v52 = 0;
  v4 = v3[27];
  v53 = 0;
  v54 = 0;
  v48 = v4;
  v55 = 0;
  if ( v4 )
  {
    v50 = qvector_reserve();
    if ( *((_QWORD *)&v53 + 1) < v48 )
      v52 = qvector_reserve();
    if ( *((_QWORD *)&v55 + 1) < v48 )
      v54 = qvector_reserve();
    v26 = 0;
    do
    {
      v37 = *(_QWORD *)(v3[26] + 8 * v26);
      get_func();
      v38 = v53;
      v39 = v52;
      if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
      {
        v52 = qvector_reserve();
        v38 = v53;
        v39 = v52;
      }
      v27 = v39 + 32 * v38;
      *(_OWORD *)v27 = 0;
      v28 = v51;
      v29 = v50;
      *(_QWORD *)&v53 = v53 + 1;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = v37;
      if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v28 + 1) )
      {
        v50 = qvector_reserve();
        v28 = v51;
        v29 = v50;
      }
      v30 = v29 + 88 * v28;
      *(_QWORD *)v30 = 0;
      *(_QWORD *)(v30 + 24) = 0;
      *(_QWORD *)(v30 + 32) = 0;
      *(_QWORD *)(v30 + 56) = 0;
      *(_QWORD *)(v30 + 64) = 0;
      *(_OWORD *)(v30 + 8) = 0;
      *(_OWORD *)(v30 + 40) = 0;
      *(_OWORD *)(v30 + 72) = 0;
      *(_QWORD *)&v51 = v51 + 1;
      *(_QWORD *)(v27 + 16) = calc_func_metadata();
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[1] + 48LL))(a1[1], v30 + 56, v27);
      v31 = *(_QWORD *)(v30 + 72);
      v32 = *(_DWORD *)(v30 + 56);
      v33 = nullptr;
      if ( v31 )
      {
        v44 = *(_DWORD *)(v30 + 56);
        v33 = (void *)qalloc_or_throw();
        memcpy(v33, *(const void **)(v30 + 64), v31);
        v32 = v44;
      }
      v34 = v55;
      v35 = v54;
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
      {
        v43 = v32;
        v54 = qvector_reserve();
        v35 = v54;
        v32 = v43;
        v34 = v55;
      }
      ++v26;
      v36 = (__m128i *)(32 * v34 + v35);
      v36->m128i_i32[0] = v32;
      v36->m128i_i64[1] = (__int64)v33;
      v36[1] = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      *(_QWORD *)&v55 = v55 + 1;
    }
    while ( v48 != v26 );
    v1 = *a1;
  }
  v5 = a1[1];
  v6 = *(_DWORD *)(v1 + 1336);
  v56 = nullptr;
  v57 = 0;
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, const char **, _QWORD))(*(_QWORD *)v5 + 64LL))(
                   v5,
                   &v54,
                   &v56,
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
      *((_DWORD *)a1 + 24) = v48;
      if ( v3[26] )
      {
        v3[27] = 0;
        qfree();
        v3[26] = 0;
        v3[28] = 0;
      }
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v15 = 1;
      a1[10] = a1[10] + get_nsec_stamp() - a1[8];
      a1[11] = time(nullptr);
      goto LABEL_18;
    }
    while ( 1 )
    {
      v49 = *(_QWORD *)(v3[26] + 8 * v9);
      v45 = v49;
      v14 = *(_DWORD *)(v7[2] + 4 * v9);
      if ( v14 != -2 )
        break;
      if ( *(_QWORD *)(v50 + v8 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        sub_1762C0(a1 + 2, &v49);
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
        sub_37EEE0(51838);
      BUG();
    }
    v11 = v10 + 1;
    v12 = v7[5] + (v10 << 6);
    v47 = v11;
    v41 = v8 + v50;
    v46 = score_metadata();
    v13 = score_metadata();
    if ( v13 < v46 )
    {
      if ( *(_QWORD *)(v41 + 8) > 1u || (*(_BYTE *)(*a1 + 1337) & 0x10) != 0 )
      {
        ++*((_DWORD *)a1 + 28);
        sub_1762C0(a1 + 2, &v49);
      }
    }
    else
    {
      v42 = v13;
      a1[9] += sub_35E220(v3, v45, v12);
      if ( v46 < v42 )
      {
        ++*((_DWORD *)a1 + 26);
        apply_metadata();
      }
      else
      {
        ++*((_DWORD *)a1 + 27);
      }
    }
    v10 = v47;
    goto LABEL_10;
  }
  v40 = s1;
  if ( (_QWORD)v57 )
    v40 = v56;
  sub_69660((__int64)"lumina: %s\n", v40);
  v15 = 0;
LABEL_18:
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  v16 = v54;
  if ( v54 )
  {
    v17 = v55;
    if ( (_QWORD)v55 )
    {
      v18 = 0;
      do
      {
        v19 = v16 + 32 * v18;
        if ( *(_QWORD *)(v19 + 8) )
        {
          *(_QWORD *)(v19 + 16) = 0;
          qfree();
          v16 = v54;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  v20 = v50;
  if ( v50 )
  {
    v21 = v51;
    if ( (_QWORD)v51 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = (_QWORD *)(v20 + v22);
        if ( *(_QWORD *)(v20 + v22 + 64) )
        {
          v24[9] = 0;
          qfree();
        }
        if ( v24[4] )
        {
          v24[5] = 0;
          qfree();
        }
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
        ++v23;
        v20 = v50;
        v22 += 88;
      }
      while ( v21 != v23 );
    }
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  return v15;
}

