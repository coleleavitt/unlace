__int64 __fastcall sub_87990(unsigned __int8 *a1, __int64 a2, __m128i a3)
{
  unsigned __int8 *v3; // rdx
  unsigned __int8 v4; // al
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rsi
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int16 v14; // ax
  _QWORD *v15; // r12
  int v16; // eax
  unsigned __int8 *v17; // rax
  unsigned __int8 v18; // dl
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  char v24; // al
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __m128i v28; // xmm0
  __m128 *v29; // rax
  __int64 v30; // rdi
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // esi
  __int64 (__fastcall *v38)(__int64, unsigned int); // rcx
  _QWORD *v39; // r12
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __m128 *v53; // r12
  __int64 v54; // rax
  __m128i v55; // [rsp+0h] [rbp-78h] BYREF
  __int64 v56; // [rsp+18h] [rbp-60h] BYREF
  __int64 v57; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-50h]
  unsigned __int64 v59; // [rsp+30h] [rbp-48h]
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v3 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    goto LABEL_73;
  v4 = *v3;
  *(_QWORD *)a2 = v3 + 1;
  v7 = v4 & 0xF;
  v4 >>= 4;
  *a1 = v7;
  *((_DWORD *)a1 + 1) = v4;
  if ( !v4 )
  {
    v8 = -8201;
    if ( _bittest64(&v8, v7) )
      *((_DWORD *)a1 + 1) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
  }
  v9 = *(_DWORD *)(a2 + 40);
  v10 = 2;
  v11 = sub_7A640(v9, 2, 2u);
  v13 = *a1;
  if ( v11 )
  {
    v14 = 0;
    if ( (unsigned __int8)v13 <= 0xEu )
    {
      v12 = 16498;
      if ( _bittest64(&v12, v13) )
      {
        v14 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
        v13 = *a1;
      }
    }
    *((_WORD *)a1 + 1) = v14;
  }
  switch ( v13 )
  {
    case 0uLL:
      goto LABEL_12;
    case 1uLL:
      v20 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
      *((_DWORD *)a1 + 2) = v20;
      v36 = *(_QWORD *)(a2 + 24);
      if ( !v36 )
        goto LABEL_12;
      v37 = 121;
      if ( *(_DWORD *)(a2 + 48) > 0xAu )
        v37 = 122;
      v38 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v36 + 376LL);
      if ( v38 != sub_7A3C0 )
        v20 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v38)(v36, v20, v37);
