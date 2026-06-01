bool __fastcall sub_27AE10(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 *a5,
        unsigned __int64 a6,
        __m128i a7)
{
  int v11; // eax
  unsigned __int64 v12; // r15
  bool result; // al
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  char tinfo; // bl
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // zf
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  int v25; // ebx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  const __m128i *v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // r13
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  const __m128i *v36; // rsi
  unsigned __int64 v37; // rbp
  __m128i *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r13
  size_t v43; // r14
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i si128; // xmm0
  __int64 v47; // rbx
  size_t v48; // r14
  void *v49; // rax
  const __m128i *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // rbx
  char v53; // bl
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // rbp
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  const __m128i *v60; // rdi
  __int64 v61; // rbp
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbp
  __m128i *v65; // rax
  __int64 v66; // rdx
  void *v67; // rax
  _QWORD *v69; // [rsp+10h] [rbp-178h]
  int v70; // [rsp+18h] [rbp-170h]
  char v71; // [rsp+20h] [rbp-168h]
  int v72; // [rsp+34h] [rbp-154h]
  __int64 v73; // [rsp+48h] [rbp-140h] BYREF
  __m128i *v74; // [rsp+50h] [rbp-138h] BYREF
  __int128 v75; // [rsp+58h] [rbp-130h]
  __int64 v76; // [rsp+70h] [rbp-118h] BYREF
  __int128 v77; // [rsp+78h] [rbp-110h]
  __int128 v78; // [rsp+88h] [rbp-100h]
  __int64 v79; // [rsp+98h] [rbp-F0h]
  int v80; // [rsp+A0h] [rbp-E8h]
  __m128i v81[9]; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 v82; // [rsp+148h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v11 = sub_278A80(a1, a5);
  v12 = v11;
  if ( v11 > 0 )
  {
LABEL_2:
    if ( (unsigned int)(a3 / v12) != 1 || a4 )
    {
      v81[0].m128i_i32[2] = 0;
      v81[0].m128i_i32[3] = a3 / v12;
      v81[0].m128i_i64[0] = 0;
      copy_tinfo_t();
      tinfo = create_tinfo();
      clear_tinfo_t();
      if ( !tinfo )
        return 0;
    }
    goto LABEL_4;
  }
  v14 = sub_278CA0(a1);
  v12 = v14;
  if ( v14 < 0 )
    return 0;
  if ( v14 )
  {
    v76 = 0;
    *(_QWORD *)&v77 = 0;
    DWORD2(v77) = 0;
    BYTE12(v77) = 0;
    if ( v14 == 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC408u, *(double *)a7.m128i_i64);
      goto LABEL_135;
    }
    v15 = (_QWORD *)*a1;
    if ( *a1 )
    {
      if ( a1[1] )
      {
        v16 = v15[1];
        if ( v15 != (_QWORD *)v16 )
        {
          while ( 1 )
          {
            a7 = _mm_loadu_si128((const __m128i *)(v16 + 24));
            v81[1] = (__m128i)*(unsigned __int64 *)(v16 + 40);
            v81[0] = a7;
            copy_tinfo_t();
            v81[2].m128i_i32[0] = *(_DWORD *)(v16 + 56);
            if ( (int)v12 < v81[2].m128i_i32[0] )
              break;
            v74 = v81;
            v81[1].m128i_i32[1] %= (int)v12;
            v81[1].m128i_i32[0] %= (int)v12;
            sub_27AC10((__m128i *)&v76, (__int64)v81, (const __m128i **)&v74);
            clear_tinfo_t();
            if ( (*(_QWORD *)v16 & 2) == 0 )
            {
              v17 = *(_QWORD *)(v16 + 16);
              if ( (*(_BYTE *)v17 & 2) != 0 )
              {
                v19 = (_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
                v20 = *v19;
                if ( (*v19 & 2) != 0 || v19[2] != v16 )
                {
LABEL_23:
                  v16 = (unsigned __int64)v19;
                }
                else
                {
                  while ( 1 )
                  {
                    v16 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                    v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v20 & 2) != 0 )
                      break;
                    v21 = v19;
                    v19 = (_QWORD *)v16;
                    if ( *(_QWORD **)(v16 + 16) != v21 )
                      goto LABEL_23;
                  }
                }
              }
              else
              {
                do
                {
                  v16 = v17;
                  v17 = *(_QWORD *)(v17 + 8);
                }
                while ( (*(_BYTE *)v17 & 2) == 0 );
              }
            }
            if ( *a1 == v16 )
              goto LABEL_20;
          }
          if ( !under_debugger )
            sub_383060(0xC409u, *(double *)a7.m128i_i64);
          goto LABEL_135;
        }
      }
    }
