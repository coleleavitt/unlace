__int64 __fastcall sub_E8790(__int64 a1, __int64 a2, char a3)
{
  unsigned int tinfo_property; // eax
  __int64 v6; // rdi
  __int64 (*v7)(); // rcx
  unsigned int tinfo_details; // ebp
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (*v13)(); // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int *v17; // rsi
  char *v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  signed __int64 v21; // r9
  __int64 v22; // rax
  __m128i v23; // xmm0
  void *v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // rbp
  __int64 v27; // rdx
  char *v28; // rdi
  unsigned __int64 v29; // r13
  __int64 v30; // rbx
  char *v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdi
  char *v40; // rax
  void *v41; // rax
  size_t n; // [rsp+18h] [rbp-1C0h]
  size_t na; // [rsp+18h] [rbp-1C0h]
  __int64 nc; // [rsp+18h] [rbp-1C0h]
  __int64 nb; // [rsp+18h] [rbp-1C0h]
  signed __int64 v46; // [rsp+28h] [rbp-1B0h]
  int v47; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v48; // [rsp+38h] [rbp-1A0h]
  void *v49; // [rsp+40h] [rbp-198h]
  __int128 v50; // [rsp+48h] [rbp-190h]
  void *v51; // [rsp+58h] [rbp-180h]
  __int128 v52; // [rsp+60h] [rbp-178h]
  __int64 v53; // [rsp+70h] [rbp-168h] BYREF
  int v54; // [rsp+78h] [rbp-160h]
  _QWORD v55[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v56; // [rsp+90h] [rbp-148h]
  __m128i v57; // [rsp+98h] [rbp-140h] BYREF
  void *v58; // [rsp+A8h] [rbp-130h]
  __m128i v59; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-118h]
  int v61; // [rsp+C8h] [rbp-110h]
  __int64 v62; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-100h]
  __int64 v64; // [rsp+E8h] [rbp-F0h]
  __int64 v65; // [rsp+F0h] [rbp-E8h]
  __int64 v66; // [rsp+F8h] [rbp-E0h]
  __int128 v67; // [rsp+100h] [rbp-D8h]
  __int64 v68; // [rsp+110h] [rbp-C8h]
  __int128 v69; // [rsp+118h] [rbp-C0h]
  char v70; // [rsp+128h] [rbp-B0h]
  void *src; // [rsp+130h] [rbp-A8h] BYREF
  unsigned __int64 v72; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v73; // [rsp+140h] [rbp-98h]
  __int64 v74; // [rsp+170h] [rbp-68h]
  __int64 v75; // [rsp+178h] [rbp-60h]
  unsigned __int64 v76; // [rsp+198h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 360LL);
  if ( v7 == sub_DAB00 )
    return 0;
  v10 = tinfo_property;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD))v7)(v6, tinfo_property, 0) == -1
    || !(unsigned __int8)sub_374CE0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 320), 1) )
  {
    return 0;
  }
  sub_D1010(a1 + 88, v10);
  v11 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  v12 = *(_QWORD *)(v11 + 112);
  v13 = *(__int64 (**)())(*(_QWORD *)v12 + 360LL);
  v14 = -1;
  if ( v13 != sub_DAB00 )
    v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v13)(v12, v10, 0);
  *(_DWORD *)(a1 + 288) = v14;
  if ( !(unsigned __int8)sub_DE8F0(a1 + 88, a2) )
    return 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 16;
  v63 = 0;
  v67 = 0;
  v69 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    if ( !(_QWORD)v63 || (*(_BYTE *)(v62 + 72) & 2) == 0 )
    {
      v47 = 0;
      v48 = 0;
      v49 = nullptr;
      v51 = nullptr;
      v53 = 0;
      v54 = 3;
      v50 = 0;
      v52 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xA )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD )
          v54 |= 4u;
        sub_32C540(&src, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v53);
        copy_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
      }
      sub_E8500((__int64)&src, (__int64)&v62, v15, v16);
      v17 = &v47;
      LODWORD(v55[0]) = 0;
      v18 = (char *)src;
      copy_argloc();
      v56 = 0;
      v57 = 0;
      if ( (_QWORD)v50 )
      {
        nb = v50;
        v41 = (void *)qalloc_or_throw(v50, (__int64)&v47, v50, v19);
        v17 = (int *)v49;
        v56 = (__int64)v41;
        v57.m128i_i64[1] = nb;
        memcpy(v41, v49, nb);
        v57.m128i_i64[0] = nb;
      }
      v58 = nullptr;
      v59 = 0;
      if ( (_QWORD)v52 )
      {
        nc = v52;
        v58 = (void *)qalloc_or_throw(v52, (__int64)v17, v52, v19);
        v59.m128i_i64[1] = nc;
        memcpy(v58, v51, nc);
        v59.m128i_i64[0] = nc;
      }
      v60 = 0;
      copy_tinfo_t();
      v61 = v54;
      v20 = v72;
      v21 = v18 - (_BYTE *)src;
      if ( v73 < v72 + 1 )
      {
        v46 = v18 - (_BYTE *)src;
        v40 = (char *)qvector_reserve((__int64)&src, (__int64)src, v72 + 1, 80);
        v21 = v46;
        src = v40;
        v18 = &v40[v46];
        v20 = v72;
      }
      memmove(v18 + 80, v18, 80 * v20 - v21);
      *(_DWORD *)v18 = 0;
      copy_argloc();
      v22 = v56;
      v56 = 0;
      v23 = _mm_loadu_si128(&v57);
      *((_QWORD *)v18 + 2) = v22;
      *(__m128i *)(v18 + 24) = v23;
      v24 = v58;
      v25 = _mm_load_si128(&v59);
      v57 = 0;
      v58 = nullptr;
      v59 = 0;
      *((_QWORD *)v18 + 5) = v24;
      *((_QWORD *)v18 + 8) = 0;
      *((__m128i *)v18 + 3) = v25;
      copy_tinfo_t();
      *((_DWORD *)v18 + 18) = v61;
      ++v72;
      clear_tinfo_t();
      if ( v58 )
      {
        v59.m128i_i64[0] = 0;
        qfree((__int64)v58);
      }
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      cleanup_argloc();
      if ( (unsigned __int8)calc_arglocs() )
      {
        if ( *(_DWORD *)src != 3 || *(_DWORD *)(a1 + 288) != *((unsigned __int16 *)src + 4) )
          goto LABEL_30;
        if ( v72 > 1 )
        {
          v26 = 0;
          v27 = 1;
          do
          {
            n = v27;
            v26 += 80;
            if ( (unsigned int)compare_arglocs() )
              goto LABEL_30;
            v27 = n + 1;
          }
          while ( n + 1 < v72 );
        }
      }
      tinfo_details = create_tinfo();
      if ( (_BYTE)tinfo_details )
      {
        na = *(_QWORD *)(a1 + 16);
        if ( a3 )
        {
          sub_32C540(v55, *(_QWORD *)(na + 112), (_QWORD *)(a1 + 296));
        }
        else
        {
          v55[0] = 0;
          copy_tinfo_t();
        }
        sub_381E90(na, *(_QWORD *)(a1 + 320), v55, 1u, 1);
        clear_tinfo_t();
        goto LABEL_31;
      }
