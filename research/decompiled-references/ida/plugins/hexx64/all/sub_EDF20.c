__int64 __fastcall sub_EDF20(__int64 a1, __int64 a2, _BYTE *a3, __m128i *a4, unsigned __int8 a5, double a6)
{
  _BYTE *v8; // rax
  __int64 v9; // r14
  int v11; // eax
  unsigned int v12; // edx
  __int8 v13; // dl
  unsigned __int32 v14; // eax
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  void *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  size_t v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rbx
  unsigned __int64 v45; // r12
  const void *v46; // r15
  void *v47; // rax
  int v48; // eax
  __int64 *v51; // [rsp+38h] [rbp-120h]
  int v53; // [rsp+48h] [rbp-110h]
  unsigned __int8 v54; // [rsp+4Dh] [rbp-10Bh]
  char v55; // [rsp+4Eh] [rbp-10Ah]
  unsigned __int8 v56; // [rsp+4Fh] [rbp-109h]
  __int64 v57; // [rsp+50h] [rbp-108h] BYREF
  __int128 v58; // [rsp+58h] [rbp-100h]
  _QWORD v59[2]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+80h] [rbp-D8h] BYREF
  void *src; // [rsp+90h] [rbp-C8h]
  size_t n[2]; // [rsp+98h] [rbp-C0h]
  __int64 v63; // [rsp+A8h] [rbp-B0h]
  __int64 v64; // [rsp+B0h] [rbp-A8h]
  int v65; // [rsp+B8h] [rbp-A0h]
  unsigned __int8 v66[16]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-88h]
  __int64 v68; // [rsp+D8h] [rbp-80h]
  void *v69; // [rsp+E0h] [rbp-78h]
  __m128i v70; // [rsp+E8h] [rbp-70h] BYREF
  int v71; // [rsp+F8h] [rbp-60h]
  int v72; // [rsp+108h] [rbp-50h]
  unsigned __int64 v73; // [rsp+118h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v8 = sub_120380(a3, 0);
  if ( !v8 )
  {
    if ( !under_debugger )
      sub_383060(0xCB25u, a6);
LABEL_71:
    BUG();
  }
  *(_QWORD *)a1 = a2;
  v9 = *((_QWORD *)v8 + 9);
  v53 = *(_DWORD *)(v9 + 280) & 0x100;
  if ( v53 )
    return 0;
  v11 = *(_QWORD *)(v9 + 32);
  if ( *(_DWORD *)(a1 + 348) <= v11 )
  {
    v11 = *(_DWORD *)(a1 + 348);
  }
  else
  {
    v12 = *(_DWORD *)(v9 + 20) & 0xFFFFFFF0;
    if ( v12 != 64 && v12 != 208 )
      sub_E3A20(a6);
  }
  *(_DWORD *)(a1 + 348) = v11;
  v54 = sub_EB240((_QWORD *)a1, a4, (unsigned __int64)a3, a5, (_QWORD *)(*(_QWORD *)(v9 + 24) + 80LL * (v11 - 1)));
  if ( !v54 )
    return 0;
  v13 = a4[5].m128i_i8[8];
  v14 = v13 & 0xF0;
  if ( (v13 & 0xF0) == 0xC0 )
    v14 = a4[1].m128i_u32[3];
  if ( v14 <= 0x10 )
    v14 = getinf();
  if ( v14 - 208 > 0x2F && !(unsigned __int8)calc_arglocs() )
    return 0;
  v15 = *(_QWORD *)(v9 + 32);
  v16 = v15 - 1;
  if ( (int)v15 - 1 < 0 )
  {
    v18 = (int)v15;
  }
  else
  {
    v17 = *(_QWORD *)(v9 + 24) + 80LL * v16;
    while ( 1 )
    {
      if ( *(_DWORD *)(v17 + 56) != 1 )
      {
        v18 = (int)(v16 + 1);
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v17 + 64) < a4[3].m128i_i64[1] )
        break;
      --v16;
      v17 -= 80;
      if ( v16 == -1 )
      {
        v18 = 0;
        goto LABEL_62;
      }
    }
    v18 = (int)(v16 + 1);
  }