LABEL_20:
    sub_27A4D0((__int64)&v76);
    if ( !(unsigned __int8)sub_27AE10(&v76, a2, 0, 0, a5, v12)
      || (get_tinfo_property() & 0xF) == 0xB && !get_tinfo_size() )
    {
      sub_279460(&v76);
      return 0;
    }
    sub_279460(&v76);
    goto LABEL_2;
  }
  a7.m128i_i64[0] = 0;
  v22 = a1[1] == 0;
  v73 = 0;
  v74 = nullptr;
  v75 = 0;
  if ( v22 )
  {
    if ( !under_debugger )
      sub_383060(0xC40Au, 0.0);
    goto LABEL_135;
  }
  v23 = (_QWORD *)*a1;
  v24 = nullptr;
  if ( *a1 )
    v24 = (_QWORD *)v23[1];
  v72 = 0;
  v25 = -1;
  v70 = -1;
  if ( v24 == v23 )
    goto LABEL_41;
  do
  {
    v26 = v24 + 3;
    if ( *((_DWORD *)v24 + 11) != v25 )
    {
LABEL_33:
      if ( v25 != -1 && v25 >= v72 )
      {
LABEL_43:
        if ( !a6 || a6 >= v25 + v70 )
        {
          if ( !(_BYTE)v73 || (get_tinfo_property() & 0x3F) == 1 )
            goto LABEL_87;
          if ( v25 != v72 )
          {
            v28 = v75;
            v29 = v74;
            if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
            {
              v74 = (__m128i *)qvector_reserve((__int64)&v74, (__int64)v74, v75 + 1, 8);
              v29 = v74;
              v28 = v75;
            }
            v29->m128i_i64[v28] = 0;
            v81[0].m128i_i32[2] = 0;
            v81[0].m128i_i32[3] = v25 - v72;
            *(_QWORD *)&v75 = v75 + 1;
            v76 = 17;
            v81[0].m128i_i64[0] = 0;
            copy_tinfo_t();
            v71 = create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            if ( !v71 )
              goto LABEL_87;
          }
          if ( v70 > 0 )
          {
            v81[0].m128i_i64[0] = 0;
            copy_tinfo_t();
            v35 = v75;
            v36 = v74;
            if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
            {
              v74 = (__m128i *)qvector_reserve((__int64)&v74, (__int64)v74, v75 + 1, 8);
              v36 = v74;
              v35 = v75;
            }
            v36->m128i_i64[v35] = 0;
            copy_tinfo_t();
            *(_QWORD *)&v75 = v75 + 1;
            clear_tinfo_t();
            v72 = v25 + v70;
          }
          v23 = (_QWORD *)*a1;
        }
        if ( v24 == v23 )
          goto LABEL_76;
        v26 = v24 + 3;
      }
      v25 = *((_DWORD *)v26 + 5);
      v69 = v26;
      copy_tinfo_t();
      goto LABEL_36;
    }
    if ( v23 )
    {
      if ( !a1[1] )
        goto LABEL_63;
      v34 = (_QWORD *)v23[1];
    }
    else
    {
      v34 = nullptr;
    }
    if ( v34 == v24 )
      goto LABEL_33;
LABEL_63:
    v69 = v24 + 3;
    if ( (unsigned int)sub_2782C0(&v73, v24 + 6) == -1 )
    {
      copy_tinfo_t();
LABEL_36:
      v70 = *((_DWORD *)v69 + 8);
    }
    if ( (*v24 & 2) == 0 )
    {
      v27 = (_QWORD *)v24[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
        v30 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
        v31 = *v30;
        if ( (*v30 & 2) != 0 || (_QWORD *)v30[2] != v24 )
        {
LABEL_56:
          v24 = v30;
        }
        else
        {
          while ( 1 )
          {
            v32 = v30;
            v33 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v31 & 2) != 0 )
              break;
            v30 = (_QWORD *)v33;
            if ( *(_QWORD **)(v33 + 16) != v32 )
              goto LABEL_56;
          }
          v24 = (_QWORD *)v33;
        }
      }
      else
      {
        do
        {
          v24 = v27;
          v27 = (_QWORD *)v27[1];
        }
        while ( (*(_BYTE *)v27 & 2) == 0 );
      }
    }
    v23 = (_QWORD *)*a1;
  }
  while ( v24 != (_QWORD *)*a1 );
