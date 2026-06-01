__int64 __fastcall sub_83790(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 v3; // al
  unsigned __int8 *v4; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // al
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rcx
  _QWORD *v12; // r12
  int v13; // eax
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int8 v27; // al
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // esi
  __int64 (__fastcall *v31)(__int64, unsigned int); // rcx
  _QWORD *v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  __int64 v38; // r13
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i *v44; // r12
  __int64 v45; // rax
  __m128i v46; // [rsp+0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+18h] [rbp-60h] BYREF
  __int64 v48; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+28h] [rbp-50h]
  unsigned __int64 v50; // [rsp+30h] [rbp-48h]
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v2 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    goto LABEL_73;
  v3 = *v2;
  v4 = (unsigned __int8 *)a1;
  *(_QWORD *)a2 = v2 + 1;
  v6 = v3 & 0xF;
  v3 >>= 4;
  *(_BYTE *)a1 = v6;
  *(_DWORD *)(a1 + 4) = v3;
  if ( !v3 )
  {
    v7 = -8201;
    if ( _bittest64(&v7, v6) )
      *(_DWORD *)(a1 + 4) = sub_78B20((_QWORD *)a2);
  }
  a1 = *(unsigned int *)(a2 + 40);
  v8 = sub_76440(a1, 2, 2u);
  v9 = *v4;
  if ( v8 )
  {
    v10 = 0;
    if ( (unsigned __int8)v9 <= 0xEu )
    {
      v11 = 16498;
      if ( _bittest64(&v11, v9) )
      {
        a1 = a2;
        v10 = sub_78B20((_QWORD *)a2);
        v9 = *v4;
      }
    }
    *((_WORD *)v4 + 1) = v10;
  }
  switch ( v9 )
  {
    case 0uLL:
      goto LABEL_12;
    case 1uLL:
      v17 = sub_78B20((_QWORD *)a2);
      *((_DWORD *)v4 + 2) = v17;
      a1 = *(_QWORD *)(a2 + 24);
      if ( !a1 )
        goto LABEL_12;
      v30 = 121;
      if ( *(_DWORD *)(a2 + 48) > 0xAu )
        v30 = 122;
      v31 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 376LL);
      if ( v31 != sub_761C0 )
        v17 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v31)(a1, v17, v30);