LABEL_20:
  v56 = 0;
  if ( v18 < v15 )
  {
LABEL_62:
    sub_82440((__int64 *)(v9 + 24), v18);
    v15 = *(_QWORD *)(v9 + 32);
    v56 = v54;
  }
  v19 = *(int *)(a1 + 348);
  v20 = *(_DWORD *)(a1 + 348);
  if ( v15 < v19 )
  {
    if ( !under_debugger )
      sub_383060(0xCDC8u, a6);
    goto LABEL_71;
  }
  v57 = 0;
  v58 = 0;
  if ( v19 >= a4->m128i_i64[1] )
  {
    v41 = 0;
  }
  else
  {
    v55 = 0;
    v51 = (__int64 *)(v9 + 24);
    do
    {
      v29 = a4->m128i_i64[0] + 80 * v19;
      v59[1] = 0;
      v59[0] = 0xFFFFFFFF00000000LL;
      src = nullptr;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      *(_OWORD *)n = 0;
      v30 = sub_E7B70(a1, (__int64)v59, v20, v51, v29, (__int64)a3, 0.0);
      if ( v30 == -1 )
      {
        cleanup_argloc();
        if ( src )
        {
          n[0] = 0;
          qfree((__int64)src);
        }
        clear_tinfo_t();
        sub_11CDA0((__int64)v59);
        v54 = v56;
        goto LABEL_40;
      }
      v55 |= v30 & 1;
      sub_123A40((__int64)v66, (unsigned __int8 *)v59, v31, v32);
      v68 = 0;
      v67 = si128.m128i_i64[0];
      copy_tinfo_t();
      v35 = n[0];
      v69 = nullptr;
      v70 = 0;
      if ( n[0] )
      {
        v69 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v33, v34);
        v70.m128i_i64[1] = v35;
        memcpy(v69, src, v35);
        v70.m128i_i64[0] = v35;
      }
      v71 = 0;
      copy_argloc();
      v22 = v58;
      v23 = v57;
      v72 = v65;
      if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
      {
        v57 = qvector_reserve((__int64)&v57, v57, v58 + 1, 80);
        v22 = v58;
        v23 = v57;
      }
      v24 = 80 * v22;
      v25 = v23 + v24;
      sub_123A40(v23 + v24, v66, v24, v21);
      v26 = v67;
      *(_QWORD *)(v25 + 24) = 0;
      *(_QWORD *)(v25 + 16) = v26;
      copy_tinfo_t();
      *(_DWORD *)(v25 + 56) = 0;
      v27 = v69;
      v28 = _mm_loadu_si128(&v70);
      v69 = nullptr;
      *(_QWORD *)(v25 + 32) = v27;
      *(__m128i *)(v25 + 40) = v28;
      v70 = 0;
      copy_argloc();
      *(_QWORD *)&v58 = v58 + 1;
      *(_DWORD *)(v25 + 72) = v72;
      cleanup_argloc();
      if ( v69 )
      {
        v70.m128i_i64[0] = 0;
        qfree((__int64)v69);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v66);
      cleanup_argloc();
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
      }
      ++v20;
      clear_tinfo_t();
      sub_11CDA0((__int64)v59);
      v19 = v20;
    }
    while ( (unsigned __int64)v20 < a4->m128i_i64[1] );
    v41 = v58;
    v20 = *(_DWORD *)(a1 + 348);
    if ( v55 )
      goto LABEL_51;
    v15 = *(_QWORD *)(v9 + 32);
    v19 = v20 + (int)v58;
  }
  if ( v19 < v15 )
  {
    v51 = (__int64 *)(v9 + 24);
LABEL_51:
    sub_82440(v51, v41 + v20);
    if ( (_QWORD)v58 )
    {
      v42 = 0;
      do
      {
        v43 = v57 + 80 * v42;
        v44 = *(_QWORD *)(v9 + 24) + 80LL * (*(_DWORD *)(a1 + 348) + v53);
        sub_125180(v44, (unsigned __int8 *)v43);
        *(_QWORD *)(v44 + 16) = *(_QWORD *)(v43 + 16);
        copy_tinfo_t();
        if ( v44 + 32 != v43 + 32 )
        {
          v45 = *(_QWORD *)(v43 + 40);
          if ( v45 < 2 )
          {
            *(_QWORD *)(v44 + 40) = 0;
          }
          else
          {
            v46 = *(const void **)(v43 + 32);
            v47 = *(void **)(v44 + 32);
            if ( *(_QWORD *)(v44 + 48) < v45 )
            {
              v47 = (void *)qvector_reserve(v44 + 32, *(_QWORD *)(v44 + 32), *(_QWORD *)(v43 + 40), 1);
              *(_QWORD *)(v44 + 32) = v47;
            }
            *(_QWORD *)(v44 + 40) = v45;
            memmove(v47, v46, v45 - 1);
            *(_BYTE *)(*(_QWORD *)(v44 + 32) + v45 - 1) = 0;
          }
        }
        copy_argloc();
        ++v53;
        *(_DWORD *)(v44 + 72) = *(_DWORD *)(v43 + 72);
        v42 = v53;
      }
      while ( v53 < (unsigned __int64)v58 );
    }
  }
  *(_DWORD *)(v9 + 280) |= 0x100u;
  v48 = *(_DWORD *)(a2 + 24);
  BYTE1(v48) &= ~2u;
  LOBYTE(v48) = v48 | 0x80;
  *(_DWORD *)(a2 + 24) = v48;
LABEL_40:
  v36 = v57;
  if ( v57 )
  {
    v37 = v58;
    if ( (_QWORD)v58 )
    {
      v38 = 0;
      do
      {
        v39 = v36 + 80 * v38;
        cleanup_argloc();
        v40 = *(_QWORD *)(v39 + 32);
        if ( v40 )
        {
          *(_QWORD *)(v39 + 40) = 0;
          qfree(v40);
        }
        ++v38;
        clear_tinfo_t();
        sub_11CDA0(v39);
        v36 = v57;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v36);
  }
  return v54;
}