LABEL_41:
  if ( v25 >= v72 && v25 != -1 )
    goto LABEL_43;
LABEL_76:
  v37 = v75;
  if ( !(_QWORD)v75 )
  {
    v50 = v74;
    if ( v74 )
      goto LABEL_91;
    goto LABEL_92;
  }
  if ( !a6 )
    goto LABEL_78;
  if ( a6 < v72 )
  {
    if ( !under_debugger )
      sub_383060(0xC40Bu, 0.0);
    goto LABEL_135;
  }
  if ( v72 >= a6 )
  {
LABEL_78:
    if ( (_QWORD)v75 == 1 )
      goto LABEL_123;
    a7.m128i_i64[0] = 0;
    v76 = 0;
    v79 = 0;
    v80 = 1;
    v77 = 0;
    v78 = 0;
LABEL_80:
    v38 = nullptr;
    memset(v81, 0, sizeof(v81));
    v81[7].m128i_i64[0] = 1;
    v81[7].m128i_i32[2] = -1;
    v39 = qvector_reserve((__int64)&v76, 0, v37, 144);
    v42 = v77;
    v76 = v39;
    if ( (unsigned __int64)v77 < v37 )
    {
      do
      {
        si128 = _mm_load_si128(v81);
        v47 = v76 + 144 * v42;
        *(_QWORD *)(v47 + 16) = 0;
        *(__m128i *)v47 = si128;
        *(_OWORD *)(v47 + 24) = 0;
        v48 = v81[1].m128i_u64[1];
        if ( v81[1].m128i_i64[1] )
        {
          v49 = (void *)qalloc_or_throw(v81[1].m128i_i64[1], (__int64)v38, v40, v41);
          *(_QWORD *)(v47 + 16) = v49;
          *(_QWORD *)(v47 + 32) = v48;
          v38 = (__m128i *)v81[1].m128i_i64[0];
          memcpy(v49, (const void *)v81[1].m128i_i64[0], v48);
          *(_QWORD *)(v47 + 24) = v48;
        }
        *(_QWORD *)(v47 + 40) = 0;
        *(_OWORD *)(v47 + 48) = 0;
        v43 = v81[3].m128i_u64[0];
        if ( v81[3].m128i_i64[0] )
        {
          v67 = (void *)qalloc_or_throw(v81[3].m128i_i64[0], (__int64)v38, v40, v41);
          *(_QWORD *)(v47 + 40) = v67;
          *(_QWORD *)(v47 + 56) = v43;
          memcpy(v67, (const void *)v81[2].m128i_i64[1], v43);
          *(_QWORD *)(v47 + 48) = v43;
        }
        *(_QWORD *)(v47 + 64) = 0;
        v38 = &v81[4];
        copy_tinfo_t();
        v44 = v81[7].m128i_i64[1];
        ++v42;
        *(__m128i *)(v47 + 72) = _mm_loadu_si128((const __m128i *)&v81[4].m128i_u64[1]);
        v45 = _mm_loadu_si128((const __m128i *)&v81[5].m128i_u64[1]);
        *(_QWORD *)(v47 + 120) = v44;
        *(__m128i *)(v47 + 88) = v45;
        a7 = _mm_loadu_si128((const __m128i *)&v81[6].m128i_u64[1]);
        *(__m128i *)(v47 + 104) = a7;
        *(_QWORD *)(v47 + 128) = v81[8].m128i_i64[0];
        *(_BYTE *)(v47 + 136) = v81[8].m128i_i8[8];
      }
      while ( v42 != v37 );
    }
    *(_QWORD *)&v77 = v37;
    clear_tinfo_t();
    if ( v81[2].m128i_i64[1] )
    {
      v81[3].m128i_i64[0] = 0;
      qfree(v81[2].m128i_i64[1]);
    }
    if ( v81[1].m128i_i64[0] )
    {
      v81[1].m128i_i64[1] = 0;
      qfree(v81[1].m128i_i64[0]);
    }
    if ( (_QWORD)v75 )
    {
      v63 = 0;
      do
      {
        v64 = 144 * v63;
        copy_tinfo_t();
        sub_6B870((__int64 *)(v76 + v64 + 16));
        LODWORD(v12) = v12 + 1;
        v63 = (int)v12;
      }
      while ( (int)v12 < (unsigned __int64)v75 );
    }
LABEL_102:
    create_tinfo();
    v54 = v76;
    if ( v76 )
    {
      v55 = v77;
      v56 = 0;
      if ( (_QWORD)v77 )
      {
        do
        {
          v57 = (_QWORD *)(v54 + 144 * v56);
          clear_tinfo_t();
          v58 = v57[5];
          if ( v58 )
          {
            v57[6] = 0;
            qfree(v58);
          }
          v59 = v57[2];
          if ( v59 )
          {
            v57[3] = 0;
            qfree(v59);
          }
          ++v56;
          v54 = v76;
        }
        while ( v55 != v56 );
      }
      *(_QWORD *)&v77 = 0;
      qfree(v54);
    }
LABEL_110:
    v60 = v74;
    if ( v74 )
    {
      v61 = v75;
      v62 = 0;
      if ( (_QWORD)v75 )
      {
        do
        {
          ++v62;
          clear_tinfo_t();
          v60 = v74;
        }
        while ( v61 != v62 );
      }
      *(_QWORD *)&v75 = 0;
      qfree((__int64)v60);
    }
    clear_tinfo_t();
LABEL_4:
    result = sub_32CB80(a5, a2);
    if ( result )
      return result;
    if ( !under_debugger )
      sub_383060(0xC40Cu, *(double *)a7.m128i_i64);
LABEL_135:
    BUG();
  }
  if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
  {
    v74 = (__m128i *)qvector_reserve((__int64)&v74, (__int64)v74, v75 + 1, 8);
    v37 = v75;
  }
  v74->m128i_i64[v37] = 0;
  *(_QWORD *)&v75 = v75 + 1;
  v81[0].m128i_i32[2] = 0;
  v76 = 17;
  v81[0].m128i_i64[0] = 0;
  v81[0].m128i_i32[3] = a6 - v72;
  copy_tinfo_t();
  v53 = create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v53 )
  {
    v37 = v75;
    if ( (_QWORD)v75 != 1 )
    {
      v76 = 0;
      a7.m128i_i64[0] = 0;
      v79 = 0;
      v80 = 1;
      v77 = 0;
      v78 = 0;
      if ( !(_QWORD)v75 )
        goto LABEL_102;
      goto LABEL_80;
    }
LABEL_123:
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v65 = v74;
      v66 = *a5;
      *a5 = v74->m128i_i64[0];
      v65->m128i_i64[0] = v66;
      goto LABEL_110;
    }
  }
LABEL_87:
  v50 = v74;
  if ( v74 )
  {
    v51 = v75;
    if ( (_QWORD)v75 )
    {
      v52 = 0;
      do
      {
        ++v52;
        clear_tinfo_t();
        v50 = v74;
      }
      while ( v51 != v52 );
    }
LABEL_91:
    *(_QWORD *)&v75 = 0;
    qfree((__int64)v50);
  }
LABEL_92:
  clear_tinfo_t();
  return 0;
}

