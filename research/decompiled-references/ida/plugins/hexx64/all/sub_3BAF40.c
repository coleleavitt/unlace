_BOOL8 __fastcall sub_3BAF40(__int64 a1, char a2, double a3, double a4, __m128i a5, double a6)
{
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // r13
  _QWORD *v10; // rbx
  int tinfo_property; // eax
  bool v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i si128; // xmm0
  _QWORD *v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // rsi
  int v25; // r13d
  __int64 v26; // rsi
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rdi
  unsigned int v46; // r13d
  int v47; // r12d
  int v48; // r15d
  __int64 v49; // rax
  int v50; // eax
  bool v51; // [rsp+Fh] [rbp-179h]
  __int64 v52; // [rsp+10h] [rbp-178h]
  __int64 v53; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v55; // [rsp+30h] [rbp-158h]
  __int64 v56; // [rsp+48h] [rbp-140h] BYREF
  __int64 v57; // [rsp+50h] [rbp-138h] BYREF
  __int128 v58; // [rsp+58h] [rbp-130h]
  __int64 v59; // [rsp+70h] [rbp-118h] BYREF
  __int128 v60; // [rsp+78h] [rbp-110h]
  int v61; // [rsp+88h] [rbp-100h]
  _QWORD v62[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-D8h]
  __int64 v64; // [rsp+B8h] [rbp-D0h]
  __int64 v65; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v67; // [rsp+D0h] [rbp-B8h]
  __int64 v68; // [rsp+E0h] [rbp-A8h]
  __int64 v69; // [rsp+E8h] [rbp-A0h]
  __int64 v70; // [rsp+118h] [rbp-70h]
  __int64 v71; // [rsp+120h] [rbp-68h]
  __int64 v72; // [rsp+130h] [rbp-58h]
  __int64 v73; // [rsp+138h] [rbp-50h]
  unsigned __int64 v74; // [rsp+148h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v7 = (unsigned __int64 *)sub_38DCC0(*(_QWORD *)(a1 + 32), a1 + 80, a3);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( *v7 == -1 )
    return 0;
  if ( (v10 = sub_3C5930((_QWORD **)(*(_QWORD *)(a1 + 24) + 1312LL), *v7)) != nullptr )
    return 0;
  sub_244BC0(&v65, (__int64)v8);
  tinfo_property = get_tinfo_property();
  v12 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  v51 = v12;
  clear_tinfo_t();
  if ( !v12 || *(_DWORD *)(v8[4] + 8) <= (int)get_tinfo_property() && a2 != 1 )
    return 0;
  v13 = *v8;
  v14 = *(_QWORD *)(a1 + 24);
  memset(&v62[1], 0, 24);
  v53 = v13;
  v63 = 0;
  v62[0] = &off_4E7868;
  v64 = v13;
  if ( !(unsigned int)sub_11FC20(v14, (__int64)v62) )
  {
    if ( !under_debugger )
      sub_383060(0xC51Eu, a3);
    goto LABEL_82;
  }
  v57 = 0;
  v58 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v63 + 72) + 32LL);
  v52 = *(_QWORD *)(v63 + 72);
  if ( v17 )
  {
    v36 = 0;
    v55 = 4 * v17;
    *((_QWORD *)&v58 + 1) = *(_QWORD *)(*(_QWORD *)(v63 + 72) + 32LL);
    v57 = qalloc_or_throw(80 * v17, (__int64)v62, v15, v16);
    v10 = (_QWORD *)v57;
    do
    {
      v38 = (__int64)&v10[10 * v36];
      v39 = *(_QWORD *)(v52 + 24) + 80 * v36;
      sub_123A40(v38, (unsigned __int8 *)v39, v37, v39);
      v40 = *(_QWORD *)(v39 + 16);
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 16) = v40;
      copy_tinfo_t();
      a4 = 0.0;
      *(_QWORD *)(v38 + 32) = 0;
      *(_OWORD *)(v38 + 40) = 0;
      if ( *(_QWORD *)(v39 + 40) )
      {
        n = *(_QWORD *)(v39 + 40);
        v43 = (void *)qalloc_or_throw(n, v39 + 24, v41, v42);
        *(_QWORD *)(v38 + 32) = v43;
        *(_QWORD *)(v38 + 48) = n;
        memcpy(v43, *(const void **)(v39 + 32), n);
        *(_QWORD *)(v38 + 40) = n;
      }
      *(_DWORD *)(v38 + 56) = 0;
      copy_argloc();
      ++v36;
      *(_DWORD *)(v38 + 72) = *(_DWORD *)(v39 + 72);
      v10 = (_QWORD *)v57;
    }
    while ( v17 != v36 );
    *(_QWORD *)&v58 = v17;
    if ( !a2 )
    {
      *(_QWORD *)&v58 = v17 - 1;
      v44 = 80 * (v17 - 1) + v57;
      cleanup_argloc();
      v45 = *(_QWORD *)(v44 + 32);
      if ( v45 )
      {
        *(_QWORD *)(v44 + 40) = 0;
        qfree(v45);
      }
      clear_tinfo_t();
      sub_11CDA0(v44);
      goto LABEL_27;
    }
    v18 = *(_QWORD *)(a1 + 24);
    v19 = v17 + 1;
    if ( *((_QWORD *)&v58 + 1) >= (unsigned __int64)(v17 + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v18 = *(_QWORD *)(a1 + 24);
    v19 = 1;
LABEL_13:
    v20 = qvector_reserve((__int64)&v57, (__int64)v10, v19, 80);
    v17 = v58;
    v57 = v20;
    v10 = (_QWORD *)v20;
    v55 = 4 * v58;
LABEL_14:
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v22 = &v10[2 * v17 + 2 * v55];
    *v22 = 0xFFFFFFFF00000000LL;
    v22[1] = 0;
    *((__m128i *)v22 + 1) = si128;
    v22[4] = 0;
    v22[7] = 0;
    v22[8] = 0;
    *((_DWORD *)v22 + 18) = 0;
    *(_OWORD *)(v22 + 5) = 0;
    v23 = *(_DWORD *)(v52 + 20);
    v24 = *(_QWORD *)(v18 + 1496);
    *(_QWORD *)&v58 = v58 + 1;
    sub_D10B0((__int64)&v65, v24, v23);
    v59 = 0;
    v61 = 0;
    v60 = 0;
    sub_D62A0((__int64)&v65, (unsigned int *)&v59, v18, (_QWORD *)(v52 + 24), 0.0);
    v25 = -1;
    if ( !(unsigned __int8)getinf_flag() && (int)v59 < v67 )
      v25 = *(_DWORD *)(v66 + 4LL * (int)v59);
    v26 = *(_QWORD *)(v18 + 1504);
    v27 = *(_DWORD *)(v26 + 80);
    sub_32C270(&v56, v26, v27);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v25 != -1 )
    {
      *((_DWORD *)v22 + 14) = 3;
      *((_DWORD *)v22 + 16) = v25;
LABEL_19:
      if ( v72 )
      {
        v73 = 0;
        qfree(v72);
      }
      if ( v70 )
      {
        v71 = 0;
        qfree(v70);
      }
      if ( v68 )
      {
        v69 = 0;
        qfree(v68);
      }
      if ( v66 )
      {
        v67 = 0;
        qfree(v66);
      }
      goto LABEL_27;
    }
    v46 = *(_DWORD *)(v52 + 20);
    LODWORD(v56) = 0;
    get_tinfo_size();
    v47 = v56;
    if ( ((unsigned int)v56 & ((_DWORD)v56 - 1)) == 0 )
    {
      v48 = 2 * v27;
      if ( (int)v56 <= 2 * v27 )
      {
        if ( v27 > (int)v56 )
        {
          if ( v46 > 0x10 )
          {
LABEL_48:
            if ( v46 == 176 || v46 == 256 )
              goto LABEL_51;
            goto LABEL_50;
          }
LABEL_70:
          v46 = getinf();
          goto LABEL_48;
        }
        if ( v46 > 0x10 )
          goto LABEL_61;
        goto LABEL_75;
      }
      if ( v46 <= 0x10 )
      {
        v50 = getinf();
        if ( v50 == 176 || v50 == 256 )
        {
          if ( v27 > v48 )
          {
LABEL_69:
            v47 = 2 * v27;
            goto LABEL_70;
          }
LABEL_74:
          v47 = 2 * v27;
LABEL_75:
          v46 = getinf();
LABEL_61:
          if ( v46 == 176 || v46 == 256 )
            goto LABEL_52;
LABEL_63:
          if ( (unsigned __int8)getinf_flag() )
            v27 = v47;
          goto LABEL_52;
        }
      }
      else if ( v46 == 256 || v46 == 176 )
      {
        if ( v27 > v48 )
          v27 *= 2;
        goto LABEL_52;
      }
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_51;
      if ( v27 > v48 )
      {
        if ( v46 > 0x10 )
        {
          v47 = 2 * v27;
LABEL_50:
          if ( !(unsigned __int8)getinf_flag() )
          {
LABEL_52:
            v49 = sub_D50D0((__int64)&v59, v27);
            *((_DWORD *)v22 + 14) = 1;
            v22[8] = v49;
            goto LABEL_19;
          }
LABEL_51:
          v27 = v47;
          goto LABEL_52;
        }
        goto LABEL_69;
      }
      if ( v46 > 0x10 )
      {
        v47 = 2 * v27;
        goto LABEL_63;
      }
      goto LABEL_74;
    }
    if ( !under_debugger )
      interr();
LABEL_82:
    BUG();
  }
LABEL_27:
  sub_2B7B90(*(_QWORD *)(a1 + 24), v53, (unsigned __int64)&v57);
  sub_395CC0(a1, 1u, v28, v29, v30, 0.0, a4, a5, a6);
  v31 = v57;
  if ( v57 )
  {
    v32 = v58;
    if ( (_QWORD)v58 )
    {
      v33 = 0;
      do
      {
        v34 = v31 + 80 * v33;
        cleanup_argloc();
        v35 = *(_QWORD *)(v34 + 32);
        if ( v35 )
        {
          *(_QWORD *)(v34 + 40) = 0;
          qfree(v35);
        }
        ++v33;
        clear_tinfo_t();
        sub_11CDA0(v34);
        v31 = v57;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v31);
  }
  return v51;
}

