__int64 __fastcall sub_1B98C0(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // r14
  __int64 flags; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rax
  char v20; // r13
  _QWORD *v21; // r9
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  void *v27; // rax
  __int64 v28; // rcx
  size_t v29; // r9
  void *v30; // r13
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r13d
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rbp
  _QWORD *v48; // r13
  __int64 v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // rbx
  int v52; // r12d
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  int v66; // eax
  int v67; // [rsp+10h] [rbp-D8h]
  unsigned int v68; // [rsp+10h] [rbp-D8h]
  unsigned int v69; // [rsp+10h] [rbp-D8h]
  char v70; // [rsp+17h] [rbp-D1h]
  size_t n; // [rsp+18h] [rbp-D0h]
  __int64 na; // [rsp+18h] [rbp-D0h]
  size_t v73; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v75; // [rsp+28h] [rbp-C0h]
  size_t v76; // [rsp+28h] [rbp-C0h]
  __int64 v77; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int8 *v78; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int128 v81; // [rsp+58h] [rbp-90h]
  __int64 v82; // [rsp+70h] [rbp-78h] BYREF
  __int128 v83; // [rsp+78h] [rbp-70h]
  _DWORD *v84; // [rsp+88h] [rbp-60h] BYREF
  __int128 v85; // [rsp+90h] [rbp-58h]
  unsigned __int64 v86; // [rsp+A8h] [rbp-40h]

  v5 = a2 + 64;
  v86 = __readfsqword(0x28u);
  v77 = a2;
  v8 = sub_129440(a1, a2 + 64, (__int64)&v77, 0, a3, a4);
  if ( !v8 )
    return 0;
  if ( *(_DWORD *)v8 != 2 )
    return 0;
  if ( *(_BYTE *)(v8 + 48) != 4 )
    return 0;
  v10 = *(_QWORD *)(v8 + 56);
  if ( *(_DWORD *)v10 != 12 )
    return 0;
  v11 = v10 + 32;
  v12 = v10 + 48;
  if ( *(_BYTE *)(v10 + 32) != 10 )
  {
    if ( *(_BYTE *)(v10 + 48) != 10 )
      return 0;
    v12 = v10 + 32;
    v11 = v10 + 48;
  }
  v13 = (_DWORD *)sub_129440(a1, v12, (__int64)&v77, 0, a3, a4);
  if ( !v13 )
    return 0;
  if ( *v13 != 14 )
    return 0;
  if ( !sub_11C8A0((__int64)v13, &v78) )
    return 0;
  if ( *(_BYTE *)v11 != 10 )
    return 0;
  if ( *(_DWORD *)(v11 + 4) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
    return 0;
  v14 = *(_QWORD *)(v11 + 8);
  if ( *(_BYTE *)v14 != 6 )
    return 0;
  v15.m128i_i64[0] = 0;
  v67 = 0;
  v84 = nullptr;
  v83 = 0;
  v85 = 0;
  v16 = *(_QWORD *)(v14 + 8);
  v82 = 0;
  v70 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)get_data_value()
      || (v18 = *(_QWORD **)(a1 + 64), v19 = sub_330F80(v18, v79), (v20 = sub_332920((__int64)(v18 + 1), v19)) == 0) )
    {
LABEL_43:
      if ( v70 )
      {
        result = 4294967279LL;
        goto LABEL_53;
      }
      if ( !(_QWORD)v85 || !(unsigned __int8)sub_155D40(a1, v77, (__int64)v78, v77, a2, 0, *(double *)v15.m128i_i64, a4) )
      {
        result = 0;
        goto LABEL_53;
      }
      sub_123A40((__int64)&src, v78, v38, v39);
      sub_11CA10((char *)(a2 + 32), (char *)&src);
      sub_11CDA0(v5);
      sub_11CDA0(a2 + 48);
      v42 = j__qalloc_or_throw(48, (__int64)&src, v40, v41);
      *(_QWORD *)v42 = 0;
      v43 = v82;
      *(_OWORD *)(v42 + 8) = 0;
      *(_QWORD *)v42 = v43;
      v44 = v83;
      *(_QWORD *)(v42 + 24) = 0;
      *(_QWORD *)(v42 + 8) = v44;
      v45 = *((_QWORD *)&v83 + 1);
      *(_OWORD *)(v42 + 32) = 0;
      *(_QWORD *)(v42 + 16) = v45;
      v82 = 0;
      *(_QWORD *)(v42 + 24) = v84;
      v84 = nullptr;
      *(_QWORD *)(v42 + 32) = v85;
      v83 = 0;
      *(_QWORD *)(v42 + 40) = *((_QWORD *)&v85 + 1);
      *(_DWORD *)a2 = 53;
      *(_BYTE *)(a2 + 48) = 12;
      *(_QWORD *)(a2 + 56) = v42;
      v85 = 0;
      sub_167810(a1, (unsigned int *)a2, 6u, (__m128i)0LL, a4, a5);
      v46 = *(_DWORD *)(a1 + 24);
      BYTE1(v46) &= ~2u;
      LOBYTE(v46) = v46 | 0x80;
      *(_DWORD *)(a1 + 24) = v46;
      if ( *(_DWORD *)a2 )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL);
        if ( v47 )
        {
          while ( 1 )
          {
            if ( a1 != v47 )
            {
              v48 = *(_QWORD **)(v47 + 56);
              if ( v48 )
              {
                if ( sub_125B90(
                       *(unsigned __int8 **)(v47 + 56),
                       *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL),
                       (unsigned int *)a2,
                       0,
                       0.0) )
                {
                  break;
                }
              }
            }
            v47 = *(_QWORD *)(v47 + 8);
            if ( !v47 )
              goto LABEL_52;
          }
          if ( v48 == *(_QWORD **)(v47 + 48) )
            goto LABEL_68;
          if ( !sub_1201A0(v48, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL)) )
          {
            v57 = sub_68FC0(*(_QWORD *)(a1 + 64), *(_DWORD *)(v47 + 72) + 1, v55, v56, 0.0);
            sub_A33C0(v47, (__int64)v48);
            sub_A3160(v57, v48, 0, 0.0);
            *(_DWORD *)(v57 + 24) |= 2u;
            sub_B57E0(v47, (__int64)v48, v58, v59, v60, v61);
            sub_B57E0(v57, (__int64)v48, v62, v63, v64, v65);
            v47 = v57;
LABEL_68:
            sub_11D5A0(a2);
            *(_DWORD *)a2 = 55;
            v66 = *(_DWORD *)(v47 + 72);
            *(_BYTE *)(a2 + 32) = 7;
            *(_DWORD *)(a2 + 40) = v66;
          }
        }
      }
