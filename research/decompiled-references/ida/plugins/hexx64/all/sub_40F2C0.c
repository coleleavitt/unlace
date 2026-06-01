__int64 __fastcall sub_40F2C0(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *m128i_i64; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r14
  unsigned __int64 i; // rax
  unsigned __int64 v20; // r12
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rax
  __m128i *v23; // r15
  __int64 v24; // rbp
  __m128i *v25; // r14
  unsigned __int64 v26; // rdx
  __m128i *v27; // rbp
  unsigned __int64 v28; // rdx
  __m128i *j; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  unsigned __int64 v32; // r12
  void *v33; // r13
  __int64 v34; // rdi
  __m128i v35; // xmm0
  __int8 v37; // al
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // r15d
  __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdi
  bool v51; // zf
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r12
  __int64 v56; // rax
  void *v57; // rax
  __int64 v58; // rdi
  __m128i v59; // [rsp+0h] [rbp-138h] BYREF
  int v60; // [rsp+14h] [rbp-124h]
  __int64 *v61; // [rsp+18h] [rbp-120h]
  __int64 v62; // [rsp+20h] [rbp-118h] BYREF
  __int128 v63; // [rsp+28h] [rbp-110h]
  __int64 v64; // [rsp+38h] [rbp-100h]
  __int128 v65; // [rsp+40h] [rbp-F8h]
  __int64 v66; // [rsp+50h] [rbp-E8h]
  __int128 v67; // [rsp+58h] [rbp-E0h]
  __int64 v68; // [rsp+68h] [rbp-D0h]
  __int128 v69; // [rsp+70h] [rbp-C8h]
  __int64 v70; // [rsp+80h] [rbp-B8h]
  __int128 v71; // [rsp+88h] [rbp-B0h]
  __int64 v72; // [rsp+98h] [rbp-A0h]
  __int64 v73; // [rsp+A0h] [rbp-98h]
  __int128 v74; // [rsp+A8h] [rbp-90h]
  __int128 v75; // [rsp+B8h] [rbp-80h]
  int v76; // [rsp+C8h] [rbp-70h]
  __int64 v77; // [rsp+D0h] [rbp-68h]
  __int64 v78; // [rsp+D8h] [rbp-60h]
  __int64 v79; // [rsp+E0h] [rbp-58h]
  __int64 v80; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+F8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v74 = 0;
  v62 = 0;
  v4 = a1[1];
  v64 = 0;
  v66 = 0;
  v5 = *(_QWORD *)(v4 + 920);
  v68 = 0;
  v70 = 0;
  v61 = (__int64 *)(v5 + 104);
  v72 = v5 + 104;
  v73 = 0;
  v75 = -1;
  v6 = (_QWORD *)a1[106];
  m128i_i64 = (_QWORD *)a1[105];
  v76 = -1;
  v77 = 0;
  v78 = v4;
  v79 = 0;
  v80 = 0;
  sub_40E340((__int64)&v62, (__int64)m128i_i64, v6, NAN, a3);
  v59.m128i_i8[0] = sub_3F4B50((__int64)&v62);
  if ( !v59.m128i_i8[0] )
  {
    v8 = a1[1];
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)(v8 + 24);
    v11 = *(_QWORD *)(v5 + 112);
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 128) + (int)v10 + 1 <= 1 )
      {
LABEL_4:
        if ( v11 )
        {
          v60 = 0;
          v12 = 0;
          v13 = 0;
          do
          {
            v17 = 16 * v13;
            m128i_i64 = (_QWORD *)&byte_4;
            v18 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + v17);
            if ( (get_flags_ex() & 0x10000) == 0 )
            {
              for ( i = get_first_fcref_to(); ; i = get_next_fcref_to() )
              {
                v20 = i;
                if ( i >= v18 )
                  break;
                v21 = (_QWORD *)a1[1];
                v59.m128i_i64[0] = (__int64)(v21 + 1);
                v22 = sub_330F80(v21, i);
                m128i_i64 = (_QWORD *)v20;
                if ( (unsigned __int8)sub_332920((__int64)(v21 + 1), v22) )
                {
                  *(_QWORD *)(*(_QWORD *)(v5 + 104) + v17 + 8) = (int)sub_3E9AE0(v61, v20);
                  v14 = 0;
                  goto LABEL_7;
                }
              }
            }
            v14 = v60;
LABEL_7:
            v15 = *(_QWORD *)(v5 + 104) + v17;
            ++v12;
            v16 = *(_QWORD *)(v15 + 8) + v14;
            *(_QWORD *)(v15 + 8) = v16;
            v13 = v12;
            v60 = v16;
          }
          while ( (unsigned __int64)v12 < *(_QWORD *)(v5 + 112) );
        }
        v30 = (unsigned int)v75;
        *(_DWORD *)(a1[100] + 984LL) = v75;
        goto LABEL_25;
      }
    }
    else if ( (int)v10 <= 1 )
    {
      goto LABEL_4;
    }
    v23 = *(__m128i **)(v5 + 104);
    v24 = 16 * v11;
    v25 = &v23[v11];
    if ( v25 == v23 )
      goto LABEL_4;
