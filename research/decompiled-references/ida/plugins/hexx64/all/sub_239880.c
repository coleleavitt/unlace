unsigned __int64 __fastcall sub_239880(__int64 a1, __int64 a2, int a3, char a4, __m128i a5)
{
  _DWORD *v5; // r12
  __int64 v7; // r14
  __int64 *v8; // rbx
  char v9; // al
  char v10; // r13
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rax
  char v14; // dl
  int v15; // ecx
  __m128i v16; // xmm1
  __m128i *v17; // r8
  __m128 v18; // xmm2
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // edi
  unsigned __int64 v27; // r11
  _QWORD *v28; // rdx
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  bool v31; // cl
  _QWORD *v32; // rcx
  _QWORD *v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD *v37; // rsi
  unsigned __int64 *v38; // rax
  char v39; // si
  unsigned __int64 v40; // rcx
  unsigned __int64 *v41; // rdx
  unsigned __int64 *v42; // rdx
  char v43; // dl
  __int64 v44; // r13
  _BYTE *v45; // rdx
  _BYTE *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // r9
  int v52; // r8d
  char v53; // r13
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __m128i v59; // xmm1
  __int64 v60; // rsi
  _QWORD *v61; // rcx
  __int64 v62; // rsi
  unsigned __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *exception; // rdi
  __int64 *v67; // [rsp+10h] [rbp-D8h]
  _DWORD *v68; // [rsp+18h] [rbp-D0h]
  __m128i *v69; // [rsp+18h] [rbp-D0h]
  __int64 v70; // [rsp+18h] [rbp-D0h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  int v73; // [rsp+2Ch] [rbp-BCh]
  __m128i v74; // [rsp+30h] [rbp-B8h] BYREF
  int v75; // [rsp+48h] [rbp-A0h] BYREF
  int v76; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int64 v77; // [rsp+50h] [rbp-98h] BYREF
  signed __int64 v78; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-88h] BYREF
  __m128 *v80; // [rsp+68h] [rbp-80h] BYREF
  __m128 v81; // [rsp+70h] [rbp-78h] BYREF
  __int64 v82; // [rsp+80h] [rbp-68h]
  int v83; // [rsp+88h] [rbp-60h]
  __m128i v84; // [rsp+90h] [rbp-58h]
  int v85; // [rsp+A0h] [rbp-48h]
  char v86; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v87; // [rsp+A8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v5 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * a3);
  v5[6] &= ~0x80000u;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 96LL) )
  {
    if ( !under_debugger )
      sub_383060(0xCC39u, *(double *)a5.m128i_i64);
    goto LABEL_116;
  }
  v7 = *(_QWORD *)a2 + 24LL;
  if ( !(unsigned __int8)sub_1C34E0((__int64)v5, (__int64 *)&v77, &v78, v5[22], *(double *)a5.m128i_i64) )
  {
    if ( !under_debugger )
      sub_383060(0xCC43u, *(double *)a5.m128i_i64);
    goto LABEL_116;
  }
  v8 = *(__int64 **)(v7 + 64);
  if ( &v8[5 * *(_QWORD *)(v7 + 72)] == v8 )
    goto LABEL_42;
  v67 = &v8[5 * *(_QWORD *)(v7 + 72)];
  v9 = sub_32F330(v8[3], &v79);
  while ( 2 )
  {
    v10 = v9;
    if ( !v9 )
    {
      if ( !under_debugger )
        sub_383060(0xCC3Au, *(double *)a5.m128i_i64);
      goto LABEL_116;
    }
    v11 = *(_DWORD *)(v8[3] + 4);
    if ( v11 == -1 )
      v11 = 1;
    v12 = sub_1C36B0((__int64)v5, *(_QWORD *)(a1 + 48), v79, v11, v5[22], &v75, *(double *)a5.m128i_i64, &v76);
    v75 += v76;
    if ( !v12 )
    {
      v75 = v79 - v77;
      if ( *v5 == 2 )
      {
        v60 = *(_QWORD *)(a1 + 48);
        v81.m128_i32[0] = 0;
        if ( (unsigned int)sub_1C36B0((__int64)v5, v60, v77, 1, v5[22], &v81, *(double *)a5.m128i_i64, nullptr) != 1 )
        {
          if ( !under_debugger )
            sub_383060(0xCC44u, *(double *)a5.m128i_i64);
          goto LABEL_116;
        }
        v75 += v81.m128_i32[0];
      }
    }
    if ( v11 != v12 && a4 )
    {
      sub_1F45B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v8[2] + 24), (__int64)v5);
      v5[6] |= 0x400u;
    }
    v13 = v75;
    if ( v75 < 0 )
    {
      if ( (unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 8)) )
      {
        v13 = v75;
        goto LABEL_16;
      }
      if ( !under_debugger )
        sub_383060(0xCC3Du, *(double *)a5.m128i_i64);
LABEL_116:
      BUG();
    }