LABEL_20:
      *((_DWORD *)v4 + 2) = v17;
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 2uLL:
      v24 = (__m128i)(unsigned __int64)sub_78B40(a2);
      goto LABEL_33;
    case 3uLL:
      a1 = 24;
      v35 = j__qalloc_or_throw();
      v36 = 0;
      v37 = *((_DWORD *)v4 + 1);
      if ( !*(_BYTE *)(a2 + 52) )
        v36 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v35 = v36;
      *(_QWORD *)(v35 + 8) = 0;
      *(_DWORD *)(v35 + 16) = v37;
      *((_QWORD *)v4 + 1) = v35;
      *v4 = 9;
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
      *((_DWORD *)v4 + 1) = v13;
      goto LABEL_13;
    case 4uLL:
      v12 = (_QWORD *)j__qalloc_or_throw();
      v12[4] = 0xFFFFFFFF00000000LL;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_32B920(v12, -1);
      *((_QWORD *)v4 + 1) = v12;
      a1 = (__int64)v12;
      if ( (unsigned __int8)sub_841D0(v12, a2) )
        goto LABEL_12;
      return 0;
    case 5uLL:
      a1 = a2;
      v32 = (_QWORD *)j__qalloc_or_throw();
      v33 = sub_78E20(a2, 0);
      v34 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v34 = *(_QWORD *)(a2 + 16);
      *v32 = v34;
      v32[1] = v33;
      v13 = *((_DWORD *)v4 + 1);
      *((_QWORD *)v4 + 1) = v32;
      goto LABEL_13;
    case 6uLL:
      a1 = a2;
      *((_QWORD *)v4 + 1) = sub_78DC0(a2, 0);
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 7uLL:
      a1 = a2;
      v17 = sub_78B20((_QWORD *)a2);
      goto LABEL_20;
    case 8uLL:
      v18 = j__qalloc_or_throw();
      *(_QWORD *)v18 = -1;
      a1 = v18;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 48) = 0;
      *(_QWORD *)(v18 + 72) = 0;
      *(_QWORD *)(v18 + 80) = 0;
      *(_QWORD *)(v18 + 88) = 0;
      *(_QWORD *)(v18 + 96) = 0;
      *(_QWORD *)(v18 + 104) = 0;
      *(_QWORD *)(v18 + 112) = 0;
      *(_QWORD *)(v18 + 136) = 0;
      *(_QWORD *)(v18 + 144) = 0;
      *(_QWORD *)(v18 + 152) = 0;
      *(_QWORD *)(v18 + 176) = 0;
      *(_QWORD *)(v18 + 184) = 0;
      *(_QWORD *)(v18 + 192) = 0;
      *(_QWORD *)(v18 + 216) = 0;
      *(_QWORD *)(v18 + 240) = 0;
      *(_QWORD *)(v18 + 248) = 0;
      *(_QWORD *)(v18 + 256) = 0;
      *(_QWORD *)(v18 + 280) = 0;
      *(_QWORD *)(v18 + 288) = 0;
      *(_OWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 56) = 0;
      *(_OWORD *)(v18 + 120) = 0;
      *(_OWORD *)(v18 + 160) = 0;
      *(_OWORD *)(v18 + 200) = 0;
      *(_OWORD *)(v18 + 224) = 0;
      *(_OWORD *)(v18 + 264) = 0;
      *(_OWORD *)(v18 + 296) = 0;
      *((_QWORD *)v4 + 1) = v18;
      if ( !(unsigned __int8)sub_82FF0(v18, a2) )
        return 0;
      goto LABEL_12;
    case 9uLL:
      v19 = j__qalloc_or_throw();
      v20 = 0;
      if ( !*(_BYTE *)(a2 + 52) )
        v20 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v19 = v20;
      a1 = a2;
      *(_QWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 16) = -1;
      *((_QWORD *)v4 + 1) = v19;
      v21 = sub_78B00((unsigned __int8 **)a2);
      if ( v21 < 0 )
      {
        a1 = a2;
        *(_DWORD *)(v19 + 16) = sub_78B20((_QWORD *)a2);
        *(_QWORD *)(v19 + 8) = sub_78E20(a2, 0);
      }
      else
      {
        *(_QWORD *)(v19 + 8) = 0;
        *(_DWORD *)(v19 + 16) = (unsigned __int8)v21;
      }
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xAuLL:
      a1 = j__qalloc_or_throw();
      *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = -1;
      *((_QWORD *)v4 + 1) = a1;
      if ( (unsigned __int8)sub_84170(a1, a2) )
        goto LABEL_12;
      return 0;
    case 0xBuLL:
      sub_78F50((__int64)&v48, (_QWORD *)a2);
      a1 = v48;
      if ( v49 < v50 && v49 && v48 )
        goto LABEL_58;
      goto LABEL_35;
    case 0xCuLL:
      v22 = j__qalloc_or_throw();
      *(_QWORD *)v22 = 0;
      a1 = v22;
      *(_QWORD *)(v22 + 24) = 0;
      *(_OWORD *)(v22 + 8) = 0;
      *(_OWORD *)(v22 + 32) = 0;
      *((_QWORD *)v4 + 1) = v22;
      if ( (unsigned __int8)sub_7DE40((__int64 *)v22, a2) )
        goto LABEL_12;
      return 0;
    case 0xDuLL:
      v23 = *((int *)v4 + 1);
      *v4 = 2;
      v24 = (__m128i)v23;
      *((_DWORD *)v4 + 1) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1504LL) + 80LL);
