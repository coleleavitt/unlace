_BOOL8 __fastcall sub_3B3640(__int64 a1, char a2, double a3)
{
  __int64 *v4; // rax
  __int64 *v5; // r13
  int tinfo_property; // eax
  bool v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbx
  __m128i si128; // xmm0
  __int64 v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // rsi
  int v18; // r13d
  __int64 v19; // rsi
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // r13d
  int v35; // r12d
  int v36; // r15d
  __int64 v37; // rax
  int v38; // eax
  bool v39; // [rsp+Fh] [rbp-179h]
  __int64 v40; // [rsp+10h] [rbp-178h]
  __int64 v41; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v43; // [rsp+30h] [rbp-158h]
  __int64 v44; // [rsp+48h] [rbp-140h] BYREF
  __int64 v45; // [rsp+50h] [rbp-138h] BYREF
  __int128 v46; // [rsp+58h] [rbp-130h]
  __int64 v47; // [rsp+70h] [rbp-118h] BYREF
  __int128 v48; // [rsp+78h] [rbp-110h]
  int v49; // [rsp+88h] [rbp-100h]
  _QWORD v50[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-D8h]
  __int64 v52; // [rsp+B8h] [rbp-D0h]
  __int64 v53; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+D0h] [rbp-B8h]
  __int64 v56; // [rsp+E0h] [rbp-A8h]
  __int64 v57; // [rsp+E8h] [rbp-A0h]
  __int64 v58; // [rsp+118h] [rbp-70h]
  __int64 v59; // [rsp+120h] [rbp-68h]
  __int64 v60; // [rsp+130h] [rbp-58h]
  __int64 v61; // [rsp+138h] [rbp-50h]
  unsigned __int64 v62; // [rsp+148h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v4 = (__int64 *)sub_3863C0(*(_QWORD *)(a1 + 32), a1 + 80, a3);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 == -1 )
    return 0;
  if ( sub_3BE030(*(_QWORD *)(a1 + 24) + 1312LL) )
    return 0;
  sub_23D840(&v53, (__int64)v5);
  tinfo_property = get_tinfo_property();
  v8 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  v39 = v8;
  clear_tinfo_t();
  if ( !v8 || *(_DWORD *)(v5[4] + 8) <= (int)get_tinfo_property() && a2 != 1 )
    return 0;
  v9 = *v5;
  v10 = *(_QWORD *)(a1 + 24);
  memset(&v50[1], 0, 24);
  v41 = v9;
  v51 = 0;
  v50[0] = off_4B4068;
  v52 = v9;
  if ( !(unsigned int)sub_119560(v10, (__int64)v50) )
  {
    if ( !under_debugger )
      sub_37B760(0xC51Eu, a3);
    goto LABEL_82;
  }
  v45 = 0;
  v46 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(v51 + 72) + 32LL);
  v40 = *(_QWORD *)(v51 + 72);
  if ( v11 )
  {
    v28 = 0;
    v43 = 4 * v11;
    *((_QWORD *)&v46 + 1) = *(_QWORD *)(*(_QWORD *)(v51 + 72) + 32LL);
    v45 = qalloc_or_throw();
    v13 = v45;
    do
    {
      v29 = 80 * v28 + v13;
      v30 = *(_QWORD *)(v40 + 24) + 80 * v28;
      sub_11D380(v29, (unsigned __int8 *)v30);
      v31 = *(_QWORD *)(v30 + 16);
      *(_QWORD *)(v29 + 24) = 0;
      *(_QWORD *)(v29 + 16) = v31;
      copy_tinfo_t();
      *(_QWORD *)(v29 + 32) = 0;
      *(_OWORD *)(v29 + 40) = 0;
      if ( *(_QWORD *)(v30 + 40) )
      {
        n = *(_QWORD *)(v30 + 40);
        v32 = (void *)qalloc_or_throw();
        *(_QWORD *)(v29 + 32) = v32;
        *(_QWORD *)(v29 + 48) = n;
        memcpy(v32, *(const void **)(v30 + 32), n);
        *(_QWORD *)(v29 + 40) = n;
      }
      *(_DWORD *)(v29 + 56) = 0;
      copy_argloc();
      ++v28;
      *(_DWORD *)(v29 + 72) = *(_DWORD *)(v30 + 72);
      v13 = v45;
    }
    while ( v11 != v28 );
    *(_QWORD *)&v46 = v11;
    if ( !a2 )
    {
      *(_QWORD *)&v46 = v11 - 1;
      v33 = 80 * (v11 - 1) + v45;
      cleanup_argloc();
      if ( *(_QWORD *)(v33 + 32) )
      {
        *(_QWORD *)(v33 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1166E0(v33);
      goto LABEL_27;
    }
    v12 = *(_QWORD *)(a1 + 24);
    if ( *((_QWORD *)&v46 + 1) >= (unsigned __int64)(v11 + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v12 = *(_QWORD *)(a1 + 24);
LABEL_13:
    v11 = v46;
    v45 = qvector_reserve();
    v13 = v45;
    v43 = 4 * v46;
LABEL_14:
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    v15 = 16 * (v11 + v43) + v13;
    *(_QWORD *)v15 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 8) = 0;
    *(__m128i *)(v15 + 16) = si128;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0;
    *(_DWORD *)(v15 + 72) = 0;
    *(_OWORD *)(v15 + 40) = 0;
    v16 = *(_DWORD *)(v40 + 20);
    v17 = *(_QWORD *)(v12 + 1496);
    *(_QWORD *)&v46 = v46 + 1;
    sub_CA9F0((__int64)&v53, v17, v16);
    v47 = 0;
    v49 = 0;
    v48 = 0;
    sub_CFBE0((__int64)&v53, (unsigned int *)&v47, v12, (_QWORD *)(v40 + 24));
    v18 = -1;
    if ( !(unsigned __int8)getinf_flag() && (int)v47 < v55 )
      v18 = *(_DWORD *)(v54 + 4LL * (int)v47);
    v19 = *(_QWORD *)(v12 + 1504);
    v20 = *(_DWORD *)(v19 + 80);
    sub_324D40(&v44, v19, v20);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v18 != -1 )
    {
      *(_DWORD *)(v15 + 56) = 3;
      *(_DWORD *)(v15 + 64) = v18;
LABEL_19:
      if ( v60 )
      {
        v61 = 0;
        qfree();
      }
      if ( v58 )
      {
        v59 = 0;
        qfree();
      }
      if ( v56 )
      {
        v57 = 0;
        qfree();
      }
      if ( v54 )
      {
        v55 = 0;
        qfree();
      }
      goto LABEL_27;
    }
    v34 = *(_DWORD *)(v40 + 20);
    LODWORD(v44) = 0;
    get_tinfo_size();
    v35 = v44;
    if ( ((unsigned int)v44 & ((_DWORD)v44 - 1)) == 0 )
    {
      v36 = 2 * v20;
      if ( (int)v44 <= 2 * v20 )
      {
        if ( v20 > (int)v44 )
        {
          if ( v34 > 0x10 )
          {
LABEL_48:
            if ( v34 == 176 || v34 == 256 )
              goto LABEL_51;
            goto LABEL_50;
          }
LABEL_70:
          v34 = getinf();
          goto LABEL_48;
        }
        if ( v34 > 0x10 )
          goto LABEL_61;
        goto LABEL_75;
      }
      if ( v34 <= 0x10 )
      {
        v38 = getinf();
        if ( v38 == 176 || v38 == 256 )
        {
          if ( v20 > v36 )
          {
LABEL_69:
            v35 = 2 * v20;
            goto LABEL_70;
          }
LABEL_74:
          v35 = 2 * v20;
LABEL_75:
          v34 = getinf();
LABEL_61:
          if ( v34 == 176 || v34 == 256 )
            goto LABEL_52;
LABEL_63:
          if ( (unsigned __int8)getinf_flag() )
            v20 = v35;
          goto LABEL_52;
        }
      }
      else if ( v34 == 256 || v34 == 176 )
      {
        if ( v20 > v36 )
          v20 *= 2;
        goto LABEL_52;
      }
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_51;
      if ( v20 > v36 )
      {
        if ( v34 > 0x10 )
        {
          v35 = 2 * v20;
LABEL_50:
          if ( !(unsigned __int8)getinf_flag() )
          {
LABEL_52:
            v37 = sub_CEA10((__int64)&v47, v20);
            *(_DWORD *)(v15 + 56) = 1;
            *(_QWORD *)(v15 + 64) = v37;
            goto LABEL_19;
          }
LABEL_51:
          v20 = v35;
          goto LABEL_52;
        }
        goto LABEL_69;
      }
      if ( v34 > 0x10 )
      {
        v35 = 2 * v20;
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
  sub_2B0810(*(_QWORD *)(a1 + 24), v41, (unsigned __int64)&v45);
  sub_38E3C0(a1, 1u, v21, v22, v23, 0.0);
  v24 = v45;
  if ( v45 )
  {
    v25 = v46;
    if ( (_QWORD)v46 )
    {
      v26 = 0;
      do
      {
        v27 = v24 + 80 * v26;
        cleanup_argloc();
        if ( *(_QWORD *)(v27 + 32) )
        {
          *(_QWORD *)(v27 + 40) = 0;
          qfree();
        }
        ++v26;
        clear_tinfo_t();
        sub_1166E0(v27);
        v24 = v45;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return v39;
}

