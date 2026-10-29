__int64 __fastcall sub_26EFD0(
        __m128i *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm1
  const char *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  char tinfo_property; // al
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 tinfo_size; // rax
  __int64 v29; // r15
  __int64 v31; // rax
  __int64 v32; // r14
  int v33; // r9d
  const char *v34; // r8
  const char *v35; // rcx
  char tinfo_details; // al
  __int64 v37; // rdi
  int v38; // r14d
  _QWORD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rbx
  __m128i *v42; // r12
  _QWORD *v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r15
  int v46; // [rsp+24h] [rbp-1ACh]
  char v47; // [rsp+37h] [rbp-199h]
  int v48; // [rsp+48h] [rbp-188h]
  __m128i *v49; // [rsp+58h] [rbp-178h]
  __int64 v50; // [rsp+58h] [rbp-178h]
  __int64 v51; // [rsp+60h] [rbp-170h] BYREF
  __int64 v52; // [rsp+68h] [rbp-168h] BYREF
  __int64 v53[2]; // [rsp+70h] [rbp-160h] BYREF
  const char *v54; // [rsp+80h] [rbp-150h]
  __m128i v55; // [rsp+88h] [rbp-148h] BYREF
  __int64 v56; // [rsp+98h] [rbp-138h]
  __int128 v57; // [rsp+A0h] [rbp-130h]
  __int128 v58; // [rsp+B0h] [rbp-120h]
  __int64 v59; // [rsp+E0h] [rbp-F0h]
  int v60; // [rsp+E8h] [rbp-E8h]
  __int64 v61; // [rsp+F0h] [rbp-E0h]
  char v62; // [rsp+F8h] [rbp-D8h]
  _BYTE v63[24]; // [rsp+100h] [rbp-D0h] BYREF
  __int128 v64; // [rsp+118h] [rbp-B8h]
  __int64 v65; // [rsp+128h] [rbp-A8h]
  __int128 v66; // [rsp+130h] [rbp-A0h]
  __int128 v67; // [rsp+140h] [rbp-90h]
  __int64 v68; // [rsp+170h] [rbp-60h]
  int v69; // [rsp+178h] [rbp-58h]
  __int64 v70; // [rsp+180h] [rbp-50h]
  char v71; // [rsp+188h] [rbp-48h]
  unsigned __int64 v72; // [rsp+198h] [rbp-38h]

  v49 = a1;
  v72 = __readfsqword(0x28u);
  v10 = *a3;
  v59 = 1;
  v53[1] = 0;
  v54 = nullptr;
  v56 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v60 = -1;
  v53[0] = 8 * a5;
  v61 = 0;
  v62 = 0;
  v47 = get_tinfo_property() & 0x3F;
  if ( v47 == 29 && (unsigned int)sub_26E8C0(a1, v53, a6, a5) == -1
    || (LODWORD(v11) = find_tinfo_udt_member(), (_DWORD)v11 == -1) )
  {
    tinfo_size = get_tinfo_size();
    if ( a5 - 1 <= tinfo_size )
      tinfo_size = a5 - 1;
    v29 = tinfo_size;
    if ( tinfo_size < 0 )
      v29 = 0;
    while ( 1 )
    {
      LODWORD(v11) = sub_3294D0(v53, &a1[8].m128i_u64[1], v29, 0);
      if ( (_DWORD)v11 != -1 )
        break;
      if ( v29-- == 0 )
        goto LABEL_56;
    }
  }
  if ( !a1[4].m128i_i64[0] || (get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 0xB )
    goto LABEL_5;
  v31 = a1[7].m128i_i64[1];
  if ( !v31 )
  {
    memset(v63, 0, sizeof(v63));
    v65 = 0;
    LODWORD(v66) = 1;
    v64 = 0;
    tinfo_details = get_tinfo_details();
    v37 = *(_QWORD *)v63;
    if ( !tinfo_details )
      goto LABEL_109;
    if ( (int)v11 > 0 )
    {
      v38 = v11 - 1;
      v39 = (_QWORD *)(*(_QWORD *)v63 + 144LL * ((int)v11 - 1));
      if ( v39[1] )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_108;
        v37 = *(_QWORD *)v63;
      }
    }
    v38 = v11 + 1;
    if ( (unsigned __int64)((int)v11 + 1) >= *(_QWORD *)&v63[8] )
      goto LABEL_109;
    v39 = (_QWORD *)(v37 + 144LL * v38);
    if ( v49[5].m128i_i64[1] < *v39 >> 3 )
    {
      if ( !v37 )
        goto LABEL_5;
      v40 = *(_QWORD *)&v63[8];
      goto LABEL_84;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v37 = *(_QWORD *)v63;
LABEL_109:
      if ( !v37 )
        goto LABEL_5;
      v40 = *(_QWORD *)&v63[8];
      if ( !*(_QWORD *)&v63[8] )
      {
LABEL_91:
        *(_QWORD *)&v63[8] = 0;
        qfree();
        goto LABEL_5;
      }
LABEL_84:
      v48 = v11;
      v41 = v40;
      v42 = v49;
      v50 = 0;
      do
      {
        v43 = (_QWORD *)(v37 + 144 * v50);
        clear_tinfo_t();
        if ( v43[5] )
        {
          v43[6] = 0;
          qfree();
        }
        if ( v43[2] )
        {
          v43[3] = 0;
          qfree();
        }
        ++v50;
        v37 = *(_QWORD *)v63;
      }
      while ( v50 != v41 );
      LODWORD(v11) = v48;
      v49 = v42;
      goto LABEL_91;
    }
LABEL_108:
    sub_266750((__int64)v53, (__int64)v39);
    v37 = *(_QWORD *)v63;
    LODWORD(v11) = v38;
    goto LABEL_109;
  }
  v32 = a5 - v31;
  if ( a1[5].m128i_i64[1] >= v32 )
  {
    v53[0] = 8 * v32;
    LODWORD(v11) = find_tinfo_udt_member();
    if ( (_DWORD)v11 == -1 )
      goto LABEL_56;
  }
LABEL_5:
  if ( (get_tinfo_property() & 0xF) == 0xE )
  {
LABEL_56:
    v10 = 0;
    goto LABEL_43;
  }
  if ( (v61 & 0x2000000000LL) != 0 )
  {
    print_tinfo();
  }
  else
  {
    v12 = _mm_loadu_si128(&v55);
    v13 = *(const char **)a8;
    v14 = _mm_loadu_si128((const __m128i *)(a8 + 8));
    *(_QWORD *)a8 = v54;
    *(__m128i *)(a8 + 8) = v12;
    v54 = v13;
    v55 = v14;
  }
  v51 = 0;
  copy_tinfo_t();
  lower_type();
  v15 = v10;
  if ( *(_DWORD *)(v10 + 8) == 52 )
    v15 = *(_QWORD *)(v10 + 24);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    if ( v53[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( v49[28].m128i_i8[5] )
      {
LABEL_49:
        v10 = 0;
        goto LABEL_42;
      }
      v46 = 60;
      goto LABEL_28;
    }
    v46 = 60;
  }
  else
  {
    if ( v53[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( !v49[28].m128i_i8[5] )
      {
LABEL_27:
        v46 = 59;
        goto LABEL_28;
      }
LABEL_25:
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
        goto LABEL_49;
      goto LABEL_27;
    }
    v46 = 59;
  }
  v52 = 0;
  copy_tinfo_t();
  v16 = v49[1].m128i_i64[0];
  v17 = *(_DWORD *)(v16 + 8) - 1;
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)v16 + 8LL * (unsigned int)v17;
    while ( *(_QWORD *)v18 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
      if ( v19 == 51 )
      {
        *(_QWORD *)v63 = 0;
        *(_QWORD *)v63 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        get_tinfo_size();
        break;
      }
      if ( v19 == 48 )
      {
        --v17;
        v18 -= 8;
        if ( v17 != -1 )
          continue;
      }
      break;
    }
  }
  clear_tinfo_t();
  if ( v49[28].m128i_i8[5] )
  {
    if ( v46 == 60 )
      goto LABEL_49;
    goto LABEL_25;
  }