LABEL_52:
      sub_A2520(a1, "RESOLVE_TABLE_JUMP");
      sub_11CDA0((__int64)&src);
      result = 1;
      goto LABEL_53;
    }
    v21 = sub_670B0(*(_QWORD *)(a1 + 64), v79);
    if ( !v21 )
      break;
    v22 = &v84[v85];
    if ( v84 == v22 )
      goto LABEL_35;
    v23 = v84;
    while ( *((_DWORD *)v21 + 18) != *v23 )
    {
      if ( v22 == ++v23 )
        goto LABEL_35;
    }
    if ( v22 == v23 )
    {
LABEL_35:
      a4 = 0;
      n = (size_t)v21;
      src = nullptr;
      v81 = 0;
      v27 = (void *)qvector_reserve((__int64)&src, 0, 1, 8);
      v29 = n;
      src = v27;
      *((_QWORD *)v27 + v81) = v67;
      v30 = nullptr;
      v31 = v81 + 1;
      *(_QWORD *)&v81 = v81 + 1;
      if ( (_QWORD)v81 )
      {
        v76 = n;
        v74 = v31;
        na = 8 * v31;
        v30 = (void *)qalloc_or_throw(8 * v31, 0, 8 * v31, v28);
        memcpy(v30, src, na);
        v29 = v76;
        v31 = v74;
      }
      v32 = v83;
      v33 = v82;
      if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
      {
        v75 = v31;
        v73 = v29;
        v82 = qvector_reserve((__int64)&v82, v82, v83 + 1, 24);
        v33 = v82;
        v31 = v75;
        v32 = v83;
        v29 = v73;
      }
      v34 = v33 + 24 * v32;
      v15 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      *(_QWORD *)v34 = v30;
      *(__m128i *)(v34 + 8) = v15;
      v35 = v85;
      v36 = *(_DWORD *)(v29 + 72);
      *(_QWORD *)&v83 = v83 + 1;
      v37 = (__int64)v84;
      if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
      {
        v84 = (_DWORD *)qvector_reserve((__int64)&v84, (__int64)v84, v85 + 1, 4);
        v37 = (__int64)v84;
        v35 = v85;
      }
      *(_DWORD *)(v37 + 4 * v35) = v36;
      *(_QWORD *)&v85 = v85 + 1;
      if ( src )
      {
        *(_QWORD *)&v81 = 0;
        qfree((__int64)src);
      }
    }
    else
    {
      src = (void *)v67;
      v24 = (__int64 *)(v82 + 24LL * (int)(v23 - v84));
      v25 = v24[1];
      v26 = *v24;
      if ( v24[2] < (unsigned __int64)(v25 + 1) )
      {
        v26 = qvector_reserve((__int64)v24, v26, v25 + 1, 8);
        *v24 = v26;
        v25 = v24[1];
      }
      *(_QWORD *)(v26 + 8 * v25) = v67;
      ++v24[1];
    }
LABEL_21:
    v16 += *(int *)(v11 + 4);
    flags = get_flags_ex();
    if ( (flags & 0xD000) != 0 || (~BYTE1(flags) & 6) == 0 )
      goto LABEL_43;
    ++v67;
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 49LL) < 0 )
    v79 &= ~1uLL;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    add_cref();
    v70 = v20;
    goto LABEL_21;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 488LL) = v79;
  result = 4294967292LL;
LABEL_53:
  if ( v84 )
  {
    v68 = result;
    *(_QWORD *)&v85 = 0;
    qfree((__int64)v84);
    result = v68;
  }
  v49 = v82;
  if ( v82 )
  {
    v50 = v83;
    v51 = 0;
    v52 = result;
    if ( (_QWORD)v83 )
    {
      do
      {
        v53 = (__int64 *)(v49 + 24 * v51);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54);
          v49 = v82;
        }
        ++v51;
      }
      while ( v50 != v51 );
      LODWORD(result) = v52;
    }
    v69 = result;
    *(_QWORD *)&v83 = 0;
    qfree(v49);
    return v69;
  }
  return result;
}