LABEL_16:
    a5.m128i_i64[0] = v8[3];
    v14 = *((_BYTE *)v8 + 36);
    v15 = *((_DWORD *)v8 + 8);
    v16 = _mm_loadu_si128((const __m128i *)(v8 + 1));
    v80 = &v81;
    v82 = v13;
    v17 = *(__m128i **)(a1 + 64);
    v18 = _mm_loadh_ps((const double *)(a1 + 8));
    v85 = v15;
    v86 = v14;
    v83 = a3;
    v81 = v18;
    v84 = v16;
    v19 = (unsigned __int64 *)v17->m128i_i64[0];
    if ( !v17->m128i_i64[0] )
    {
      v69 = v17;
      v58 = qalloc();
      v17 = v69;
      v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v58, (__m128i)(unsigned __int64)v58);
      if ( !v58 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v58 + 16) = 0;
      *(_OWORD *)(v58 + 32) = 0;
      *(_OWORD *)(v58 + 48) = 0;
      *(_QWORD *)v58 = v58 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_OWORD *)(v58 + 64) = 0;
      *(__m128i *)(v58 + 8) = v59;
      v69->m128i_i64[0] = v58;
      *(_QWORD *)v58 = v58 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v58 & 3LL;
      a5 = _mm_unpacklo_epi64((__m128i)v69->m128i_u64[0], (__m128i)v69->m128i_u64[0]);
      *(__m128i *)(v69->m128i_i64[0] + 8) = a5;
      *(_QWORD *)v69->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v69->m128i_i64[0] |= 2uLL;
      v19 = (unsigned __int64 *)v69->m128i_i64[0];
LABEL_18:
      v20 = sub_208870(v17, v19, 1, (const __m128i **)&v80);
      if ( v21 )
        goto LABEL_19;
LABEL_57:
      v41 = (unsigned __int64 *)(v20 + 24);
      goto LABEL_82;
    }
    if ( !v17->m128i_i64[1] )
      goto LABEL_18;
    v38 = (unsigned __int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)v38 & 2) != 0 )
    {
      v20 = sub_208870(v17, v19, 1, (const __m128i **)&v80);
LABEL_56:
      if ( v43 )
        goto LABEL_19;
      goto LABEL_57;
    }
    v39 = v10;
    while ( 1 )
    {
      v40 = v38[3];
      v41 = v38 + 3;
      if ( a5.m128i_i64[0] < v40 )
      {
        v42 = (unsigned __int64 *)v38[1];
        v39 = v10;
        if ( (*(_BYTE *)v42 & 2) != 0 )
          goto LABEL_55;
        goto LABEL_80;
      }
      if ( v40 >= a5.m128i_i64[0] )
        break;
      v42 = (unsigned __int64 *)v38[2];
      v39 = 0;
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_55;
LABEL_80:
      v38 = v42;
    }
    if ( !v38 )
    {
LABEL_55:
      v20 = sub_208870(v17, v38, v39, (const __m128i **)&v80);
      goto LABEL_56;
    }
LABEL_82:
    v56 = v41[1];
    v57 = *((int *)v41 + 6);
    if ( *(_QWORD *)(v56 + 440) < v57 )
    {
      if ( !under_debugger )
        sub_383060(0xC83Au, *(double *)a5.m128i_i64);
      goto LABEL_116;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v56 + 432) + 104 * v57 + 26) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCEBFu, *(double *)a5.m128i_i64);
      goto LABEL_116;
    }
LABEL_19:
    v22 = v8[3];
    if ( *(_DWORD *)(v22 + 4) != -1 )
      goto LABEL_20;
    v44 = v8[2];
    if ( (unsigned int)(*(_DWORD *)v44 - 12) > 1 )
      goto LABEL_20;
    if ( *(_BYTE *)(v44 + 32) != 10 )
      goto LABEL_20;
    v45 = *(_BYTE **)(v44 + 40);
    if ( *v45 != 5 || (_BYTE *)v22 != v45 )
      goto LABEL_20;
    if ( (unsigned __int8)sub_11FD80((char *)(v44 + 48), (__int64 *)&v81, 0) )
      goto LABEL_71;
    v46 = (_BYTE *)v8[1];
    if ( (_BYTE *)v44 == v46 )
      goto LABEL_20;
    v47 = sub_B0420(v46, v44);
    if ( !v47 )
      sub_226E60(*(double *)a5.m128i_i64);
    if ( *(_BYTE *)(v47 + 32) != 4 )
      goto LABEL_20;
    if ( v44 != *(_QWORD *)(v47 + 40) )
      goto LABEL_20;
    if ( (unsigned int)(*(_DWORD *)v47 - 12) > 1 )
      goto LABEL_20;
    v68 = (_DWORD *)v47;
    if ( !(unsigned __int8)sub_11FD80((char *)(v47 + 48), (__int64 *)&v81, 0) )
      goto LABEL_20;
    if ( *(_DWORD *)v44 == 13 )
    {
      if ( *v68 != 12 )
        goto LABEL_72;
LABEL_20:
      v23 = v75;
      goto LABEL_21;
    }
    v44 = (__int64)v68;