LABEL_28:
  if ( !(unsigned __int8)sub_328840(&v51, v49->m128i_i64[0], -1) )
  {
    memset(v63, 0, sizeof(v63));
    print_tinfo();
    v34 = s1;
    if ( *(_QWORD *)(a8 + 8) )
      v34 = *(const char **)a8;
    v35 = s1;
    if ( *(_QWORD *)&v63[8] )
      LODWORD(v35) = *(_DWORD *)v63;
    sub_32CD90(*(_QWORD *)(*(_QWORD *)(v49->m128i_i64[1] + 64) + 8LL), -1, 23, (_DWORD)v35, (_DWORD)v34, v33);
    if ( *(_QWORD *)v63 )
    {
      *(_QWORD *)&v63[8] = 0;
      qfree();
    }
    goto LABEL_49;
  }
  v21 = j__qalloc_or_throw();
  *(_QWORD *)v21 = -1;
  v22 = v21;
  *(_QWORD *)(v21 + 12) = -1;
  *(_DWORD *)(v21 + 8) = v46;
  *(_QWORD *)(v21 + 24) = v15;
  *(_QWORD *)(v21 + 32) = 0;
  *(_QWORD *)(v21 + 40) = 0;
  if ( v47 != 29 )
    v11 = (unsigned __int64)v53[0] >> 3;
  v23 = v51;
  *(_DWORD *)(v22 + 32) = v11;
  *(_DWORD *)(v22 + 56) = 1;
  *(_QWORD *)(v22 + 48) = v23;
  v51 = 0;
  *(_DWORD *)(v22 + 40) = get_tinfo_size();
  copy_tinfo_t();
  if ( *(_DWORD *)(v10 + 8) == 52 )
  {
    *(_QWORD *)(v10 + 24) = v22;
    sub_328210(v63, *(_QWORD *)(v49->m128i_i64[0] + 112), v22 + 48);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else
  {
    v24 = get_tinfo_property();
    if ( (v24 & 0xFu) <= 0xA || (v24 & 0x3F) == 0x2D )
    {
      if ( v49[28].m128i_i8[5] )
      {
        if ( !under_debugger )
          sub_37EEE0(50209);
LABEL_122:
        BUG();
      }
      v49[28].m128i_i8[5] = 1;
    }
    if ( v46 == 60 )
      ++v49[27].m128i_i32[2];
    v10 = v22;
  }
  if ( v47 == 29 )
    goto LABEL_42;
  v25 = *(unsigned int *)(v22 + 32);
  v26 = v49[5].m128i_i64[1];
  if ( v25 > v26 )
  {
    if ( !under_debugger )
      sub_37EEE0(50183);
    goto LABEL_122;
  }
  v49[5].m128i_i64[1] = v26 - v25;
  if ( (v61 & 0x10000000000LL) == 0 || *(_DWORD *)(v22 + 8) != 59 )
    goto LABEL_42;
  v44 = v49->m128i_i64[0];
  v45 = *(_QWORD *)(v22 + 24);
  if ( (unsigned int)(*(_DWORD *)(v45 + 8) - 59) > 1 )
    goto LABEL_106;
  while ( 1 )
  {
    v52 = 0;
    v52 = get_tinfo_property();
    v69 = -1;
    v68 = 1;
    v65 = 0;
    v70 = 0;
    v71 = 0;
    memset(v63, 0, sizeof(v63));
    v64 = 0;
    v66 = 0;
    v67 = 0;
    if ( (unsigned int)sub_3294D0(v63, &v52, *(unsigned int *)(v45 + 32), 0) == -1 )
    {
      if ( !under_debugger )
        sub_37EEE0(51853);
      goto LABEL_122;
    }
    if ( (v70 & 0x2000000000LL) == 0 )
      break;
    *(_DWORD *)(v45 + 32) += *(_DWORD *)(v22 + 32);
    sub_251BD0((__int64 *)v22, v45);
    *(_DWORD *)(v22 + 56) |= 0x100u;
    clear_tinfo_t();
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v63[16] )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
    clear_tinfo_t();
    v45 = *(_QWORD *)(v22 + 24);
    if ( (unsigned int)(*(_DWORD *)(v45 + 8) - 59) > 1 )
      goto LABEL_106;
  }
  clear_tinfo_t();
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  if ( *(_QWORD *)&v63[16] )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  clear_tinfo_t();
LABEL_106:
  if ( (*(_BYTE *)(v22 + 57) & 1) != 0 )
    sub_240540(v22, *(_QWORD *)(v44 + 112), 0);
LABEL_42:
  clear_tinfo_t();
LABEL_43:
  clear_tinfo_t();
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  if ( v54 )
  {
    v55.m128i_i64[0] = 0;
    qfree();
  }
  return v10;
}

