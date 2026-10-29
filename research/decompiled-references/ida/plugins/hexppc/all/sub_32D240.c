__int64 __fastcall sub_32D240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax
  char *v21; // rdx
  char v22; // r12
  _BYTE *v23; // r8
  _BYTE *v24; // rax
  _BYTE *v25; // rcx
  void *v26; // rcx
  void *v27; // rdi
  size_t v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  int v36; // eax
  __int64 ph; // rax
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // [rsp+0h] [rbp-288h]
  __int64 v42; // [rsp+0h] [rbp-288h]
  __int64 v43; // [rsp+0h] [rbp-288h]
  size_t n; // [rsp+8h] [rbp-280h]
  size_t na; // [rsp+8h] [rbp-280h]
  size_t nb; // [rsp+8h] [rbp-280h]
  size_t nc; // [rsp+8h] [rbp-280h]
  size_t nf; // [rsp+8h] [rbp-280h]
  __int64 nd; // [rsp+8h] [rbp-280h]
  size_t ne; // [rsp+8h] [rbp-280h]
  void *src; // [rsp+10h] [rbp-278h]
  void *srca; // [rsp+10h] [rbp-278h]
  void *srcb; // [rsp+10h] [rbp-278h]
  void *srcc; // [rsp+10h] [rbp-278h]
  void *srcd; // [rsp+10h] [rbp-278h]
  __int64 v56; // [rsp+18h] [rbp-270h]
  __int64 v57; // [rsp+18h] [rbp-270h]
  __int64 v58; // [rsp+18h] [rbp-270h]
  _BYTE *v59; // [rsp+18h] [rbp-270h]
  int v60; // [rsp+20h] [rbp-268h] BYREF
  char v61[4]; // [rsp+24h] [rbp-264h] BYREF
  __int64 v62; // [rsp+28h] [rbp-260h]
  __int64 v63; // [rsp+30h] [rbp-258h]
  __m128i v64; // [rsp+38h] [rbp-250h] BYREF
  __int128 v65; // [rsp+50h] [rbp-238h] BYREF
  char *v66; // [rsp+60h] [rbp-228h]
  __int128 v67; // [rsp+68h] [rbp-220h]
  __int64 v68; // [rsp+78h] [rbp-210h]
  __int128 v69; // [rsp+80h] [rbp-208h]
  __int128 v70; // [rsp+90h] [rbp-1F8h]
  __int64 v71; // [rsp+C0h] [rbp-1C8h]
  int v72; // [rsp+C8h] [rbp-1C0h]
  __int64 v73; // [rsp+D0h] [rbp-1B8h]
  char v74; // [rsp+D8h] [rbp-1B0h]
  __int128 v75; // [rsp+E0h] [rbp-1A8h]
  __int64 v76; // [rsp+F0h] [rbp-198h]
  __int64 v77; // [rsp+F8h] [rbp-190h]
  __int64 v78; // [rsp+100h] [rbp-188h]
  _BYTE v79[320]; // [rsp+108h] [rbp-180h] BYREF
  _QWORD v80[8]; // [rsp+248h] [rbp-40h] BYREF

  v80[0] = __readfsqword(0x28u);
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(92, a2, a3, a4, a5, a6);
  if ( v7 == -1 )
    return 0;
  v9 = v7;
  v76 = -1;
  v75 = -1;
  v10 = v79;
  v77 = 0;
  v78 = 0;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( v80 != v10 );
  callui(11, &v65, v80, 0, 0, v8, v41, n, src, v56);
  if ( !(unsigned int)decode_insn() )
    return 0;
  v14 = v79[40 * v9 + 1];
  if ( v14 != 1 )
  {
    if ( (unsigned __int8)(v14 - 5) <= 2u || !(unsigned __int8)callui(41, &v60, v61, v11, v12, v13, v42, na, srca, v57) )
      return 0;
    nc = callui(42, &v60, v16, v17, v18, v19, v43, nb, srcb, v58);
    v20 = (char *)tag_advance();
    if ( nc < (unsigned __int64)v20 )
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 <= 31 || v22 == 33 )
        {
          if ( ((v22 - 25) & 0xF7) != 0 )
            return 0;
          goto LABEL_16;
        }
        v21 = v20 - 1;
        if ( v20 - 1 == (char *)nc )
          break;
        --v20;
      }
      v22 = *(v20 - 1);
      if ( ((v22 - 25) & 0xF7) == 0 )
        return 0;
    }
    else
    {
      v22 = *v20;
      if ( ((*v20 - 25) & 0xF7) == 0 )
      {
LABEL_16:
        if ( (char *)nc == v20 )
          return 0;
        v21 = v20;
        if ( *(v20 - 1) != 1 )
          return 0;
        goto LABEL_18;
      }
      v21 = v20;
    }
    if ( v22 != 32 )
      return 0;
