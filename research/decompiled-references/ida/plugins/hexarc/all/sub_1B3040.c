__int64 __fastcall sub_1B3040(__int128 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 flags; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // r13
  _QWORD *v15; // r9
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  void *v21; // rax
  size_t v22; // r9
  void *v23; // r13
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r13d
  __int64 v30; // rsi
  __int128 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rbp
  _QWORD *v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // rbx
  int v42; // r12d
  _QWORD *v43; // rax
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  int v53; // eax
  int v54; // [rsp+10h] [rbp-D8h]
  unsigned int v55; // [rsp+10h] [rbp-D8h]
  unsigned int v56; // [rsp+10h] [rbp-D8h]
  char v57; // [rsp+17h] [rbp-D1h]
  size_t n; // [rsp+18h] [rbp-D0h]
  __int64 na; // [rsp+18h] [rbp-D0h]
  size_t v60; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+28h] [rbp-C0h]
  size_t v63; // [rsp+28h] [rbp-C0h]
  __int64 v64; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int8 *v65; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int128 v68; // [rsp+58h] [rbp-90h]
  __int64 v69; // [rsp+70h] [rbp-78h]
  __int128 v70; // [rsp+78h] [rbp-70h]
  __int64 v71; // [rsp+88h] [rbp-60h]
  __int128 v72; // [rsp+90h] [rbp-58h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-40h]

  v1 = *((_QWORD *)&a1 + 1) + 64LL;
  v2 = a1;
  v73 = __readfsqword(0x28u);
  v3 = *((_QWORD *)&a1 + 1);
  v64 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) += 64LL;
  v4 = sub_122D80(a1, (__int64)&v64, 0);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)v4 != 2 )
    return 0;
  if ( *(_BYTE *)(v4 + 48) != 4 )
    return 0;
  v6 = *(_QWORD *)(v4 + 56);
  if ( *(_DWORD *)v6 != 12 )
    return 0;
  v7 = v6 + 32;
  *((_QWORD *)&a1 + 1) = v6 + 48;
  if ( *(_BYTE *)(v6 + 32) != 10 )
  {
    if ( *(_BYTE *)(v6 + 48) != 10 )
      return 0;
    *((_QWORD *)&a1 + 1) = v6 + 32;
    v7 = v6 + 48;
  }
  v8 = (_DWORD *)sub_122D80(a1, (__int64)&v64, 0);
  if ( !v8 )
    return 0;
  if ( *v8 != 14 )
    return 0;
  if ( !sub_1161E0((__int64)v8, &v65) )
    return 0;
  if ( *(_BYTE *)v7 != 10 )
    return 0;
  if ( *(_DWORD *)(v7 + 4) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
    return 0;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)v9 != 6 )
    return 0;
  v54 = 0;
  v71 = 0;
  v70 = 0;
  v72 = 0;
  v10 = *(_QWORD *)(v9 + 8);
  v69 = 0;
  v57 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)get_data_value()
      || (v12 = *(_QWORD *)(v2 + 64), v13 = sub_329920(v12), (v14 = sub_32B2E0(v12 + 8, v13)) == 0) )
    {
LABEL_43:
      if ( v57 )
      {
        result = 4294967279LL;
        goto LABEL_53;
      }
      if ( !(_QWORD)v72
        || (*((_QWORD *)&v31 + 1) = v64,
            *(_QWORD *)&v31 = v2,
            !(unsigned __int8)sub_14F680(v31, (__int64)v65, v64, v3, 0)) )
      {
        result = 0;
        goto LABEL_53;
      }
      sub_11D380((__int64)&src, v65);
      sub_116350((char *)(v3 + 32), (char *)&src);
      sub_1166E0(v1);
      sub_1166E0(v3 + 48);
      v32 = j__qalloc_or_throw();
      *(_QWORD *)v32 = 0;
      v33 = v69;
      *(_OWORD *)(v32 + 8) = 0;
      *(_QWORD *)v32 = v33;
      v34 = v70;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 8) = v34;
      v35 = *((_QWORD *)&v70 + 1);
      *(_OWORD *)(v32 + 32) = 0;
      *(_QWORD *)(v32 + 16) = v35;
      v69 = 0;
      *(_QWORD *)(v32 + 24) = v71;
      v71 = 0;
      *(_QWORD *)(v32 + 32) = v72;
      v70 = 0;
      *(_QWORD *)(v32 + 40) = *((_QWORD *)&v72 + 1);
      *(_DWORD *)v3 = 53;
      *(_BYTE *)(v3 + 48) = 12;
      *(_QWORD *)(v3 + 56) = v32;
      v72 = 0;
      sub_161150(v2, v3, 6);
      v36 = *(_DWORD *)(v2 + 24);
      BYTE1(v36) &= ~2u;
      LOBYTE(v36) = v36 | 0x80;
      *(_DWORD *)(v2 + 24) = v36;
      if ( *(_DWORD *)v3 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 520LL);
        if ( v37 )
        {
          while ( 1 )
          {
            if ( v2 != v37 )
            {
              v38 = *(_QWORD **)(v37 + 56);
              if ( v38 )
              {
                if ( sub_11F4D0(
                       *(unsigned __int8 **)(v37 + 56),
                       *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL),
                       (unsigned int *)v3,
                       0) )
                {
                  break;
                }
              }
            }
            v37 = *(_QWORD *)(v37 + 8);
            if ( !v37 )
              goto LABEL_52;
          }
          if ( v38 == *(_QWORD **)(v37 + 48) )
            goto LABEL_68;
          if ( !sub_119AE0(v38, *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL)) )
          {
            v44 = sub_62A40(*(_QWORD *)(v2 + 64), *(_DWORD *)(v37 + 72) + 1);
            sub_9CD00(v37, (__int64)v38);
            sub_9CAA0(v44, v38, 0);
            *(_DWORD *)(v44 + 24) |= 2u;
            sub_AF120(v37, (__int64)v38, v45, v46, v47, v48);
            sub_AF120(v44, (__int64)v38, v49, v50, v51, v52);
            v37 = v44;
LABEL_68:
            sub_116EE0(v3);
            *(_DWORD *)v3 = 55;
            v53 = *(_DWORD *)(v37 + 72);
            *(_BYTE *)(v3 + 32) = 7;
            *(_DWORD *)(v3 + 40) = v53;
          }
        }
      }
