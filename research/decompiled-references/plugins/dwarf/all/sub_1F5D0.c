__int64 __fastcall sub_1F5D0(__int64 *a1, __int64 a2, __int64 a3)
{
  const char *v4; // r15
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // esi
  unsigned __int8 *v8; // r12
  unsigned __int8 *v9; // rbp
  char *v10; // rbp
  const char *v11; // r13
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // r14
  const char *v15; // rbx
  size_t v16; // rax
  size_t v17; // r15
  size_t v18; // r14
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // rbx
  const char *i; // rax
  void *v23; // rbp
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  unsigned __int64 v26; // rax
  void *v27; // rdi
  const char *v28; // r15
  size_t v29; // rax
  __int64 v30; // r12
  size_t v31; // rbx
  unsigned __int64 v32; // rdi
  __m128i v33; // xmm0
  unsigned __int64 v34; // rax
  size_t v35; // rax
  size_t v36; // r13
  unsigned int v37; // ebp
  unsigned __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  size_t v46; // r15
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v50; // [rsp+8h] [rbp-1538h]
  __m128i v51; // [rsp+10h] [rbp-1530h] BYREF
  __m128i v52; // [rsp+20h] [rbp-1520h] BYREF
  char v53[8]; // [rsp+30h] [rbp-1510h] BYREF
  char *s; // [rsp+38h] [rbp-1508h] BYREF
  __int128 v55; // [rsp+40h] [rbp-1500h]
  void *v56; // [rsp+58h] [rbp-14E8h] BYREF
  __m128i v57; // [rsp+60h] [rbp-14E0h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+78h] [rbp-14C8h] BYREF
  char src[1024]; // [rsp+80h] [rbp-14C0h] BYREF
  unsigned __int64 v60; // [rsp+480h] [rbp-10C0h] BYREF
  __int128 v61; // [rsp+488h] [rbp-10B8h]
  void *v62; // [rsp+498h] [rbp-10A8h] BYREF
  __int128 v63; // [rsp+4A0h] [rbp-10A0h]
  void *v64; // [rsp+4B0h] [rbp-1090h] BYREF
  __int128 v65; // [rsp+4B8h] [rbp-1088h]
  void *v66; // [rsp+4C8h] [rbp-1078h] BYREF
  __int128 v67; // [rsp+4D0h] [rbp-1070h]
  int v68; // [rsp+4E0h] [rbp-1060h]
  __int64 v69; // [rsp+4E8h] [rbp-1058h]
  __int32 v70; // [rsp+4F0h] [rbp-1050h]
  _BYTE v71[4104]; // [rsp+4F8h] [rbp-1048h] BYREF
  unsigned __int64 v72; // [rsp+1500h] [rbp-40h]

  v4 = *(const char **)a2;
  v51.m128i_i64[0] = a3;
  v72 = __readfsqword(0x28u);
  v55 = 0;
  s = nullptr;
  v50 = a2 + 28;
  v5 = *(unsigned __int16 *)(a2 + 36);
  if ( !(_WORD)v5 )
    goto LABEL_50;
  if ( (unsigned __int16)v5 <= 0xBu )
    return (unsigned int)-1;
  v6 = *(_DWORD *)(a2 + 38);
  v7 = *(_DWORD *)(a2 + 42);
  if ( *(_BYTE *)(a2 + 28) )
  {
    v6 = _byteswap_ulong(v6);
    v7 = _byteswap_ulong(v7);
  }
  if ( v5 < v6 + (unsigned __int64)v7 + 12 )
    return (unsigned int)-1;
  v8 = (unsigned __int8 *)(a2 + v6 + 50);
  if ( v7 )
  {
    v9 = &v8[v7];
    do
      sub_1F510((__int64 *)&s, (__int64)"%02x", *v8++);
    while ( v8 != v9 );
    v51.m128i_i32[3] = *(_DWORD *)(a2 + 24);
    if ( (_QWORD)v55 )
      v10 = s;
    else
      v10 = (char *)::src;
  }
  else
  {
LABEL_50:
    v10 = (char *)::src;
    v51.m128i_i32[3] = *(_DWORD *)(a2 + 24);
  }
  v11 = ::src;
  if ( *(_QWORD *)(v51.m128i_i64[0] + 8) )
    v11 = *(const char **)v51.m128i_i64[0];
  v60 = 0;
  v58 = off_C7478;
  v62 = nullptr;
  v61 = 0;
  v63 = 0;
  if ( v4 )
  {
    v12 = strlen(v4);
    v13 = v12 + 1;
    v14 = v12;
    v62 = (void *)qvector_reserve(&v62, 0, v12 + 1, 1);
    *(_QWORD *)&v63 = v13;
    memmove(v62, v4, v14);
    *((_BYTE *)v62 + v14) = 0;
  }
  v64 = nullptr;
  v65 = 0;
  v15 = (const char *)(a2 + 1062);
  v16 = strlen(v15);
  v17 = v16 + 1;
  v18 = v16;
  v64 = (void *)qvector_reserve(&v64, 0, v16 + 1, 1);
  *(_QWORD *)&v65 = v17;
  memmove(v64, v15, v18);
  *((_BYTE *)v64 + v18) = 0;
  v66 = nullptr;
  v67 = 0;
  if ( v10 )
  {
    v19 = strlen(v10);
    v20 = v19 + 1;
    v21 = v19;
    v66 = (void *)qvector_reserve(&v66, 0, v19 + 1, 1);
    *(_QWORD *)&v67 = v20;
    memmove(v66, v10, v21);
    *((_BYTE *)v66 + v21) = 0;
  }
  v68 = 0;
  src[0] = 0;
  qstrncpy(v71, v11, 4096);
  for ( i = (const char *)qstrtok(v71, ";", v53); ; i = (const char *)qstrtok(0, ";", v53) )
  {
    v28 = i;
    if ( !i )
      break;
    v56 = nullptr;
    v57 = 0;
    v29 = strlen(i);
    v30 = v29 + 1;
    v31 = v29;
    v56 = (void *)qvector_reserve(&v56, 0, v29 + 1, 1);
    v57.m128i_i64[0] = v30;
    memmove(v56, v28, v31);
    *((_BYTE *)v56 + v31) = 0;
    v45 = v61;
    v44 = v60;
    v32 = v61 + 1;
    if ( (unsigned __int64)&v56 < v60 || (unsigned __int64)&v56 >= v60 + 24LL * *((_QWORD *)&v61 + 1) )
    {
      if ( *((_QWORD *)&v61 + 1) < v32 )
      {
        v60 = qvector_reserve(&v60, v60, v61 + 1, 24);
        v44 = v60;
        v45 = v61;
      }
      v33 = _mm_loadu_si128(&v57);
      v34 = v44 + 24 * v45;
      *(_QWORD *)v34 = v56;
      *(__m128i *)(v34 + 8) = v33;
      *(_QWORD *)&v61 = v61 + 1;
    }
    else
    {
      v23 = v56;
      v24 = _mm_loadl_epi64(&v57);
      v56 = nullptr;
      v25 = _mm_loadl_epi64((const __m128i *)&v57.m128i_u64[1]);
      v57 = 0;
      if ( *((_QWORD *)&v61 + 1) < v32 )
      {
        v52.m128i_i64[0] = v25.m128i_i64[0];
        v51.m128i_i64[0] = v24.m128i_i64[0];
        v60 = qvector_reserve(&v60, v60, v61 + 1, 24);
        v44 = v60;
        v25 = _mm_loadl_epi64(&v52);
        v45 = v61;
        v24 = _mm_loadl_epi64(&v51);
      }
      v26 = v44 + 24 * v45;
      *(_QWORD *)v26 = v23;
      v27 = v56;
      *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v24, v25);
      *(_QWORD *)&v61 = v61 + 1;
      if ( v27 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v27);
      }
    }
  }
  v58 = off_C74A0;
  v69 = v50;
  v70 = v51.m128i_i32[3];
  if ( (unsigned int)sub_1A300((__int64)&v58) )
  {
    if ( a1 )
    {
      v35 = strlen(src);
      v36 = v35;
      if ( v35 )
      {
        v46 = v35 + 1;
        v47 = (void *)*a1;
        if ( a1[2] < v35 + 1 )
        {
          v48 = qvector_reserve(a1, *a1, v46, 1);
          *a1 = v48;
          v47 = (void *)v48;
        }
        a1[1] = v46;
        memmove(v47, src, v36);
        *(_BYTE *)(*a1 + v36) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    v37 = 0;
  }
  else
  {
    v37 = -1;
  }
  v58 = off_C7478;
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  v38 = v60;
  if ( v60 )
  {
    v39 = v61;
    if ( (_QWORD)v61 )
    {
      v40 = 0;
      do
      {
        v41 = (__int64 *)(v38 + 24 * v40);
        v42 = *v41;
        if ( *v41 )
        {
          v41[1] = 0;
          qfree(v42);
          v38 = v60;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v38);
  }
  if ( s )
  {
    *(_QWORD *)&v55 = 0;
    qfree(s);
  }
  return v37;
}
