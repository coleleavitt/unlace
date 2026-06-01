unsigned __int64 __fastcall sub_3FF80(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 (*a4)(), char a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 *v7; // r13
  __int64 i; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 (*v11)(); // rcx
  __int64 v12; // r15
  __int64 j; // r13
  _QWORD *v14; // rax
  __m128i v15; // xmm4
  const void **v16; // rbx
  __int64 v17; // r14
  __int64 (*v18)(); // rdx
  const __m128i *v19; // rbp
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  __m128i v22; // xmm1
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdx
  unsigned __int32 v26; // r13d
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  const void **v31; // rax
  __int64 v32; // r13
  unsigned int v33; // edx
  unsigned __int64 v34; // rbx
  __int64 v36; // rcx
  int v37; // r8d
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r11
  unsigned __int64 *v40; // rax
  size_t v41; // rax
  _QWORD *v42; // r11
  size_t v43; // r13
  const void **v44; // r15
  char *v45; // r14
  __int64 v46; // r13
  size_t v47; // r12
  void *v48; // rax
  __m128i v49; // xmm0
  unsigned __int64 *v50; // rax
  void *v51; // rdi
  _QWORD *v52; // rdx
  __int64 v53; // rax
  const void **v54; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+0h] [rbp-F8h]
  char *s; // [rsp+10h] [rbp-E8h]
  unsigned int sa; // [rsp+10h] [rbp-E8h]
  char *sb; // [rsp+10h] [rbp-E8h]
  __m128i v60; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 *v61; // [rsp+30h] [rbp-C8h]
  _QWORD *v62; // [rsp+38h] [rbp-C0h]
  char v63; // [rsp+42h] [rbp-B6h]
  char v64; // [rsp+43h] [rbp-B5h]
  unsigned int v65; // [rsp+44h] [rbp-B4h]
  const void ***v66; // [rsp+48h] [rbp-B0h]
  _QWORD *v67; // [rsp+50h] [rbp-A8h]
  _QWORD *v68; // [rsp+58h] [rbp-A0h]
  _QWORD v69[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-88h] BYREF
  __int128 v71; // [rsp+78h] [rbp-80h]
  const void **v72; // [rsp+90h] [rbp-68h] BYREF
  __int128 v73; // [rsp+98h] [rbp-60h]
  _QWORD *v74; // [rsp+A8h] [rbp-50h]
  char v75; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-40h]

  v6 = a2[1];
  v61 = a2;
  v63 = a5;
  v76 = __readfsqword(0x28u);
  v64 = *(_BYTE *)(a1 + 161);
  if ( v6 )
  {
    v7 = v61;
    for ( i = 0; i != v6; ++i )
    {
      v9 = *v7 + 40 * i;
      if ( *(_QWORD *)(v9 + 8) )
      {
        *(_QWORD *)(v9 + 16) = 0;
        qfree();
      }
    }
  }
  v61[1] = 0;
  if ( !*(_BYTE *)(a1 + 440) )
    sub_28840(a1);
  v66 = &v72;
  sub_2B040((__int64)&v72, (_QWORD *)a1, nullptr, a4);
  v10 = v73;
  v54 = v72;
  if ( (_QWORD)v73 )
  {
    s = (char *)qalloc_or_throw();
    v44 = v54;
    v45 = s;
    v46 = 0;
    do
    {
      *(_QWORD *)v45 = 0;
      *(_OWORD *)(v45 + 8) = 0;
      v47 = (size_t)v44[1];
      if ( v47 )
      {
        v48 = (void *)qalloc_or_throw();
        *(_QWORD *)v45 = v48;
        *((_QWORD *)v45 + 2) = v47;
        memcpy(v48, *v44, v47);
        *((_QWORD *)v45 + 1) = v47;
      }
      ++v46;
      v45 += 24;
      v44 += 3;
    }
    while ( v10 != v46 );
    v11 = *(__int64 (**)())a3;
    v49 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    v60 = v49;
    if ( !v11 )
    {
      *(__m128i *)(a3 + 8) = v49;
      *(_QWORD *)a3 = s;
      if ( v54 )
      {
LABEL_18:
        v16 = v54;
        v17 = 0;
        do
        {
          if ( *v16 )
          {
            v16[1] = nullptr;
            qfree();
          }
          ++v17;
          v16 += 3;
        }
        while ( v10 != v17 );
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
  else
  {
    v11 = *(__int64 (**)())a3;
    if ( !*(_QWORD *)a3 )
    {
      *(_OWORD *)(a3 + 8) = 0;
      if ( v54 )
        goto LABEL_22;
      goto LABEL_23;
    }
    s = nullptr;
    v60 = 0;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    for ( j = 0; j != v12; ++j )
    {
      v14 = (_QWORD *)((char *)v11 + 24 * j);
      if ( *v14 )
      {
        v14[1] = 0;
        qfree();
        v11 = *(__int64 (**)())a3;
      }
    }
  }
  *(_QWORD *)(a3 + 8) = 0;
  qfree();
  v15 = _mm_load_si128(&v60);
  *(_QWORD *)a3 = s;
  *(__m128i *)(a3 + 8) = v15;
  if ( v54 )
  {
    if ( v10 )
      goto LABEL_18;
LABEL_22:
    qfree();
  }
LABEL_23:
  v72 = nullptr;
  v75 = 0;
  v74 = nullptr;
  v73 = 0;
  sub_33800((_QWORD *)a1, (__int64)v66, nullptr, v11);
  v70 = 0;
  v71 = 0;
  sub_3FD00(a1, &v70, v18);
  v19 = *(const __m128i **)(a1 + 248);
  v62 = v69;
  v65 = v64 == 0 ? 4 : 8;
  v60.m128i_i64[0] = (__int64)v19[5 * *(_QWORD *)(a1 + 256)].m128i_i64;
  if ( v19 != (const __m128i *)v60.m128i_i64[0] )
  {
    while ( 1 )
    {
      v20 = _mm_loadu_si128(v19 + 2);
      v21 = (unsigned __int64)v62;
      v22 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a1 + 8) + 16LL));
      v69[0] = _mm_and_si128(v20, v22).m128i_u64[0];
      v69[1] = _mm_and_si128(v22, _mm_add_epi64(_mm_srli_si128(v20, 8), v20)).m128i_u64[0];
      rangeset_t_add();
      if ( (unsigned int)v19[4].m128i_u8[0] - 6 <= 1 )
      {
        v23 = v19[2].m128i_u64[1];
        v24 = v65;
        v25 = v23 % v65;
        v55 = v23 / v65;
        if ( v63 )
        {
          v21 = (unsigned __int64)&v19[1];
          sub_112F0(
            (__int64)"\n\nChecking indirect symbols for (%.16s,%.16s): %zu entries",
            v19[1].m128i_i8,
            v19->m128i_i8,
            v55);
          v26 = v19[4].m128i_u32[1];
          sub_112F0((__int64)"\naddress            index name\n");
        }
        else
        {
          v26 = v19[4].m128i_u32[1];
        }
        if ( v23 >= v24 )
          break;
      }
LABEL_46:
      v19 += 5;
      if ( (const __m128i *)v60.m128i_i64[0] == v19 )
        goto LABEL_47;
    }
    v27 = v26;
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned __int64)v71 )
        goto LABEL_46;
      v32 = v28 + v19[2].m128i_i64[0];
      if ( v63 )
      {
        if ( v64 )
        {
          v21 = v28 + v19[2].m128i_i64[0];
          sub_112F0((__int64)"0x%016llx ", v21);
        }
        else
        {
          v21 = (unsigned int)v32;
          sub_112F0((__int64)"0x%08x ", v32);
        }
        v33 = *(_DWORD *)(v70 + 4 * v27);
        if ( v33 <= 0x3FFFFFFF )
        {
          v21 = v33;
          sa = *(_DWORD *)(v70 + 4 * v27);
          sub_112F0((__int64)"%5u ", v33);
          if ( sa < (unsigned __int64)v73 )
          {
            v31 = &v72[2 * sa];
            if ( (*((_BYTE *)v31 + 4) & 0xE) == 0 )
            {
LABEL_32:
              if ( (unsigned __int16)(*((unsigned __int8 *)v31 + 7) - 254) > 1u && *((_BYTE *)v31 + 7) )
              {
                if ( v74
                  && (v36 = v74[2], LODWORD(v67) = *((unsigned __int8 *)v31 + 7), v36)
                  && (v21 = *(unsigned int *)v31, v21 < v36 - 1)
                  && (sb = (char *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64))(*v74 + 16LL))(
                                     v74,
                                     v21,
                                     v25)) != nullptr )
                {
                  v37 = (unsigned __int16)v67;
                  if ( v63 )
                  {
                    LODWORD(v67) = (unsigned __int16)v67;
                    sub_112F0((__int64)"UNDF: %s from dylib %u\n", sb, (unsigned __int16)v67);
                    v37 = (int)v67;
                  }
                  v38 = v61[1];
                  v21 = *v61;
                  if ( v61[2] < v38 + 1 )
                  {
                    LODWORD(v67) = v37;
                    v21 = qvector_reserve();
                    v50 = v61;
                    v37 = (int)v67;
                    *v61 = v21;
                    v38 = v50[1];
                  }
                  v39 = v21 + 40 * v38;
                  v40 = v61;
                  *(_QWORD *)(v39 + 8) = 0;
                  *(_OWORD *)(v39 + 16) = 0;
                  ++v40[1];
                  *(_QWORD *)v39 = v32;
                  *(_DWORD *)(v39 + 32) = v37;
                  v67 = (_QWORD *)v39;
                  v41 = strlen(sb);
                  v42 = v67;
                  v43 = v41;
                  if ( v41 )
                  {
                    v51 = (void *)v67[1];
                    v52 = (_QWORD *)(v41 + 1);
                    if ( v67[3] < v41 + 1 )
                    {
                      v68 = v67;
                      v67 = (_QWORD *)(v41 + 1);
                      v53 = qvector_reserve();
                      v42 = v68;
                      v52 = v67;
                      v51 = (void *)v53;
                      v68[1] = v53;
                    }
                    v42[2] = v52;
                    v21 = (unsigned __int64)sb;
                    v67 = v42;
                    memmove(v51, sb, v43);
                    *(_BYTE *)(v67[1] + v43) = 0;
                  }
                  else
                  {
                    v67[2] = 0;
                  }
                }
                else if ( v63 )
                {
                  sub_112F0((__int64)"?\n", v21, v25);
                }
              }
              goto LABEL_34;
            }
          }
        }
        sub_112F0((__int64)"\n");
      }
      else
      {
        v30 = *(unsigned int *)(v70 + 4 * v27);
        if ( (unsigned int)v30 <= 0x3FFFFFFF && v30 < (unsigned __int64)v73 )
        {
          v31 = &v72[2 * v30];
          if ( (*((_BYTE *)v31 + 4) & 0xE) == 0 )
            goto LABEL_32;
        }
      }
LABEL_34:
      ++v29;
      ++v27;
      v28 += v24;
      if ( v29 >= v55 )
        goto LABEL_46;
    }
  }
LABEL_47:
  v34 = v61[1];
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  if ( v75 && v74 )
    (*(void (__fastcall **)(_QWORD *))(*v74 + 8LL))(v74);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  return v34;
}

