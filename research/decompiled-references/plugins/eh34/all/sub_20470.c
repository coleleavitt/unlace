__int64 __fastcall sub_20470(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  char *v6; // rax
  char v7; // dl
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r15
  size_t v12; // rbp
  __int64 v13; // rax
  size_t v14; // rdx
  void *v15; // rsi
  __int64 v16; // rdi
  size_t v17; // rbp
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  char v20; // al
  size_t v21; // rdi
  unsigned int v22; // eax
  __int64 *v23; // r9
  __int64 v24; // r8
  size_t v25; // rbp
  __int64 v26; // rax
  size_t v27; // rdx
  void *v28; // rsi
  __int64 v29; // rdi
  size_t v30; // rbp
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  size_t v33; // rdi
  unsigned int v34; // eax
  __int64 *v35; // r9
  __int64 v36; // r8
  size_t v37; // rbp
  __int64 v38; // rax
  size_t v39; // rdx
  void *v40; // rsi
  size_t v41; // rax
  __int64 v42; // rdi
  __m128i v43; // xmm2
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 i; // r14
  __int64 v49; // rdx
  __int64 v50; // rdi
  __m128i v51; // xmm3
  size_t v52; // rdi
  __int64 v53; // rbp
  size_t v54; // r14
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 j; // r15
  __int64 v58; // rdx
  __int64 v59; // rdi
  char v60; // al
  char *v61; // rax
  char v62; // dl
  void **v63; // r14
  void **v64; // r14
  __int64 v65; // rax
  __int64 v66; // r12
  __m128i v67; // [rsp+0h] [rbp-138h] BYREF
  __int64 v68; // [rsp+18h] [rbp-120h]
  void **p_src; // [rsp+20h] [rbp-118h]
  size_t v70; // [rsp+28h] [rbp-110h]
  __m128i v71; // [rsp+30h] [rbp-108h] BYREF
  void *src; // [rsp+48h] [rbp-F0h] BYREF
  char *v73; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v74; // [rsp+58h] [rbp-E0h]
  __int64 v75; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v76; // [rsp+78h] [rbp-C0h]
  __int64 v77; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+98h] [rbp-A0h]
  __int64 v79; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v80; // [rsp+B8h] [rbp-80h]
  size_t v81; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v82; // [rsp+D8h] [rbp-60h] BYREF
  char v83; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v84; // [rsp+F8h] [rbp-40h]

  v68 = a2;
  v84 = __readfsqword(0x28u);
  *(_BYTE *)a1 = -1;
  *(_QWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 132) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v3 = sub_1DD10();
  v4 = netnode_altval(v3, a2, 360);
  if ( v4 )
  {
    v74 = 0;
    v73 = nullptr;
    if ( netnode_qgetblob(v3, &v73, 1, v4 - 1, 3) > 0 )
    {
      v6 = v73;
      v7 = 0;
      v8 = (unsigned __int64)&v73[v74];
      src = v73;
      if ( v73 < &v73[(unsigned __int64)v74] )
      {
        v7 = *v73;
        v6 = v73 + 1;
      }
      *(_BYTE *)a1 = v7;
      src = v6;
      p_src = &src;
      v9 = unpack_dq(&src, v8);
      v76 = 0;
      v75 = 0;
      *(_QWORD *)(a1 + 8) = v68 + 1 - v9;
      v10 = unpack_dd(&src, v8);
      if ( v10 )
      {
        v11 = v76;
        v12 = v10;
        v13 = v75;
        v14 = v76 + v12;
        if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)v76 + v12 )
        {
          v70 = v76 + v12;
          v67.m128i_i64[0] = (__int64)&v75;
          v13 = qvector_reserve(&v75, v75, v14, 1);
          v14 = v70;
          v75 = v13;
        }
        v15 = src;
        *(_QWORD *)&v76 = v14;
        if ( !__CFADD__(v12, src) && v8 >= (unsigned __int64)src + v12 )
        {
          src = (char *)src + v12;
          v67.m128i_i64[0] = (__int64)&v75;
          memcpy((void *)(v13 + v11), v15, v12);
        }
      }
      sub_1F4E0((__int64)&v81, *(_QWORD *)(a1 + 8), &v75);
      v16 = *(_QWORD *)(a1 + 64);
      v17 = v81;
      v81 = 0;
      v18 = _mm_loadu_si128(&v82);
      v82 = 0;
      if ( v16 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        v67 = v18;
        qfree(v16);
        v19 = _mm_load_si128(&v67);
        *(_QWORD *)(a1 + 64) = v17;
        v20 = v83;
        v21 = v81;
        *(__m128i *)(a1 + 72) = v19;
        *(_BYTE *)(a1 + 88) = v20;
        if ( v21 )
        {
          v82.m128i_i64[0] = 0;
          qfree(v21);
        }
      }
      else
      {
        v60 = v83;
        *(_QWORD *)(a1 + 64) = v17;
        *(__m128i *)(a1 + 72) = v18;
        *(_BYTE *)(a1 + 88) = v60;
      }
      v77 = 0;
      v78 = 0;
      v22 = unpack_dd(p_src, v8);
      v23 = &v77;
      if ( v22 )
      {
        v24 = v78;
        v25 = v22;
        v23 = &v77;
        v26 = v77;
        v27 = v78 + v25;
        if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)v78 + v25 )
        {
          v71.m128i_i64[0] = v78;
          v70 = v78 + v25;
          v67.m128i_i64[0] = (__int64)&v77;
          v26 = qvector_reserve(&v77, v77, v27, 1);
          v77 = v26;
          v24 = v71.m128i_i64[0];
          v27 = v70;
          v23 = (__int64 *)v67.m128i_i64[0];
        }
        v28 = src;
        *(_QWORD *)&v78 = v27;
        if ( !__CFADD__(v25, src) && v8 >= (unsigned __int64)src + v25 )
        {
          src = (char *)src + v25;
          v67.m128i_i64[0] = (__int64)v23;
          memcpy((void *)(v26 + v24), v28, v25);
          v23 = (__int64 *)v67.m128i_i64[0];
        }
      }
      sub_1F7E0((__int64)&v81, *(_QWORD *)(a1 + 8), v23);
      v29 = *(_QWORD *)(a1 + 16);
      v30 = v81;
      v81 = 0;
      v31 = _mm_loadu_si128(&v82);
      v82 = 0;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v67 = v31;
        qfree(v29);
        v32 = _mm_load_si128(&v67);
        *(_QWORD *)(a1 + 16) = v30;
        v33 = v81;
        *(__m128i *)(a1 + 24) = v32;
        if ( v33 )
        {
          v82.m128i_i64[0] = 0;
          qfree(v33);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v30;
        *(__m128i *)(a1 + 24) = v31;
      }
      v79 = 0;
      v80 = 0;
      v34 = unpack_dd(p_src, v8);
      v35 = &v79;
      if ( v34 )
      {
        v36 = v80;
        v37 = v34;
        v35 = &v79;
        v38 = v79;
        v39 = v80 + v37;
        if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)v80 + v37 )
        {
          v71.m128i_i64[0] = v80;
          v70 = v80 + v37;
          v67.m128i_i64[0] = (__int64)&v79;
          v38 = qvector_reserve(&v79, v79, v39, 1);
          v79 = v38;
          v36 = v71.m128i_i64[0];
          v39 = v70;
          v35 = (__int64 *)v67.m128i_i64[0];
        }
        v40 = src;
        *(_QWORD *)&v80 = v39;
        if ( !__CFADD__(v37, src) && v8 >= (unsigned __int64)src + v37 )
        {
          src = (char *)src + v37;
          v67.m128i_i64[0] = (__int64)v35;
          memcpy((void *)(v38 + v36), v40, v37);
          v35 = (__int64 *)v67.m128i_i64[0];
        }
      }
      sub_20000((__int64)&v81, *(_QWORD *)(a1 + 8), (__int64)v35);
      v41 = v81;
      v42 = *(_QWORD *)(a1 + 40);
      v81 = 0;
      v43 = _mm_loadu_si128(&v82);
      v82 = 0;
      v70 = v41;
      v71 = v43;
      if ( v42 )
      {
        v67.m128i_i64[0] = *(_QWORD *)(a1 + 48);
        if ( v67.m128i_i64[0] )
        {
          v44 = 0;
          do
          {
            v45 = v42 + 40 * v44;
            v46 = *(_QWORD *)(v45 + 16);
            if ( v46 )
            {
              v47 = *(_QWORD *)(v45 + 24);
              if ( v47 )
              {
                for ( i = 0; i != v47; ++i )
                {
                  v49 = v46 + 72 * i;
                  v50 = *(_QWORD *)(v49 + 32);
                  if ( v50 )
                  {
                    *(_QWORD *)(v49 + 40) = 0;
                    qfree(v50);
                    v46 = *(_QWORD *)(v45 + 16);
                  }
                }
              }
              *(_QWORD *)(v45 + 24) = 0;
              qfree(v46);
              v42 = *(_QWORD *)(a1 + 40);
            }
            ++v44;
          }
          while ( v67.m128i_i64[0] != v44 );
        }
        *(_QWORD *)(a1 + 48) = 0;
        qfree(v42);
        v51 = _mm_load_si128(&v71);
        v52 = v81;
        *(_QWORD *)(a1 + 40) = v70;
        *(__m128i *)(a1 + 48) = v51;
        if ( v52 )
        {
          v67.m128i_i64[0] = v82.m128i_i64[0];
          if ( v82.m128i_i64[0] )
          {
            v53 = 0;
            do
            {
              v54 = v52 + 40 * v53;
              v55 = *(_QWORD *)(v54 + 16);
              if ( v55 )
              {
                v56 = *(_QWORD *)(v54 + 24);
                if ( v56 )
                {
                  for ( j = 0; j != v56; ++j )
                  {
                    v58 = v55 + 72 * j;
                    v59 = *(_QWORD *)(v58 + 32);
                    if ( v59 )
                    {
                      *(_QWORD *)(v58 + 40) = 0;
                      qfree(v59);
                      v55 = *(_QWORD *)(v54 + 16);
                    }
                  }
                }
                *(_QWORD *)(v54 + 24) = 0;
                qfree(v55);
                v52 = v81;
              }
              ++v53;
            }
            while ( v67.m128i_i64[0] != v53 );
          }
          v82.m128i_i64[0] = 0;
          qfree(v52);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 40) = v41;
        *(__m128i *)(a1 + 48) = v43;
      }
      if ( *(_BYTE *)a1 == 3 )
      {
        v64 = p_src;
        *(_DWORD *)(a1 + 96) = unpack_dd(p_src, v8);
        *(_DWORD *)(a1 + 120) = unpack_dd(v64, v8);
        v65 = unpack_dq(v64, v8);
        if ( v65 )
        {
          v66 = v68;
          *(_BYTE *)(a1 + 112) = 1;
          *(_QWORD *)(a1 + 104) = v65 - 1 + v66;
        }
      }
      else if ( *(_BYTE *)a1 == 4 )
      {
        v61 = (char *)src;
        v62 = 0;
        if ( (unsigned __int64)src < v8 )
        {
          v62 = *(_BYTE *)src;
          v61 = (char *)src + 1;
        }
        v63 = p_src;
        *(_BYTE *)(a1 + 128) = v62;
        src = v61;
        *(_DWORD *)(a1 + 132) = unpack_dd(v63, v8);
        *(_DWORD *)(a1 + 136) = unpack_dd(v63, v8);
      }
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        qfree(v79);
      }
      if ( v77 )
      {
        *(_QWORD *)&v78 = 0;
        qfree(v77);
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75);
      }
    }
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
  }
  return a1;
}
