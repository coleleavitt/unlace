__int64 __fastcall sub_EA4E0(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  int v10; // eax
  unsigned int v11; // edx
  __int8 v12; // dl
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  void *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // r8
  int v27; // eax
  size_t v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rbx
  unsigned __int64 v36; // r12
  const void *v37; // r15
  void *v38; // rax
  int v39; // eax
  __int64 *v42; // [rsp+38h] [rbp-120h]
  int v44; // [rsp+48h] [rbp-110h]
  unsigned __int8 v45; // [rsp+4Dh] [rbp-10Bh]
  char v46; // [rsp+4Eh] [rbp-10Ah]
  unsigned __int8 v47; // [rsp+4Fh] [rbp-109h]
  __int64 v48; // [rsp+50h] [rbp-108h]
  __int128 v49; // [rsp+58h] [rbp-100h]
  _QWORD v50[2]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+80h] [rbp-D8h]
  void *src; // [rsp+90h] [rbp-C8h]
  size_t n[2]; // [rsp+98h] [rbp-C0h]
  __int64 v54; // [rsp+A8h] [rbp-B0h]
  __int64 v55; // [rsp+B0h] [rbp-A8h]
  int v56; // [rsp+B8h] [rbp-A0h]
  _BYTE v57[16]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-88h]
  __int64 v59; // [rsp+D8h] [rbp-80h]
  void *v60; // [rsp+E0h] [rbp-78h]
  __m128i v61; // [rsp+E8h] [rbp-70h] BYREF
  int v62; // [rsp+F8h] [rbp-60h]
  int v63; // [rsp+108h] [rbp-50h]
  unsigned __int64 v64; // [rsp+118h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v7 = sub_11C940(a3, 0);
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_37EEE0(52005);
LABEL_71:
    BUG();
  }
  *(_QWORD *)a1 = a2;
  v8 = *(_QWORD *)(v7 + 72);
  v44 = *(_DWORD *)(v8 + 280) & 0x100;
  if ( v44 )
    return 0;
  v10 = *(_QWORD *)(v8 + 32);
  if ( *(_DWORD *)(a1 + 348) <= v10 )
  {
    v10 = *(_DWORD *)(a1 + 348);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 20) & 0xFFFFFFF0;
    if ( v11 != 64 && v11 != 208 )
      sub_DFFE0();
  }
  *(_DWORD *)(a1 + 348) = v10;
  v45 = sub_E7800((_QWORD *)a1, a4, a3, a5, (_QWORD *)(*(_QWORD *)(v8 + 24) + 80LL * (v10 - 1)));
  if ( !v45 )
    return 0;
  v12 = a4[5].m128i_i8[8];
  v13 = v12 & 0xF0;
  if ( (v12 & 0xF0) == 0xC0 )
    v13 = a4[1].m128i_u32[3];
  if ( v13 <= 0x10 )
    v13 = getinf();
  if ( v13 - 208 > 0x2F && !(unsigned __int8)calc_arglocs() )
    return 0;
  v14 = *(_QWORD *)(v8 + 32);
  v15 = v14 - 1;
  if ( (int)v14 - 1 < 0 )
  {
    v17 = (int)v14;
  }
  else
  {
    v16 = *(_QWORD *)(v8 + 24) + 80LL * v15;
    while ( 1 )
    {
      if ( *(_DWORD *)(v16 + 56) != 1 )
      {
        v17 = (int)(v15 + 1);
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v16 + 64) < a4[3].m128i_i64[1] )
        break;
      --v15;
      v16 -= 80;
      if ( v15 == -1 )
      {
        v17 = 0;
        goto LABEL_62;
      }
    }
    v17 = (int)(v15 + 1);
  }