LABEL_30:
      tinfo_details = 0;
LABEL_31:
      if ( v74 )
      {
        v75 = 0;
        qfree(v74);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v28 = (char *)src;
      if ( src )
      {
        v29 = v72;
        if ( v72 )
        {
          v30 = 0;
          do
          {
            v31 = &v28[80 * v30];
            clear_tinfo_t();
            v32 = *((_QWORD *)v31 + 5);
            if ( v32 )
            {
              *((_QWORD *)v31 + 6) = 0;
              qfree(v32);
            }
            v33 = *((_QWORD *)v31 + 2);
            if ( v33 )
            {
              *((_QWORD *)v31 + 3) = 0;
              qfree(v33);
            }
            ++v30;
            cleanup_argloc();
            v28 = (char *)src;
          }
          while ( v29 != v30 );
        }
        v72 = 0;
        qfree((__int64)v28);
      }
      clear_tinfo_t();
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree((__int64)v51);
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree((__int64)v49);
      }
      cleanup_argloc();
      goto LABEL_48;
    }
    tinfo_details = 0;
  }
LABEL_48:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v34 = v62;
  if ( v62 )
  {
    v35 = v63;
    if ( (_QWORD)v63 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v34 + 80 * v36);
        clear_tinfo_t();
        v38 = v37[5];
        if ( v38 )
        {
          v37[6] = 0;
          qfree(v38);
        }
        v39 = v37[2];
        if ( v39 )
        {
          v37[3] = 0;
          qfree(v39);
        }
        ++v36;
        cleanup_argloc();
        v34 = v62;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v34);
  }
  return tinfo_details;
}