LABEL_52:
      sub_9BE60(v2, (__int64)"RESOLVE_TABLE_JUMP");
      sub_1166E0((__int64)&src);
      result = 1;
      goto LABEL_53;
    }
    v15 = sub_60B30(*(_QWORD *)(v2 + 64), v66);
    if ( !v15 )
      break;
    v16 = (_DWORD *)(v71 + 4 * v72);
    if ( (_DWORD *)v71 == v16 )
      goto LABEL_35;
    v17 = (_DWORD *)v71;
    while ( *((_DWORD *)v15 + 18) != *v17 )
    {
      if ( v16 == ++v17 )
        goto LABEL_35;
    }
    if ( v16 == v17 )
    {
LABEL_35:
      n = (size_t)v15;
      src = nullptr;
      v68 = 0;
      v21 = (void *)qvector_reserve();
      v22 = n;
      src = v21;
      *((_QWORD *)v21 + v68) = v54;
      v23 = nullptr;
      v24 = v68 + 1;
      *(_QWORD *)&v68 = v68 + 1;
      if ( (_QWORD)v68 )
      {
        v63 = n;
        v61 = v24;
        na = 8 * v24;
        v23 = (void *)qalloc_or_throw();
        memcpy(v23, src, na);
        v22 = v63;
        v24 = v61;
      }
      v25 = v70;
      v26 = v69;
      if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
      {
        v62 = v24;
        v60 = v22;
        v69 = qvector_reserve();
        v26 = v69;
        v24 = v62;
        v25 = v70;
        v22 = v60;
      }
      v27 = v26 + 24 * v25;
      *(_QWORD *)v27 = v23;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      v28 = v72;
      v29 = *(_DWORD *)(v22 + 72);
      *(_QWORD *)&v70 = v70 + 1;
      v30 = v71;
      if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
      {
        v71 = qvector_reserve();
        v30 = v71;
        v28 = v72;
      }
      *(_DWORD *)(v30 + 4 * v28) = v29;
      *(_QWORD *)&v72 = v72 + 1;
      if ( src )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
    }
    else
    {
      src = (void *)v54;
      v18 = (__int64 *)(v69 + 24LL * (int)(((__int64)v17 - v71) >> 2));
      v19 = v18[1];
      v20 = *v18;
      if ( v18[2] < (unsigned __int64)(v19 + 1) )
      {
        v20 = qvector_reserve();
        *v18 = v20;
        v19 = v18[1];
      }
      *(_QWORD *)(v20 + 8 * v19) = v54;
      ++v18[1];
    }
LABEL_21:
    v10 += *(int *)(v7 + 4);
    flags = get_flags_ex();
    if ( (flags & 0xD000) != 0 || (~BYTE1(flags) & 6) == 0 )
      goto LABEL_43;
    ++v54;
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL) + 49LL) < 0 )
    v66 &= ~1uLL;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    add_cref();
    v57 = v14;
    goto LABEL_21;
  }
  *(_QWORD *)(*(_QWORD *)(v2 + 64) + 488LL) = v66;
  result = 4294967292LL;
LABEL_53:
  if ( v71 )
  {
    v55 = result;
    *(_QWORD *)&v72 = 0;
    qfree();
    result = v55;
  }
  v39 = v69;
  if ( v69 )
  {
    v40 = v70;
    v41 = 0;
    v42 = result;
    if ( (_QWORD)v70 )
    {
      do
      {
        v43 = (_QWORD *)(v39 + 24 * v41);
        if ( *v43 )
        {
          v43[1] = 0;
          qfree();
          v39 = v69;
        }
        ++v41;
      }
      while ( v40 != v41 );
      LODWORD(result) = v42;
    }
    v56 = result;
    *(_QWORD *)&v70 = 0;
    qfree();
    return v56;
  }
  return result;
}