LABEL_33:
      v46 = _mm_unpacklo_epi64(v24, v24);
      v25 = j__qalloc_or_throw();
      v26 = _mm_load_si128(&v46);
      *(_QWORD *)v25 = -1;
      a1 = v25;
      *(_DWORD *)(v25 + 8) = 0;
      *(__m128i *)(v25 + 16) = v26;
      *((_QWORD *)v4 + 1) = v25;
      sub_7A6E0(v25, (__int64 *)a2);
      v13 = *((_DWORD *)v4 + 1);
      goto LABEL_13;
    case 0xEuLL:
      v29 = (_QWORD *)j__qalloc_or_throw();
      *v29 = 0xFFFFFFFF00000000LL;
      v29[1] = 0;
      v29[2] = 0xFFFFFFFF00000000LL;
      v29[3] = 0;
      *((_QWORD *)v4 + 1) = v29;
      if ( !(unsigned __int8)sub_83790(v29, a2) )
        return 0;
      a1 = *((_QWORD *)v4 + 1) + 16LL;
      if ( (unsigned __int8)sub_83790(a1, a2) )
        goto LABEL_12;
      return 0;
    case 0xFuLL:
      v27 = sub_78B00((unsigned __int8 **)a2);
      if ( v27 == 3 )
      {
        *v4 = 15;
        v47 = 0;
        if ( (unsigned __int8)sub_78B00((unsigned __int8 **)a2) )
        {
          sub_790C0((unsigned __int8 **)a2, (__int64)&v47, -1);
          sub_78F50((__int64)&v48, (_QWORD *)a2);
          v38 = v48;
          v39 = v49;
          v40 = v50;
        }
        else
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        v41 = qalloc_or_throw();
        v42 = 0;
        if ( !*(_BYTE *)(a2 + 52) )
          v42 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)v41 = 0;
        *(_QWORD *)(v41 + 16) = v42;
        v43 = v47;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 24) = v38;
        *(_QWORD *)(v41 + 32) = v39;
        *(_QWORD *)(v41 + 40) = v40;
        *(_QWORD *)(v41 + 48) = v43;
        *((_QWORD *)v4 + 1) = v41;
        v47 = 0;
        sub_79480(a2, v41);
        a1 = (__int64)&v47;
        clear_tinfo_t();
LABEL_12:
        v13 = *((_DWORD *)v4 + 1);
        goto LABEL_13;
      }
      if ( v27 > 3u )
      {
        if ( v27 != 4 )
          goto LABEL_76;
        *v4 = 2;
        v44 = (__m128i *)j__qalloc_or_throw();
        v45 = sub_78B40(a2);
        v44->m128i_i64[0] = -1;
        v44->m128i_i32[2] = 0;
        v44[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
        *((_QWORD *)v4 + 1) = v44;
        *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL) = sub_78B40(a2);
        a1 = *((_QWORD *)v4 + 1);
        sub_7A6E0(a1, (__int64 *)a2);
        v13 = *((_DWORD *)v4 + 1);
      }
      else
      {
        if ( v27 != 1 )
        {
          if ( v27 == 2 )
          {
            *v4 = 13;
            v28 = j__qalloc_or_throw();
            a1 = a2;
            *((_QWORD *)v4 + 1) = v28;
            sub_79260(a2, v28);
            v13 = *((_DWORD *)v4 + 1);
            goto LABEL_13;
          }
LABEL_76:
          if ( !under_debugger )
            sub_37E160(50589);
LABEL_78:
          BUG();
        }
        sub_78F50((__int64)&v48, (_QWORD *)a2);
        *v4 = 3;
        a1 = v48;
        if ( v49 < v50 && v48 && v49 )
        {
LABEL_58:
          a1 = qrealloc();
          if ( !a1 )
            a1 = v48;
        }
LABEL_35:
        *((_QWORD *)v4 + 1) = a1;
        v13 = *((_DWORD *)v4 + 1);
      }
LABEL_13:
      if ( v13 == 15 && *(_DWORD *)(a2 + 48) <= 0xBu )
        *((_DWORD *)v4 + 1) = -1;
      v14 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
      {
        v15 = *v14;
        *(_QWORD *)a2 = v14 + 1;
        v4[1] = v15;
        return 1;
      }
LABEL_73:
      sub_762F0(a1);
    default:
      *v4 = 0;
      if ( !under_debugger )
        sub_37E160(50588);
      goto LABEL_78;
  }
}

