__int64 __fastcall sub_9750(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _DWORD *a5, char a6, __int64 a7)
{
  size_t v9; // r13
  size_t v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // rdx
  char v15; // al
  __m128i v16; // xmm0
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rbx
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  __int64 v31; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-F0h]
  __m128i v33; // [rsp+30h] [rbp-D8h]
  void *v34; // [rsp+40h] [rbp-C8h]
  __int128 v35; // [rsp+48h] [rbp-C0h]
  void *v36; // [rsp+58h] [rbp-B0h]
  __int128 v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __m128i v39; // [rsp+78h] [rbp-90h]
  __m128i v40; // [rsp+88h] [rbp-80h]
  __m128i v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  char v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !a1 || a4 < 0 )
  {
LABEL_16:
    if ( a5 )
      *a5 = 0;
    return -1;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v34 = nullptr;
  v33 = _mm_loadu_si128((const __m128i *)a2);
  v35 = 0;
  if ( v9 )
  {
    v28 = (void *)qalloc_or_throw(v9);
    v29 = *(const void **)(a2 + 16);
    *((_QWORD *)&v35 + 1) = v9;
    v34 = v28;
    memcpy(v28, v29, v9);
    *(_QWORD *)&v35 = v9;
  }
  v12 = *(_QWORD *)(a2 + 48);
  v36 = nullptr;
  v37 = 0;
  if ( v12 )
  {
    v26 = (void *)qalloc_or_throw(v12);
    v27 = *(const void **)(a2 + 40);
    v36 = v26;
    *((_QWORD *)&v37 + 1) = v12;
    memcpy(v26, v27, v12);
    *(_QWORD *)&v37 = v12;
  }
  v38 = 0;
  copy_tinfo_t(&v38, a2 + 64);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v14 = *(_QWORD *)(a2 + 128);
  v42 = *(_QWORD *)(a2 + 120);
  v15 = *(_BYTE *)(a2 + 136);
  v39 = v13;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v43 = v14;
  v44 = v15;
  v40 = v16;
  v17 = (_QWORD *)(*a3 + 144 * a4);
  v41 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v18 = v17[1];
  v19 = *v17 + v33.m128i_i64[0] + 8 * a7;
  v31 = 0;
  v33 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v18);
  v32 = 0;
  build_stkvar_xrefs(&v31, a1, v19 >> 3, (v19 + v18) >> 3);
  v20 = v31;
  v21 = 0;
  v22 = 0;
  if ( !(_QWORD)v32 )
  {
LABEL_10:
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    clear_tinfo_t(&v38);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    goto LABEL_16;
  }
  while ( 1 )
  {
    v23 = (__int64 *)(v31 + 16 * v22);
    if ( (*((_BYTE *)v23 + 9) == 3) == a6 )
      break;
    v22 = ++v21;
    if ( v21 >= (unsigned __int64)v32 )
      goto LABEL_10;
  }
  if ( a5 )
    *a5 = *((unsigned __int8 *)v23 + 8);
  v24 = *v23;
  if ( v20 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v20);
  }
  clear_tinfo_t(&v38);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v24;
}

