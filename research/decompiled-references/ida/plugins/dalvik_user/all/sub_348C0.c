char *__fastcall sub_348C0(const char *a1, __int64 a2, __int64 a3, const char *a4, unsigned int a5, double a6)
{
  char *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *func; // rax
  __int64 v13; // rax
  size_t v14; // r12
  _QWORD *v15; // rbx
  int v16; // r9d
  void *v17; // r8
  void *v18; // r13
  size_t v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // rdi
  __int64 v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rbx
  size_t v28; // r14
  size_t v29; // r14
  size_t v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rbx
  __m128i v34; // xmm0
  size_t v35; // r12
  void *v36; // rax
  size_t v37; // r12
  size_t v38; // r12
  int v39; // eax
  void *v40; // rdi
  void *v41; // rax
  void *v42; // rsi
  void *v43; // rax
  void *v44; // rsi
  void *v45; // rax
  const void *v46; // rsi
  const void *v47; // r8
  const void *v48; // r8
  const void *v49; // r8
  void *v50; // [rsp+0h] [rbp-C8h]
  const void *v51; // [rsp+0h] [rbp-C8h]
  const void *v52; // [rsp+0h] [rbp-C8h]
  const void *v53; // [rsp+0h] [rbp-C8h]
  int v54; // [rsp+Ch] [rbp-BCh]
  char v55[8]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-B0h]
  __int64 v57; // [rsp+20h] [rbp-A8h]
  void *src; // [rsp+30h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-90h] BYREF
  void *dest; // [rsp+50h] [rbp-78h] BYREF
  size_t v61[2]; // [rsp+58h] [rbp-70h]
  void *v62; // [rsp+68h] [rbp-60h] BYREF
  size_t v63[2]; // [rsp+70h] [rbp-58h]
  int v64; // [rsp+80h] [rbp-48h]
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]

  v7 = (char *)a1;
  v65 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    a2 = a3;
    a1 = "DEXSIP: find_source_items(ea=%a, size=%llu, level=%s(%d))\n";
    sub_111A0((__int64)"DEXSIP: find_source_items(ea=%a, size=%llu, level=%s(%d))\n", a6, a3, a4, (unsigned int)"");
  }
  v9 = sub_135E0(a1, a2);
  v10 = v9;
  if ( a5 == 3 )
  {
    if ( a3 == -1 )
    {
LABEL_17:
      *(_QWORD *)v7 = 0;
      return v7;
    }
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !(unsigned __int8)sub_2F5F0(v9, (__int64)&src, a3) )
    {
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      goto LABEL_17;
    }
    v13 = operator new(0x30u);
    v14 = n[0];
    v15 = (_QWORD *)v13;
    *(_DWORD *)(v13 + 8) = 1;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)v13 = &off_7D800;
    *(_DWORD *)(v13 + 40) = -1;
    *(_OWORD *)(v13 + 24) = 0;
    if ( v14 )
    {
      v18 = (void *)qalloc_or_throw();
      memcpy(v18, src, v14);
      v21 = v15[3];
      v16 = n[2];
      v17 = dest;
      v19 = v61[0];
      v20 = v15[2];
      if ( v15[4] >= (unsigned __int64)(v21 + 1) )
      {
LABEL_26:
        v22 = 48 * v21 + v20;
        *(_QWORD *)v22 = v18;
        *(_DWORD *)(v22 + 24) = v16;
        *(_QWORD *)(v22 + 32) = v17;
        *(_QWORD *)(v22 + 40) = v19;
        *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
        v23 = src;
        ++v15[3];
        *(_QWORD *)v7 = v15;
        if ( v23 )
        {
          n[0] = 0;
          qfree();
        }
        return v7;
      }
    }
    else
    {
      v16 = n[2];
      v17 = dest;
      v18 = nullptr;
      v19 = v61[0];
    }
    v54 = v16;
    v50 = v17;
    v20 = qvector_reserve();
    v16 = v54;
    v17 = v50;
    v15[2] = v20;
    v21 = v15[3];
    goto LABEL_26;
  }
  if ( a5 <= 3 )
    goto LABEL_8;
  a5 &= ~2u;
  if ( a5 == 4 )
    goto LABEL_17;
  do
  {
    if ( under_debugger )
      BUG();
    interr();
LABEL_8:
    ;
  }
  while ( a5 != 2 );
  memset(n, 0, sizeof(n));
  dest = nullptr;
  v62 = nullptr;
  *(_OWORD *)v61 = 0;
  *(_OWORD *)v63 = 0;
  func = (__int64 *)get_func();
  if ( !func || !(unsigned __int8)sub_2F010((_QWORD *)(v10 + 1040), (__int64)v55, *func) )
  {
    if ( v62 )
    {
      v63[0] = 0;
      qfree();
    }
    if ( dest )
    {
      v61[0] = 0;
      qfree();
    }
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    goto LABEL_17;
  }
  v24 = v57;
  v25 = v56;
  qmutex_lock();
  v26 = sub_2C930((_QWORD *)(v10 + 1040), v25, v24);
  v27 = v26;
  if ( v26 )
  {
    src = *(void **)(v26 + 8);
    if ( n != (size_t *)(v26 + 16) )
    {
      v28 = *(_QWORD *)(v26 + 24);
      if ( v28 > 1 )
      {
        v49 = *(const void **)(v26 + 16);
        if ( n[2] < v28 )
        {
          v52 = *(const void **)(v26 + 16);
          n[0] = qvector_reserve();
          v49 = v52;
        }
        n[1] = v28;
        memmove((void *)n[0], v49, v28 - 1);
        *(_BYTE *)(n[0] + v28 - 1) = 0;
      }
      else
      {
        n[1] = 0;
      }
    }
    if ( &dest != (void **)(v27 + 40) )
    {
      v29 = *(_QWORD *)(v27 + 48);
      if ( v29 > 1 )
      {
        v47 = *(const void **)(v27 + 40);
        if ( v61[1] < v29 )
        {
          v51 = *(const void **)(v27 + 40);
          dest = (void *)qvector_reserve();
          v47 = v51;
        }
        v61[0] = v29;
        memmove(dest, v47, v29 - 1);
        *((char *)dest + v29 - 1) = 0;
      }
      else
      {
        v61[0] = 0;
      }
    }
    if ( &v62 != (void **)(v27 + 64) )
    {
      v30 = *(_QWORD *)(v27 + 72);
      if ( v30 > 1 )
      {
        v48 = *(const void **)(v27 + 64);
        if ( v63[1] < v30 )
        {
          v53 = *(const void **)(v27 + 64);
          v62 = (void *)qvector_reserve();
          v48 = v53;
        }
        v63[0] = v30;
        memmove(v62, v48, v30 - 1);
        *((char *)v62 + v30 - 1) = 0;
      }
      else
      {
        v63[0] = 0;
      }
    }
    v64 = *(_DWORD *)(v27 + 88);
  }
  qmutex_unlock();
  v31 = v56;
  v32 = operator new(0x78u);
  *(_DWORD *)(v32 + 8) = 1;
  v33 = v32;
  v34 = (__m128i)(unsigned __int64)a3;
  *(_QWORD *)v32 = &off_7D7B8;
  v35 = n[1];
  v36 = src;
  *(_QWORD *)(v33 + 40) = 0;
  *(__m128i *)(v33 + 16) = _mm_unpacklo_epi64(v34, (__m128i)v31);
  *(_QWORD *)(v33 + 32) = v36;
  *(_OWORD *)(v33 + 48) = 0;
  if ( v35 )
  {
    v45 = (void *)qalloc_or_throw();
    *(_QWORD *)(v33 + 40) = v45;
    v46 = (const void *)n[0];
    *(_QWORD *)(v33 + 56) = v35;
    memcpy(v45, v46, v35);
    *(_QWORD *)(v33 + 48) = v35;
  }
  v37 = v61[0];
  *(_QWORD *)(v33 + 64) = 0;
  *(_OWORD *)(v33 + 72) = 0;
  if ( v37 )
  {
    v43 = (void *)qalloc_or_throw();
    *(_QWORD *)(v33 + 64) = v43;
    v44 = dest;
    *(_QWORD *)(v33 + 80) = v37;
    memcpy(v43, v44, v37);
    *(_QWORD *)(v33 + 72) = v37;
  }
  v38 = v63[0];
  *(_QWORD *)(v33 + 88) = 0;
  *(_OWORD *)(v33 + 96) = 0;
  if ( v38 )
  {
    v41 = (void *)qalloc_or_throw();
    *(_QWORD *)(v33 + 88) = v41;
    v42 = v62;
    *(_QWORD *)(v33 + 104) = v38;
    memcpy(v41, v42, v38);
    *(_QWORD *)(v33 + 96) = v38;
  }
  v39 = v64;
  v40 = v62;
  *(_QWORD *)v7 = v33;
  *(_DWORD *)(v33 + 112) = v39;
  if ( v40 )
  {
    v63[0] = 0;
    qfree();
  }
  if ( dest )
  {
    v61[0] = 0;
    qfree();
  }
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  return v7;
}