LABEL_20:
  v47 = 0;
  if ( v17 < v14 )
  {
LABEL_62:
    sub_7EA00((__int64 *)(v8 + 24), v17);
    v14 = *(_QWORD *)(v8 + 32);
    v47 = v45;
  }
  v18 = *(int *)(a1 + 348);
  v19 = *(_DWORD *)(a1 + 348);
  if ( v14 < v18 )
  {
    if ( !under_debugger )
      sub_37EEE0(52680);
    goto LABEL_71;
  }
  v48 = 0;
  v49 = 0;
  if ( v18 >= a4->m128i_i64[1] )
  {
    v32 = 0;
  }
  else
  {
    v46 = 0;
    v42 = (__int64 *)(v8 + 24);
    do
    {
      v26 = a4->m128i_i64[0] + 80 * v18;
      v50[1] = 0;
      v50[0] = 0xFFFFFFFF00000000LL;
      src = nullptr;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
      *(_OWORD *)n = 0;
      v27 = sub_E4130(a1, (__int64)v50, v19, v42, v26, a3);
      if ( v27 == -1 )
      {
        cleanup_argloc();
        if ( src )
        {
          n[0] = 0;
          qfree();
        }
        clear_tinfo_t();
        sub_119360(v50);
        v45 = v47;
        goto LABEL_40;
      }
      v46 |= v27 & 1;
      sub_120000(v57, v50);
      v59 = 0;
      v58 = si128.m128i_i64[0];
      copy_tinfo_t();
      v28 = n[0];
      v60 = nullptr;
      v61 = 0;
      if ( n[0] )
      {
        v60 = (void *)qalloc_or_throw();
        v61.m128i_i64[1] = v28;
        memcpy(v60, src, v28);
        v61.m128i_i64[0] = v28;
      }
      v62 = 0;
      copy_argloc();
      v20 = v49;
      v21 = v48;
      v63 = v56;
      if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
      {
        v48 = qvector_reserve();
        v20 = v49;
        v21 = v48;
      }
      v22 = v21 + 80 * v20;
      sub_120000(v22, v57);
      v23 = v58;
      *(_QWORD *)(v22 + 24) = 0;
      *(_QWORD *)(v22 + 16) = v23;
      copy_tinfo_t();
      *(_DWORD *)(v22 + 56) = 0;
      v24 = v60;
      v25 = _mm_loadu_si128(&v61);
      v60 = nullptr;
      *(_QWORD *)(v22 + 32) = v24;
      *(__m128i *)(v22 + 40) = v25;
      v61 = 0;
      copy_argloc();
      *(_QWORD *)&v49 = v49 + 1;
      *(_DWORD *)(v22 + 72) = v63;
      cleanup_argloc();
      if ( v60 )
      {
        v61.m128i_i64[0] = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_119360(v57);
      cleanup_argloc();
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      ++v19;
      clear_tinfo_t();
      sub_119360(v50);
      v18 = v19;
    }
    while ( (unsigned __int64)v19 < a4->m128i_i64[1] );
    v32 = v49;
    v19 = *(_DWORD *)(a1 + 348);
    if ( v46 )
      goto LABEL_51;
    v14 = *(_QWORD *)(v8 + 32);
    v18 = v19 + (int)v49;
  }
  if ( v18 < v14 )
  {
    v42 = (__int64 *)(v8 + 24);
LABEL_51:
    sub_7EA00(v42, v32 + v19);
    if ( (_QWORD)v49 )
    {
      v33 = 0;
      do
      {
        v34 = v48 + 80 * v33;
        v35 = *(_QWORD *)(v8 + 24) + 80LL * (*(_DWORD *)(a1 + 348) + v44);
        sub_121740(v35);
        *(_QWORD *)(v35 + 16) = *(_QWORD *)(v34 + 16);
        copy_tinfo_t();
        if ( v35 + 32 != v34 + 32 )
        {
          v36 = *(_QWORD *)(v34 + 40);
          if ( v36 < 2 )
          {
            *(_QWORD *)(v35 + 40) = 0;
          }
          else
          {
            v37 = *(const void **)(v34 + 32);
            v38 = *(void **)(v35 + 32);
            if ( *(_QWORD *)(v35 + 48) < v36 )
            {
              v38 = (void *)qvector_reserve();
              *(_QWORD *)(v35 + 32) = v38;
            }
            *(_QWORD *)(v35 + 40) = v36;
            memmove(v38, v37, v36 - 1);
            *(_BYTE *)(*(_QWORD *)(v35 + 32) + v36 - 1) = 0;
          }
        }
        copy_argloc();
        ++v44;
        *(_DWORD *)(v35 + 72) = *(_DWORD *)(v34 + 72);
        v33 = v44;
      }
      while ( v44 < (unsigned __int64)v49 );
    }
  }
  *(_DWORD *)(v8 + 280) |= 0x100u;
  v39 = *(_DWORD *)(a2 + 24);
  BYTE1(v39) &= ~2u;
  LOBYTE(v39) = v39 | 0x80;
  *(_DWORD *)(a2 + 24) = v39;
LABEL_40:
  v29 = v48;
  if ( v48 )
  {
    if ( (_QWORD)v49 )
    {
      v30 = 0;
      do
      {
        v31 = v29 + 80 * v30;
        cleanup_argloc();
        if ( *(_QWORD *)(v31 + 32) )
        {
          *(_QWORD *)(v31 + 40) = 0;
          qfree();
        }
        ++v30;
        clear_tinfo_t();
        sub_119360(v31);
        v29 = v48;
      }
      while ( (_QWORD)v49 != v30 );
    }
    qfree();
  }
  return v45;
}

