__int64 __fastcall sub_24C180(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int v6; // r13d
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, int); // rax
  int v26; // eax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // r12
  _QWORD *v33; // rbp
  __int64 v34; // r14
  int v35; // r13d
  __int64 *v36; // r9
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // r15
  __int64 v42; // r12
  __int64 v43; // rbx
  _QWORD *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r13
  __int64 v51; // rbp
  __int64 v52; // rbx
  void *v53; // rax
  const void *v54; // rsi
  __int64 v55; // rbx
  __m128i *v56; // rax
  __int64 (__fastcall *v57)(__int64, int, int); // rax
  unsigned int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  _QWORD *v63; // rsi
  __int64 v64; // r13
  unsigned __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // r13
  __int64 v68; // rax
  _QWORD *v69; // rbx
  bool v71; // cc
  _QWORD *v72; // rax
  int v73; // r13d
  _QWORD *v74; // rbx
  _DWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // r13
  unsigned __int64 v78; // r13
  size_t v79; // rbx
  void *v80; // rax
  int v81; // [rsp+8h] [rbp-100h]
  __int64 *v82; // [rsp+8h] [rbp-100h]
  __int64 v83; // [rsp+10h] [rbp-F8h]
  _QWORD *v84; // [rsp+18h] [rbp-F0h]
  _QWORD *v85; // [rsp+18h] [rbp-F0h]
  _QWORD *v86; // [rsp+20h] [rbp-E8h]
  size_t v87; // [rsp+28h] [rbp-E0h]
  size_t v88; // [rsp+28h] [rbp-E0h]
  size_t v89; // [rsp+28h] [rbp-E0h]
  __int64 v90; // [rsp+28h] [rbp-E0h]
  __int64 n; // [rsp+30h] [rbp-D8h]
  size_t na; // [rsp+30h] [rbp-D8h]
  __int64 *v94; // [rsp+40h] [rbp-C8h]
  __int64 v95; // [rsp+48h] [rbp-C0h]
  __int64 v96; // [rsp+50h] [rbp-B8h] BYREF
  int v97; // [rsp+58h] [rbp-B0h]
  __int64 v98; // [rsp+5Ch] [rbp-ACh]
  void *src[2]; // [rsp+68h] [rbp-A0h]
  __int128 v100; // [rsp+78h] [rbp-90h]
  __int64 v101; // [rsp+90h] [rbp-78h] BYREF
  int v102; // [rsp+98h] [rbp-70h]
  __int64 v103; // [rsp+9Ch] [rbp-6Ch]
  void *v104; // [rsp+B0h] [rbp-58h]
  __int128 v105; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v106; // [rsp+C8h] [rbp-40h]

  v3 = a1;
  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  v106 = __readfsqword(0x28u);
  if ( v4 == sub_60ED0 )
    v6 = **(_DWORD **)(a1[6] + 24LL * a2);
  else
    v6 = v4((__int64)a1, a2, 0);
  v7 = (__int64)sub_24B750(a1, v6);
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    sub_327340(&v101, *(_QWORD *)(a1[41] + 112LL), *(unsigned __int8 *)(a1[41] + 130LL));
    v7 = sub_2405F0(v7);
    clear_tinfo_t();
  }
  v8 = sub_30D110(a1, v6);
  v9 = *(_QWORD *)(a1[22] + 8LL);
  if ( v8 >= *(_DWORD *)(v9 + 64) )
    sub_239AC0();
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * v8) + 56LL);
  if ( !v10 || *(_DWORD *)v10 != 53 )
  {
    if ( !under_debugger )
      sub_37E160(50383);
LABEL_91:
    BUG();
  }
  v11 = sub_23CB40(a3, *(_QWORD *)(v10 + 24));
  *((_DWORD *)v11 + 2) = 77;
  v12 = v11;
  v94 = v11;
  v13 = j__qalloc_or_throw();
  *(_QWORD *)v13 = -1;
  v14 = v13;
  *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 104) = 0;
  *(_QWORD *)(v13 + 112) = 0;
  *(_OWORD *)(v13 + 88) = 0;
  *(_OWORD *)(v13 + 120) = 0;
  v12[3] = v13;
  v15 = *(_QWORD *)v7;
  *(_QWORD *)v7 = *(_QWORD *)v14;
  v16 = *(_DWORD *)(v14 + 8);
  *(_QWORD *)v14 = v15;
  LODWORD(v15) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v16;
  v17 = *(_DWORD *)(v14 + 12);
  *(_DWORD *)(v14 + 8) = v15;
  LODWORD(v15) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 12) = v17;
  v18 = *(_QWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 12) = v15;
  v19 = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v18;
  *(_QWORD *)(v14 + 24) = v19;
  v20 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(v14 + 32);
  v21 = *(_QWORD *)(v14 + 40);
  *(_QWORD *)(v14 + 32) = v20;
  v22 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v21;
  v23 = *(_QWORD *)(v14 + 48);
  *(_QWORD *)(v14 + 40) = v22;
  v24 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v23;
  LODWORD(v23) = *(_DWORD *)(v14 + 56);
  *(_QWORD *)(v14 + 48) = v24;
  LODWORD(v24) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 56) = v23;
  *(_DWORD *)(v14 + 56) = v24;
  if ( v7 )
  {
    sub_250DB0(v7);
    clear_tinfo_t();
    j__qfree();
  }
  if ( *(_DWORD *)v10 != 53 )
  {
    if ( !under_debugger )
      sub_37E160(50384);
    goto LABEL_91;
  }
  v25 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  v84 = *(_QWORD **)(v10 + 56);
  if ( v25 == sub_60E90 )
  {
    if ( !a1[7] )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 32LL);
      if ( v27 == -1 )
      {
        if ( *(_QWORD *)(v14 + 120) == -1 )
          return sub_23D840(v14, v3[22], *v94, 0);
        v96 = -1;
        v97 = 70;
        v98 = -1;
        v81 = -1;
        *(_OWORD *)src = 0;
        v100 = 0;
LABEL_35:
        v48 = *(_QWORD *)(v14 + 112);
        v49 = *(_QWORD *)(v14 + 128);
        if ( (unsigned __int64)&v96 < v48 || (unsigned __int64)&v96 >= v48 + 56 * v49 )
        {
          if ( v49 < v27 )
            *(_QWORD *)(v14 + 112) = qvector_reserve();
          v50 = *(_QWORD *)(v14 + 120);
          if ( v50 < v27 )
          {
            v51 = 56 * v50;
            do
            {
              while ( 1 )
              {
                v52 = v51 + *(_QWORD *)(v14 + 112);
                *(_QWORD *)v52 = -1;
                *(_DWORD *)(v52 + 8) = 70;
                *(_QWORD *)(v52 + 12) = -1;
                sub_2561F0(v52, &v96);
                *(_QWORD *)(v52 + 32) = 0;
                *(_OWORD *)(v52 + 40) = 0;
                if ( (_QWORD)v100 )
                  break;
                ++v50;
                v51 += 56;
                if ( v50 == v27 )
                  goto LABEL_43;
              }
              v88 = v100;
              n = 8 * v100;
              v53 = (void *)qalloc_or_throw();
              *(_QWORD *)(v52 + 32) = v53;
              ++v50;
              v54 = src[1];
              v51 += 56;
              *(_QWORD *)(v52 + 48) = v88;
              memcpy(v53, v54, n);
              *(_QWORD *)(v52 + 40) = v88;
            }
            while ( v50 != v27 );
          }
LABEL_43:
          *(_QWORD *)(v14 + 120) = v27;
        }
        else
        {
          v101 = -1;
          v102 = 70;
          v103 = -1;
          sub_2561F0(&v101, &v96);
          v77 = v100;
          v104 = nullptr;
          v105 = 0;
          if ( (_QWORD)v100 )
          {
            v90 = 8 * v100;
            v104 = (void *)qalloc_or_throw();
            *((_QWORD *)&v105 + 1) = v77;
            memcpy(v104, src[1], v90);
            *(_QWORD *)&v105 = v77;
          }
          if ( *(_QWORD *)(v14 + 128) < v27 )
            *(_QWORD *)(v14 + 112) = qvector_reserve();
          v78 = *(_QWORD *)(v14 + 120);
          if ( v78 < v27 )
          {
            v89 = 56 * v78;
            do
            {
              v79 = *(_QWORD *)(v14 + 112) + v89;
              *(_QWORD *)v79 = -1;
              *(_DWORD *)(v79 + 8) = 70;
              *(_QWORD *)(v79 + 12) = -1;
              sub_2561F0(v79, &v101);
              *(_QWORD *)(v79 + 32) = 0;
              *(_OWORD *)(v79 + 40) = 0;
              if ( (_QWORD)v105 )
              {
                na = v105;
                v95 = 8 * v105;
                v80 = (void *)qalloc_or_throw();
                *(_QWORD *)(v79 + 32) = v80;
                *(_QWORD *)(v79 + 48) = na;
                memcpy(v80, v104, v95);
                *(_QWORD *)(v79 + 40) = na;
              }
              ++v78;
              v89 += 56LL;
            }
            while ( v78 != v27 );
          }
          *(_QWORD *)(v14 + 120) = v27;
          if ( v104 )
          {
            *(_QWORD *)&v105 = 0;
            qfree();
          }
          sub_2507D0(&v101);
        }
        goto LABEL_22;
      }
      goto LABEL_87;
    }
    v26 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v26 = v25((__int64)a1, a2);
  }
  v81 = v26 - 1;
  v27 = v26 - 1;
  if ( v27 != v84[4] )
  {
LABEL_87:
    if ( !under_debugger )
      sub_37E160(50385);
    goto LABEL_91;
  }
  v28 = *(_QWORD *)(v14 + 120);
  if ( v27 == v28 )
    goto LABEL_25;
  v96 = -1;
  v97 = 70;
  v98 = -1;
  *(_OWORD *)src = 0;
  v100 = 0;
  if ( v27 >= v28 )
    goto LABEL_35;
  v29 = v27;
  v30 = v28;
  v31 = 56 * v27;
  do
  {
    v32 = v31 + *(_QWORD *)(v14 + 112);
    if ( *(_QWORD *)(v32 + 32) )
    {
      *(_QWORD *)(v32 + 40) = 0;
      qfree();
    }
    ++v29;
    v31 += 56;
    sub_2507D0(v32);
  }
  while ( v29 < v30 );
  *(_QWORD *)(v14 + 120) = v27;
  v3 = a1;