LABEL_71:
    if ( *(_DWORD *)v44 == 12 )
      v48 = v81.m128_u64[0];
    else
LABEL_72:
      v48 = -v81.m128_u64[0];
    if ( v48 < 0 || (v23 = v75, v48 + v75 >= (int)v5[22]) )
    {
      v49 = *(_QWORD *)(a1 + 280);
      v50 = *v8;
      a5 = _mm_loadu_si128((const __m128i *)(v8 + 1));
      v51 = v8[3];
      v52 = *((_DWORD *)v8 + 8);
      v53 = *((_BYTE *)v8 + 36);
      v54 = *(_QWORD *)(a1 + 272);
      if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v49 + 1) )
      {
        v73 = *((_DWORD *)v8 + 8);
        v71 = v8[3];
        v70 = *v8;
        v74 = a5;
        v64 = qvector_reserve(a1 + 272, v54, v49 + 1, 40);
        a5 = _mm_load_si128(&v74);
        v52 = v73;
        *(_QWORD *)(a1 + 272) = v64;
        v54 = v64;
        v51 = v71;
        v49 = *(_QWORD *)(a1 + 280);
        v50 = v70;
      }
      v55 = v54 + 40 * v49;
      *(_QWORD *)v55 = v50;
      *(_QWORD *)(v55 + 24) = v51;
      *(_DWORD *)(v55 + 32) = v52;
      *(_BYTE *)(v55 + 36) = v53;
      *(__m128i *)(v55 + 8) = a5;
      ++*(_QWORD *)(a1 + 280);
      goto LABEL_20;
    }
LABEL_21:
    if ( v23 <= 0 )
      goto LABEL_5;
    v24 = v8[3];
    if ( *(_BYTE *)v24 != 5 )
      goto LABEL_5;
    v25 = v8[1];
    if ( v8[2] != v25 )
      goto LABEL_5;
    v26 = *(_DWORD *)(v24 + 4);
    if ( v26 > v23 )
      goto LABEL_5;
    v27 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL) - v26;
    v28 = *(_QWORD **)(a1 + 112);
LABEL_26:
    while ( 2 )
    {
      if ( *(_QWORD **)(a1 + 120) == v28 )
        goto LABEL_5;
      if ( (v28[10] & 1) == 0 )
        goto LABEL_45;
      v29 = *((int *)v28 + 19);
      v30 = v28[7];
      v31 = v27 >= v30 && v29 != 0;
      if ( !v26 )
      {
        if ( v31 && v29 + v30 - 1 >= v27 )
          goto LABEL_31;
LABEL_45:
        if ( (*v28 & 2) == 0 )
        {
          v37 = (_QWORD *)v28[2];
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
            v61 = (_QWORD *)(*v28 & 0xFFFFFFFFFFFFFFFCLL);
            v62 = *v61;
            if ( (*v61 & 2) == 0 )
            {
              while ( v28 == (_QWORD *)v61[2] )
              {
                v28 = v61;
                v63 = v62 & 0xFFFFFFFFFFFFFFFCLL;
                v62 = *(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v62 & 2) != 0 )
                {
                  v28 = (_QWORD *)v63;
                  goto LABEL_26;
                }
                v61 = (_QWORD *)v63;
              }
            }
            v28 = v61;
          }
          else
          {
            do
            {
              v28 = v37;
              v37 = (_QWORD *)v37[1];
            }
            while ( (*(_BYTE *)v37 & 2) == 0 );
          }
        }
        continue;
      }
      break;
    }
    if ( !v31 || v29 + v30 - 1 < *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL) - 1LL )
      goto LABEL_45;
LABEL_31:
    v32 = (_QWORD *)v28[11];
    v33 = &v32[5 * v28[12]];
    if ( v32 == v33 )
      goto LABEL_45;
    while ( 1 )
    {
      v34 = v32[3];
      if ( v24 != v34
        && *(_BYTE *)v34 == 5
        && v32[2] == v32[1]
        && v26 == *(_DWORD *)(v34 + 4)
        && v27 == *(_QWORD *)(*(_QWORD *)(v34 + 8) + 8LL)
        && ((v8[4] ^ v32[4]) & 0xFFFFFFFFFFLL) == 0 )
      {
        break;
      }
      v32 += 5;
      if ( v33 == v32 )
        goto LABEL_45;
    }
    v35 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v35 + 2) & 4) == 0 )
    {
      *(_BYTE *)(a1 + 304) = 1;
      v8 += 5;
      if ( v67 == v8 )
        goto LABEL_42;
LABEL_6:
      v9 = sub_32F330(v8[3], &v79);
      continue;
    }
    break;
  }
  sub_179D00((_QWORD *)(v35 + 952), (unsigned __int64 *)(v25 + 24));
LABEL_5:
  v8 += 5;
  if ( v67 != v8 )
    goto LABEL_6;
LABEL_42:
  sub_2329E0(*(_QWORD *)(a1 + 8), v77, v78 - v77);
  return v87 - __readfsqword(0x28u);
}

