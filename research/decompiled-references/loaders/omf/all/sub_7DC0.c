unsigned __int64 __fastcall sub_7DC0(__int64 *a1, __int8 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  _BOOL8 v4; // rcx
  int v5; // eax
  size_t v6; // rbp
  void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // r11
  __int64 *v11; // r10
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int8 v14; // r8
  __int16 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // rsi
  const char *v20; // rax
  __int64 v21; // rdx
  _BOOL8 v22; // rcx
  const char *v23; // rbp
  size_t v24; // rax
  size_t v25; // r12
  __int64 v26; // rax
  unsigned __int8 v27; // di
  __int64 v28; // rdx
  _BOOL8 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // xmm2_8
  __int8 v33; // r8
  int v34; // r9d
  __int64 v35; // r13
  size_t v36; // r11
  __int64 *v37; // r10
  size_t v38; // r14
  __int64 v39; // rbp
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 *v42; // r15
  int v43; // r13d
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // rdi
  void *v49; // rdi
  size_t v50; // r13
  __int64 v53; // [rsp+10h] [rbp-C8h]
  void *v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+18h] [rbp-C0h]
  __m128i v56; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+30h] [rbp-A8h]
  size_t v58; // [rsp+38h] [rbp-A0h]
  size_t v59; // [rsp+40h] [rbp-98h]
  __int64 *v60; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-80h]
  size_t v63; // [rsp+68h] [rbp-70h]
  size_t v64; // [rsp+70h] [rbp-68h]
  __m128i v65; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int16 v66; // [rsp+88h] [rbp-50h]
  __int8 v67; // [rsp+8Ah] [rbp-4Eh]
  unsigned __int64 v68; // [rsp+98h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  if ( a1[6] >= (unsigned __int64)a1[1] )
    return v68 - __readfsqword(0x28u);
  v2 = a1;
  while ( 1 )
  {
    v19 = -1;
    src = nullptr;
    *(_OWORD *)n = 0;
    v20 = sub_7530((__int64)v2, 0xFFFFFFFFFFFFFFFFLL);
    v23 = v20;
    if ( v20 && (v24 = strlen(v20), (v25 = v24) != 0) )
    {
      v49 = src;
      v50 = v24 + 1;
      if ( n[1] < v24 + 1 )
      {
        src = (void *)qvector_reserve(&src, src, v50, 1);
        v49 = src;
      }
      v19 = (__int64)v23;
      n[0] = v50;
      memmove(v49, v23, v25);
      *((_BYTE *)src + v25) = 0;
    }
    else
    {
      n[0] = 0;
    }
    HIBYTE(v66) = 0;
    v64 = 0;
    v65.m128i_i64[1] = 0;
    v65.m128i_i64[0] = (unsigned __int16)sub_6A10((__int64)v2, v19, v21, v22);
    v67 = a2;
    sub_5890((__int64)v2, -1, 1);
    v26 = v2[6];
    v2[6] = v26 + 1;
    v3 = *v2;
    v27 = *(_BYTE *)(*v2 + v26);
    LOBYTE(v66) = v27;
    if ( v27 == 97 )
    {
      LODWORD(v63) = sub_72D0((__int64)v2, -1, v3, v4);
      v5 = sub_72D0((__int64)v2, -1, v28, v29);
      goto LABEL_7;
    }
    if ( v27 != 98 )
      break;
LABEL_6:
    LODWORD(v63) = sub_72D0((__int64)v2, -1, v3, v4);
    v5 = 1;
LABEL_7:
    v6 = n[0];
    HIDWORD(v63) = v5;
    v7 = nullptr;
    if ( n[0] )
    {
      v7 = (void *)qalloc_or_throw(n[0]);
      memcpy(v7, src, v6);
    }
    v9 = *((_QWORD *)&xmmword_14508 + 1);
    v8 = xmmword_14508;
    v10 = v63;
    v11 = (__int64 *)v64;
    v12 = _mm_loadl_epi64(&v65);
    v13 = _mm_loadl_epi64((const __m128i *)&v65.m128i_u64[1]);
    v14 = v67;
    v15 = v66;
    if ( *((_QWORD *)&xmmword_14508 + 1) < (unsigned __int64)(xmmword_14508 + 1) )
    {
      v59 = v64;
      v58 = v63;
      LODWORD(v57) = v66;
      v56.m128i_i8[8] = v67;
      v56.m128i_i64[0] = v13.m128i_i64[0];
      v30 = qvector_reserve(&qword_14500, 0, xmmword_14508 + 1, 59);
      v31 = *((_QWORD *)&xmmword_14508 + 1);
      *((_QWORD *)&xmmword_14508 + 1) = v9;
      v32 = v56.m128i_i64[0];
      v33 = v56.m128i_i8[8];
      v34 = v57;
      v53 = v31;
      v35 = qword_14500;
      v36 = v58;
      v37 = (__int64 *)v59;
      if ( (__int64)xmmword_14508 - 1 >= 0 )
      {
        v56.m128i_i64[0] = v30;
        v38 = v58;
        LOBYTE(v58) = v56.m128i_i8[8];
        v54 = v7;
        v59 = v6;
        v39 = v30;
        v60 = v2;
        v40 = v30 + 59 * xmmword_14508;
        v41 = qword_14500;
        v42 = v37;
        v56.m128i_i64[1] = v12.m128i_i64[0];
        v43 = v57;
        v57 = v32;
        do
        {
          v44 = *(_QWORD *)v41;
          v45 = _mm_loadu_si128((const __m128i *)(v41 + 8));
          *(_QWORD *)v41 = 0;
          *(_QWORD *)(v41 + 16) = 0;
          *(_QWORD *)v39 = v44;
          *(__m128i *)(v39 + 8) = v45;
          v46 = _mm_loadu_si128((const __m128i *)(v41 + 40));
          *(_QWORD *)(v39 + 24) = *(_QWORD *)(v41 + 24);
          v47 = *(_QWORD *)(v41 + 32);
          *(__m128i *)(v39 + 40) = v46;
          *(_QWORD *)(v39 + 32) = v47;
          *(_BYTE *)(v39 + 56) = *(_BYTE *)(v41 + 56);
          *(_WORD *)(v39 + 57) = *(_WORD *)(v41 + 57);
          v48 = *(_QWORD *)v41;
          if ( *(_QWORD *)v41 )
          {
            *(_QWORD *)(v41 + 8) = 0;
            qfree(v48);
          }
          v39 += 59;
          v41 += 59;
        }
        while ( v39 != v40 );
        v34 = v43;
        v7 = v54;
        v30 = v56.m128i_i64[0];
        v36 = v38;
        v12.m128i_i64[0] = v56.m128i_i64[1];
        v6 = v59;
        v37 = v42;
        v32 = v57;
        v33 = v58;
        v2 = v60;
        v35 = qword_14500;
      }
      v60 = v37;
      v59 = v36;
      LODWORD(v58) = v34;
      LOBYTE(v57) = v33;
      v55 = v30;
      v56.m128i_i64[1] = v32;
      v56.m128i_i64[0] = v12.m128i_i64[0];
      qfree(v35);
      v16 = v55;
      v11 = v60;
      v10 = v59;
      v15 = v58;
      v14 = v57;
      qword_14500 = v55;
      v13 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
      v12 = _mm_loadl_epi64(&v56);
      *((_QWORD *)&xmmword_14508 + 1) = v53;
      v8 = xmmword_14508;
    }
    else
    {
      v16 = qword_14500;
    }
    v17 = v16 + 59 * v8;
    *(_QWORD *)v17 = v7;
    v18 = src;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)&xmmword_14508 = xmmword_14508 + 1;
    *(_QWORD *)(v17 + 24) = v10;
    *(_QWORD *)(v17 + 32) = v11;
    *(_WORD *)(v17 + 56) = v15;
    *(_BYTE *)(v17 + 58) = v14;
    *(__m128i *)(v17 + 40) = _mm_unpacklo_epi64(v12, v13);
    if ( v18 )
    {
      n[0] = 0;
      qfree(v18);
    }
    if ( v2[6] >= (unsigned __int64)v2[1] )
      return v68 - __readfsqword(0x28u);
  }
  if ( (unsigned __int8)(v27 - 1) <= 0x5Eu )
  {
    v65.m128i_i64[1] = v27;
    sub_4680(v27);
    goto LABEL_6;
  }
  sub_5080((__int64)"Bad input file: illegal COMDEF record (%02X) at %08llX", (char)v27, qword_145E0);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v68 - __readfsqword(0x28u);
}