LABEL_16:
    if ( v24 >> 4 )
    {
      _BitScanReverse64(&v26, v24 >> 4);
      sub_3EBFD0(v23, v25->m128i_i8, 2LL * (int)v26);
      if ( v24 > 256 )
      {
        v27 = v23 + 16;
        m128i_i64 = v23[16].m128i_i64;
        sub_3EB9B0(v23, v23 + 16);
        do
        {
          v28 = v27->m128i_i64[0];
          v9 = v27->m128i_i64[1];
          j = v27;
          if ( v27->m128i_i64[0] < (unsigned __int64)v27[-1].m128i_i64[0] )
          {
            for ( j = v27 - 1; ; --j )
            {
              m128i_i64 = j[-1].m128i_i64;
              j[1] = _mm_loadu_si128(j);
              if ( v28 >= j[-1].m128i_i64[0] )
                break;
            }
          }
          ++v27;
          j->m128i_i64[0] = v28;
          j->m128i_i64[1] = v9;
        }
        while ( v27 != v25 );
        goto LABEL_80;
      }
    }
    else
    {
      sub_3EBFD0(v23, v25->m128i_i8, -2);
    }
    m128i_i64 = v25->m128i_i64;
    sub_3EB9B0(v23, v25);
LABEL_80:
    v11 = *(_QWORD *)(v5 + 112);
    goto LABEL_53;
  }
  m128i_i64 = (_QWORD *)a1[106];
  v37 = sub_3F4CB0((__int64)&v62, m128i_i64, NAN, a3);
  v38 = a1[1];
  v59.m128i_i8[0] = v37;
  v39 = *(_QWORD *)(v38 + 24);
  v40 = *(_QWORD *)(v38 + 8);
  v9 = (unsigned int)v39;
  if ( v40 )
    v9 = (unsigned int)(*(_DWORD *)(v40 + 128) + v39 + 1);
  v11 = *(_QWORD *)(v5 + 112);
  if ( (int)v9 > 1 )
  {
    v23 = *(__m128i **)(v5 + 104);
    v24 = 16 * v11;
    v25 = &v23[v11];
    if ( v25 != v23 )
      goto LABEL_16;
  }