LABEL_22:
  if ( src[1] )
  {
    *(_QWORD *)&v100 = 0;
    qfree();
  }
  sub_2507D0(&v96);
LABEL_25:
  if ( v81 > 0 )
  {
    v33 = v84;
    v34 = 0;
    v87 = v81;
    do
    {
      v35 = 0;
      v36 = &v101;
      v37 = *v33 + 24 * v34;
      v38 = 56 * v34;
      v39 = 0;
      if ( *(_QWORD *)(v37 + 8) )
      {
        v85 = v33;
        v40 = v14;
        v41 = (_QWORD *)v37;
        v86 = v3;
        v42 = 56 * v34;
        v83 = v34;
        do
        {
          v43 = *(_QWORD *)(*v41 + 8 * v39);
          v44 = (_QWORD *)(v42 + *(_QWORD *)(v40 + 112));
          v101 = v43;
          v45 = v44[5];
          v46 = v44[4];
          if ( v44[6] < (unsigned __int64)(v45 + 1) )
          {
            v82 = v36;
            v47 = qvector_reserve();
            v36 = v82;
            v44[4] = v47;
            v46 = v47;
            v45 = v44[5];
          }
          ++v35;
          *(_QWORD *)(v46 + 8 * v45) = v43;
          v39 = v35;
          ++v44[5];
        }
        while ( (unsigned __int64)v35 < v41[1] );
        v14 = v40;
        v38 = v42;
        v34 = v83;
        v33 = v85;
        v3 = v86;
      }
      v55 = *(_QWORD *)(v14 + 112) + v38;
      *(_DWORD *)(v55 + 8) = 71;
      v56 = (__m128i *)qalloc_or_throw();
      v56[1].m128i_i64[0] = 0;
      *v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
      *(_QWORD *)(v55 + 24) = v56;
      v57 = *(__int64 (__fastcall **)(__int64, int, int))(*v3 + 112LL);
      ++v34;
      if ( v57 == sub_60ED0 )
        v58 = *(_DWORD *)(*(_QWORD *)(v3[6] + 24LL * a2) + 4 * v34);
      else
        v58 = v57((__int64)v3, a2, v34);
      sub_24BC90(v3, v58, v55, 0);
      if ( (unsigned __int8)sub_23D2C0(v55, v58, v59, v60, v61) )
      {
        v62 = sub_30D110(v3, v58);
        if ( v62 != -1 )
        {
          v63 = (_QWORD *)v3[30];
          if ( !v63 )
            goto LABEL_52;
          v64 = 24;
          v65 = *v63 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v65 )
            goto LABEL_66;
          if ( (*(_BYTE *)(*v63 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_52;
          v64 = v65 + 24;
          v71 = v62 <= *(_DWORD *)(v65 + 24);
          if ( v62 < *(_DWORD *)(v65 + 24) )
          {
LABEL_59:
            v65 = *(_QWORD *)(v65 + 8);
            goto LABEL_60;
          }
          while ( !v71 )
          {
            v65 = *(_QWORD *)(v65 + 16);
LABEL_60:
            if ( (*(_BYTE *)v65 & 2) != 0 )
              goto LABEL_52;
            v64 = v65 + 24;
            v71 = v62 <= *(_DWORD *)(v65 + 24);
            if ( v62 < *(_DWORD *)(v65 + 24) )
              goto LABEL_59;
          }
          if ( (_QWORD *)v65 == v63 )
          {
LABEL_52:
            v66 = -1;
            v67 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3[22] + 8LL) + 528LL) + 8LL * v62);
            v68 = *(_QWORD *)(v67 + 56);
            if ( v68 )
              v66 = *(_QWORD *)(v68 + 24);
            v69 = sub_23CB40(v55, v66);
            if ( *(int *)(v67 + 376) <= 0 )
            {
              *((_DWORD *)v69 + 2) = 80;
              v76 = j__qalloc_or_throw();
              *(_QWORD *)(v76 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v76 = -1;
              *(_QWORD *)(v76 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v76 + 40) = 0;
              *(_QWORD *)(v76 + 48) = 0;
              *(_DWORD *)(v76 + 56) = 0;
              *(_OWORD *)(v76 + 24) = 0;
              v69[3] = v76;
            }
            else
            {
              *((_DWORD *)v69 + 2) = 78;
            }
          }
          else
          {
LABEL_66:
            v72 = sub_23CB40(v55, -1);
            v73 = *(_DWORD *)(v64 + 4);
            *((_DWORD *)v72 + 2) = 81;
            v74 = v72;
            v75 = (_DWORD *)j__qalloc_or_throw();
            v74[3] = v75;
            *v75 = v73;
          }
        }
      }
    }
    while ( v87 != v34 );
  }
  return sub_23D840(v14, v3[22], *v94, 0);
}