LABEL_18:
    v23 = v21 + 1;
    if ( (v21[1] & 0xFD) == 0 )
      return 0;
    v24 = v21 + 1;
    do
      v25 = v24++;
    while ( (*v24 & 0xFD) != 0 );
    if ( v23 == v24 )
      return 0;
    v26 = (void *)(v25 - v21);
    v27 = nullptr;
    v63 = 0;
    v28 = (size_t)v26;
    v64 = 0;
    v29 = (__int64)v26 + 1;
    if ( v26 != (void *)-1LL )
    {
      srcc = v26;
      v59 = v23;
      ne = (size_t)v26 + 1;
      v63 = qvector_reserve();
      v23 = v59;
      v27 = (void *)v63;
      v28 = (size_t)srcc;
      v29 = ne;
    }
    v64.m128i_i64[0] = v29;
    nf = v28;
    memmove(v27, v23, v28);
    *(_BYTE *)(v63 + nf) = 0;
    if ( v22 == 33 )
    {
      get_func();
      find_regvar();
      if ( (unsigned __int8)parse_reg_name() )
      {
        v40 = v65;
        *(_DWORD *)(a1 + 36) = 1;
        *(_DWORD *)(a1 + 24) = v40;
        *(_DWORD *)(a1 + 32) = DWORD1(v65);
LABEL_35:
        v33 = *(_QWORD *)(a1 + 16);
        v34 = v63;
        v35 = _mm_loadu_si128(&v64);
        v63 = *(_QWORD *)a1;
        v32 = v63;
        *(_QWORD *)a1 = v34;
        v64.m128i_i64[1] = v33;
        *(__m128i *)(a1 + 8) = v35;
        if ( v32 )
        {
          v64.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_38;
      }
    }
    else
    {
      get_func();
      v62 = 0;
      if ( (unsigned __int8)get_func_frame() )
      {
        v30 = v64.m128i_i64[0];
        v66 = nullptr;
        v68 = 0;
        v71 = 1;
        v72 = -1;
        v73 = 0;
        v74 = 0;
        v65 = 0;
        v67 = 0;
        v69 = 0;
        v70 = 0;
        if ( v64.m128i_i64[0] )
        {
          nd = v64.m128i_i64[0] - 1;
          if ( v64.m128i_i64[0] != 1 )
          {
            srcd = (void *)v63;
            v66 = (char *)qvector_reserve();
            *(_QWORD *)&v67 = v30;
            memmove(v66, srcd, nd);
            v66[v30 - 1] = 0;
          }
        }
        if ( (unsigned int)find_tinfo_udt_member() != -1 )
        {
          v31 = v65;
          *(_DWORD *)(a1 + 36) = 0;
          *(_QWORD *)(a1 + 24) = v31 >> 3;
          *(_DWORD *)(a1 + 32) = get_dtype_size();
          clear_tinfo_t();
          if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree();
          }
          if ( v66 )
          {
            *(_QWORD *)&v67 = 0;
            qfree();
          }
          clear_tinfo_t();
          goto LABEL_35;
        }
        clear_tinfo_t();
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree();
        }
      }
      clear_tinfo_t();
    }
    if ( v63 )
    {
      v64.m128i_i64[0] = 0;
      qfree();
    }
    return 0;
  }
  v36 = *(unsigned __int16 *)&v79[40 * v9 + 6];
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 24) = v36;
  *(_DWORD *)(a1 + 32) = get_dtype_size();
  sub_CC530();
LABEL_38:
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFF9;
  ph = get_ph();
  v38 = *(_DWORD *)(ph + 104);
  if ( (unsigned __int16)v77 >= v38 && (unsigned __int16)v77 < *(int *)(ph + 108) && v9 <= 7 )
  {
    v39 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v77 - v38) + 8);
    if ( (dword_41C140[v9] & v39) != 0 )
      *(_DWORD *)(a1 + 36) |= 4u;
    if ( (dword_41C120[v9] & v39) != 0 )
      *(_DWORD *)(a1 + 36) |= 2u;
  }
  return 1;
}