LABEL_53:
  if ( !v59.m128i_i8[0] )
    goto LABEL_4;
  v41 = v11 - 1;
  if ( (int)v11 - 1 >= 0 )
  {
    LOBYTE(v60) = v59.m128i_i8[0];
    while ( 1 )
    {
      v42 = v41;
      v43 = *(_QWORD *)(v5 + 104);
      v44 = v41;
      v45 = 16LL * v41;
      v46 = v43 + 16LL * (v41 - 1) - v45;
      while ( 1 )
      {
        if ( !v41 )
        {
          v45 = 0;
          v47 = 16;
          v41 = -1;
          v44 = 0;
          goto LABEL_61;
        }
        --v41;
        if ( *(_QWORD *)(v43 + v45 + 8) != *(_QWORD *)(v46 + v45 + 8) )
          break;
        v45 -= 16;
        --v44;
      }
      v47 = 16 * (v44 + 1);
LABEL_61:
      m128i_i64 = (_QWORD *)(v43 + 16 * (v42 + 1));
      memmove((void *)(v47 + v43), m128i_i64, 16 * (v11 - (v42 + 1)));
      v48 = (_QWORD *)(*(_QWORD *)(v5 + 104) + v45);
      *(_QWORD *)(v5 + 112) -= (16 * (v42 - v44)) >> 4;
      if ( (__int64)v48[1] > 8 )
      {
        v49 = a1[1];
        if ( *(_QWORD *)(v49 + 488) == -1 )
          *(_QWORD *)(v49 + 488) = *v48;
        LOBYTE(v60) = 0;
      }
      if ( v41 == -1 )
        break;
      v11 = *(_QWORD *)(v5 + 112);
    }
    v50 = *(_QWORD *)(a1[100] + 192LL);
    if ( !v50 )
    {
      if ( (_BYTE)v60 )
        goto LABEL_32;
      goto LABEL_73;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
    v51 = (_BYTE)v60 == 0;
    *(_QWORD *)(a1[100] + 192LL) = 0;
    if ( !v51 )
      goto LABEL_32;
LABEL_25:
    v31 = *(_QWORD *)(a1[100] + 192LL);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v5 + 112);
      v33 = nullptr;
      if ( v32 )
      {
        v33 = (void *)qalloc_or_throw(16 * v32, (__int64)m128i_i64, v30, v9);
        memcpy(v33, *(const void **)(v5 + 104), 16 * v32);
      }
      v34 = *(_QWORD *)(v31 + 8);
      v35 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
      if ( v34 )
      {
        *(_QWORD *)(v31 + 16) = 0;
        v59 = v35;
        qfree(v34);
        v35 = _mm_load_si128(&v59);
      }
      *(_QWORD *)(v31 + 8) = v33;
      *(__m128i *)(v31 + 16) = v35;
LABEL_31:
      v59.m128i_i8[0] = 0;
      goto LABEL_32;
    }
LABEL_73:
    v52 = operator new(0x30u);
    *(_QWORD *)v52 = &unk_4ECB98;
    install_user_defined_prefix();
    *(_QWORD *)(v52 + 8) = 0;
    *(_QWORD *)v52 = &off_4E99A0;
    *(_OWORD *)(v52 + 16) = 0;
    v55 = *(_QWORD *)(v5 + 112);
    if ( v55 )
    {
      v57 = (void *)qalloc_or_throw(16 * v55, v52, v53, v54);
      *(_QWORD *)(v52 + 8) = v57;
      *(_QWORD *)(v52 + 24) = v55;
      memcpy(v57, *(const void **)(v5 + 104), 16 * v55);
      *(_QWORD *)(v52 + 16) = v55;
    }
    v56 = a1[100];
    *(_QWORD *)(v52 + 32) = -1;
    *(_DWORD *)(v52 + 40) = -1;
    *(_QWORD *)(v56 + 192) = v52;
    goto LABEL_31;
  }
  v58 = *(_QWORD *)(a1[100] + 192LL);
  if ( v58 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    *(_QWORD *)(a1[100] + 192LL) = 0;
  }
LABEL_32:
  Clp_deleteModel();
  if ( v79 )
  {
    if ( v80 )
    {
      sub_3EC820((__int64 *)(*(_QWORD *)v79 & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v79 = v79 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v79 & 3LL;
      *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
      *(_QWORD *)v79 &= ~1uLL;
      *(_QWORD *)v79 |= 2uLL;
      v80 = 0;
    }
    else
    {
      *(_QWORD *)v79 = *(_QWORD *)v79 & 3LL | v79 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
      *(_QWORD *)v79 &= ~1uLL;
      *(_QWORD *)v79 |= 2uLL;
    }
    if ( v79 )
      qfree(v79);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  return v59.m128i_u8[0];
}