LABEL_20:
      *((_DWORD *)a1 + 2) = v20;
      v16 = *((_DWORD *)a1 + 1);
      goto LABEL_13;
    case 2uLL:
      v28 = (__m128i)(unsigned __int64)sub_7CD40(a2, *(double *)a3.m128i_i64);
      goto LABEL_33;
    case 3uLL:
      v42 = j__qalloc_or_throw(24, 2, v13, v12);
      v43 = 0;
      v44 = *((_DWORD *)a1 + 1);
      if ( !*(_BYTE *)(a2 + 52) )
        v43 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v42 = v43;
      *(_QWORD *)(v42 + 8) = 0;
      *(_DWORD *)(v42 + 16) = v44;
      *((_QWORD *)a1 + 1) = v42;
      *a1 = 9;
      v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
      *((_DWORD *)a1 + 1) = v16;
      goto LABEL_13;
    case 4uLL:
      v15 = (_QWORD *)j__qalloc_or_throw(80, 2, v13, v12);
      v15[4] = 0xFFFFFFFF00000000LL;
      v15[5] = 0;
      v15[6] = 0xFFFFFFFF00000000LL;
      v15[7] = 0;
      v15[8] = 0xFFFFFFFF00000000LL;
      v15[9] = 0;
      sub_330970((__int64)v15, -1);
      *((_QWORD *)a1 + 1) = v15;
      if ( (unsigned __int8)sub_883D0((__int64)v15, a2) )
        goto LABEL_12;
      return 0;
    case 5uLL:
      v39 = (_QWORD *)j__qalloc_or_throw(16, 2, v13, v12);
      v40 = sub_7D020(a2, 0, *(double *)a3.m128i_i64);
      v41 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v41 = *(_QWORD *)(a2 + 16);
      *v39 = v41;
      v39[1] = v40;
      v16 = *((_DWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v39;
      goto LABEL_13;
    case 6uLL:
      *((_QWORD *)a1 + 1) = sub_7CFC0(a2, 0, *(double *)a3.m128i_i64);
      v16 = *((_DWORD *)a1 + 1);
      goto LABEL_13;
    case 7uLL:
      v20 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
      goto LABEL_20;
    case 8uLL:
      v21 = j__qalloc_or_throw(312, 2, v13, v12);
      a3.m128i_i64[0] = 0;
      *(_QWORD *)v21 = -1;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_QWORD *)(v21 + 72) = 0;
      *(_QWORD *)(v21 + 80) = 0;
      *(_QWORD *)(v21 + 88) = 0;
      *(_QWORD *)(v21 + 96) = 0;
      *(_QWORD *)(v21 + 104) = 0;
      *(_QWORD *)(v21 + 112) = 0;
      *(_QWORD *)(v21 + 136) = 0;
      *(_QWORD *)(v21 + 144) = 0;
      *(_QWORD *)(v21 + 152) = 0;
      *(_QWORD *)(v21 + 176) = 0;
      *(_QWORD *)(v21 + 184) = 0;
      *(_QWORD *)(v21 + 192) = 0;
      *(_QWORD *)(v21 + 216) = 0;
      *(_QWORD *)(v21 + 240) = 0;
      *(_QWORD *)(v21 + 248) = 0;
      *(_QWORD *)(v21 + 256) = 0;
      *(_QWORD *)(v21 + 280) = 0;
      *(_QWORD *)(v21 + 288) = 0;
      *(_OWORD *)(v21 + 32) = 0;
      *(_OWORD *)(v21 + 56) = 0;
      *(_OWORD *)(v21 + 120) = 0;
      *(_OWORD *)(v21 + 160) = 0;
      *(_OWORD *)(v21 + 200) = 0;
      *(_OWORD *)(v21 + 224) = 0;
      *(_OWORD *)(v21 + 264) = 0;
      *(_OWORD *)(v21 + 296) = 0;
      *((_QWORD *)a1 + 1) = v21;
      if ( !(unsigned __int8)sub_871F0(v21, a2, (__m128)0LL) )
        return 0;
      goto LABEL_12;
    case 9uLL:
      v22 = j__qalloc_or_throw(24, 2, v13, v12);
      v23 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v23 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v22 = v23;
      *(_QWORD *)(v22 + 8) = 0;
      *(_DWORD *)(v22 + 16) = -1;
      *((_QWORD *)a1 + 1) = v22;
      v24 = sub_7CD00((unsigned __int8 **)a2, *(double *)a3.m128i_i64);
      if ( v24 < 0 )
      {
        *(_DWORD *)(v22 + 16) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
        *(_QWORD *)(v22 + 8) = sub_7D020(a2, 0, *(double *)a3.m128i_i64);
      }
      else
      {
        *(_QWORD *)(v22 + 8) = 0;
        *(_DWORD *)(v22 + 16) = (unsigned __int8)v24;
      }
      v16 = *((_DWORD *)a1 + 1);
      goto LABEL_13;
    case 0xAuLL:
      v25 = (_QWORD *)j__qalloc_or_throw(24, 2, v13, v12);
      *v25 = 0xFFFFFFFF00000000LL;
      v25[1] = 0;
      v25[2] = -1;
      *((_QWORD *)a1 + 1) = v25;
      if ( (unsigned __int8)sub_88370((__int64)v25, (_QWORD *)a2) )
        goto LABEL_12;
      return 0;
    case 0xBuLL:
      sub_7D150((__int64)&v57, (_QWORD *)a2, *(double *)a3.m128i_i64);
      v30 = v57;
      if ( v58 < v59 && v58 && v57 )
        goto LABEL_58;
      goto LABEL_35;
    case 0xCuLL:
      v26 = j__qalloc_or_throw(48, 2, v13, v12);
      a3.m128i_i64[0] = 0;
      *(_QWORD *)v26 = 0;
      *(_QWORD *)(v26 + 24) = 0;
      *(_OWORD *)(v26 + 8) = 0;
      *(_OWORD *)(v26 + 32) = 0;
      *((_QWORD *)a1 + 1) = v26;
      if ( (unsigned __int8)sub_82040((__int64 *)v26, a2, (__m128)0LL) )
        goto LABEL_12;
      return 0;
    case 0xDuLL:
      v27 = *((int *)a1 + 1);
      *a1 = 2;
      v28 = (__m128i)v27;
      *((_DWORD *)a1 + 1) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
LABEL_33:
      v55 = _mm_unpacklo_epi64(v28, v28);
      v29 = (__m128 *)j__qalloc_or_throw(32, 2, v13, v12);
      a3 = _mm_load_si128(&v55);
      v29->m128_u64[0] = -1;
      v29->m128_i32[2] = 0;
      v29[1] = (__m128)a3;
      *((_QWORD *)a1 + 1) = v29;
      sub_7E8E0((__int64)v29, (char **)a2, *(double *)a3.m128i_i64);
      v16 = *((_DWORD *)a1 + 1);
      goto LABEL_13;
    case 0xEuLL:
      v35 = (_QWORD *)j__qalloc_or_throw(32, 2, v13, v12);
      *v35 = 0xFFFFFFFF00000000LL;
      v35[1] = 0;
      v35[2] = 0xFFFFFFFF00000000LL;
      v35[3] = 0;
      *((_QWORD *)a1 + 1) = v35;
      if ( !(unsigned __int8)sub_87990((__int64)v35, a2) )
        return 0;
      if ( (unsigned __int8)sub_87990(*((_QWORD *)a1 + 1) + 16LL, a2) )
        goto LABEL_12;
      return 0;
    case 0xFuLL:
      v31 = sub_7CD00((unsigned __int8 **)a2, *(double *)a3.m128i_i64);
      if ( v31 == 3 )
      {
        *a1 = 15;
        v56 = 0;
        if ( (unsigned __int8)sub_7CD00((unsigned __int8 **)a2, *(double *)a3.m128i_i64) )
        {
          sub_7D2C0((unsigned __int8 **)a2, &v56, *(double *)a3.m128i_i64);
          v10 = a2;
          sub_7D150((__int64)&v57, (_QWORD *)a2, *(double *)a3.m128i_i64);
          v47 = v57;
          v48 = v58;
          v49 = v59;
        }
        else
        {
          v49 = 0;
          v48 = 0;
          v47 = 0;
        }
        v50 = qalloc_or_throw(56, v10, v45, v46);
        v51 = 0;
        if ( !*(_BYTE *)(a2 + 52) )
          v51 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)v50 = 0;
        *(_QWORD *)(v50 + 16) = v51;
        v52 = v56;
        *(_QWORD *)(v50 + 8) = 0;
        *(_QWORD *)(v50 + 24) = v47;
        *(_QWORD *)(v50 + 32) = v48;
        *(_QWORD *)(v50 + 40) = v49;
        *(_QWORD *)(v50 + 48) = v52;
        *((_QWORD *)a1 + 1) = v50;
        v56 = 0;
        sub_7D680(*(double *)a3.m128i_i64);
        clear_tinfo_t();
LABEL_12:
        v16 = *((_DWORD *)a1 + 1);
        goto LABEL_13;
      }
      if ( v31 > 3u )
      {
        if ( v31 != 4 )
          goto LABEL_76;
        *a1 = 2;
        v53 = (__m128 *)j__qalloc_or_throw(32, 2, v32, v33);
        v54 = sub_7CD40(a2, *(double *)a3.m128i_i64);
        v53->m128_u64[0] = -1;
        v53->m128_i32[2] = 0;
        a3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)v54);
        v53[1] = (__m128)a3;
        *((_QWORD *)a1 + 1) = v53;
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) = sub_7CD40(a2, *(double *)a3.m128i_i64);
        sub_7E8E0(*((_QWORD *)a1 + 1), (char **)a2, *(double *)a3.m128i_i64);
        v16 = *((_DWORD *)a1 + 1);
      }
      else
      {
        if ( v31 != 1 )
        {
          if ( v31 == 2 )
          {
            *a1 = 13;
            v34 = j__qalloc_or_throw(20, 2, v32, v33);
            *((_QWORD *)a1 + 1) = v34;
            sub_7D460(a2, v34, *(double *)a3.m128i_i64);
            v16 = *((_DWORD *)a1 + 1);
            goto LABEL_13;
          }
LABEL_76:
          if ( !under_debugger )
            sub_383060(0xC59Du, *(double *)a3.m128i_i64);
LABEL_78:
          BUG();
        }
        sub_7D150((__int64)&v57, (_QWORD *)a2, *(double *)a3.m128i_i64);
        *a1 = 3;
        v30 = v57;
        if ( v58 < v59 && v57 && v58 )
        {
LABEL_58:
          v30 = qrealloc();
          if ( !v30 )
            v30 = v57;
        }
LABEL_35:
        *((_QWORD *)a1 + 1) = v30;
        v16 = *((_DWORD *)a1 + 1);
      }
LABEL_13:
      if ( v16 == 15 && *(_DWORD *)(a2 + 48) <= 0xBu )
        *((_DWORD *)a1 + 1) = -1;
      v17 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      {
        v18 = *v17;
        *(_QWORD *)a2 = v17 + 1;
        a1[1] = v18;
        return 1;
      }
LABEL_73:
      sub_7A4F0(*(double *)a3.m128i_i64);
    default:
      *a1 = 0;
      if ( !under_debugger )
        sub_383060(0xC59Cu, *(double *)a3.m128i_i64);
      goto LABEL_78;
  }
}

