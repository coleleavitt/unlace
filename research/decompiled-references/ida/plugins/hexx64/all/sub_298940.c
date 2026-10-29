__int64 __fastcall sub_298940(_QWORD *a1, __int64 a2, double a3)
{
  unsigned int v3; // r15d
  __int64 v7; // r12
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rax
  char v23; // r13
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // r15
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __m128d v32; // xmm0
  __int64 *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __m128d v40; // xmm0
  unsigned int v41; // edi
  int v42; // eax
  int v43; // [rsp+10h] [rbp-168h]
  int v44; // [rsp+10h] [rbp-168h]
  char v45; // [rsp+17h] [rbp-161h]
  int v46; // [rsp+20h] [rbp-158h]
  int v47; // [rsp+24h] [rbp-154h]
  unsigned __int64 v48; // [rsp+28h] [rbp-150h]
  __int64 v49; // [rsp+30h] [rbp-148h]
  __int64 v50; // [rsp+38h] [rbp-140h]
  int v51; // [rsp+48h] [rbp-130h] BYREF
  int v52; // [rsp+4Ch] [rbp-12Ch] BYREF
  __int64 v53; // [rsp+50h] [rbp-128h] BYREF
  __int64 v54; // [rsp+58h] [rbp-120h] BYREF
  _QWORD *v55; // [rsp+60h] [rbp-118h] BYREF
  __int64 v56; // [rsp+68h] [rbp-110h]
  __int64 v57; // [rsp+70h] [rbp-108h] BYREF
  char v58; // [rsp+78h] [rbp-100h]
  __int64 v59; // [rsp+80h] [rbp-F8h] BYREF
  char v60; // [rsp+88h] [rbp-F0h]
  __int64 v61[6]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD *v62; // [rsp+C0h] [rbp-B8h]
  int v63[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+D8h] [rbp-A0h]
  __int64 v65; // [rsp+E8h] [rbp-90h]
  int v66[2]; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v67; // [rsp+F8h] [rbp-80h]
  __int64 v68; // [rsp+108h] [rbp-70h]
  int v69; // [rsp+110h] [rbp-68h] BYREF
  int v70; // [rsp+114h] [rbp-64h]
  __int128 v71; // [rsp+118h] [rbp-60h]
  __int64 v72; // [rsp+128h] [rbp-50h]
  unsigned __int64 v73; // [rsp+138h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283C00(&v55, a1, a2, a3);
  if ( v56 == *v55 )
    return 0;
  v7 = *(_QWORD *)(v56 + 8);
  v8 = *(_DWORD *)(v7 + 24) == 72;
  v56 = v7;
  if ( !v8 )
    return 0;
  v9 = *(_QWORD *)(v7 + 40);
  if ( (unsigned int)(*(_DWORD *)(v9 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285160(*(_QWORD *)(v7 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v9) )
    return 0;
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL);
  if ( *(_DWORD *)(v10 + 8) != 65 )
    return 0;
  v11 = *(int *)(v10 + 32);
  v12 = *(_QWORD *)(v10 + 24);
  v58 = 0;
  v57 = 0;
  v13 = sub_1E0010((__int64)&v57, &v51, (_DWORD *)(*(_QWORD *)(v12 + 432) + 104 * v11));
  if ( !v13 )
    return 0;
  v14 = *(_QWORD *)(a2 + 24);
  v45 = sub_285230(v14);
  if ( v45 )
    return 0;
  switch ( *(_DWORD *)(v14 + 8) )
  {
    case 0x16:
      v43 = 44;
      break;
    case 0x17:
    case 0x41:
      v43 = 43;
      break;
    case 0x18:
      v43 = 50;
      break;
    case 0x19:
      v43 = 45;
      break;
    case 0x1A:
      v43 = 52;
      break;
    case 0x1B:
      v43 = 48;
      break;
    case 0x1C:
      v43 = 49;
      break;
    case 0x1D:
      v43 = 47;
      break;
    case 0x1E:
      v43 = 51;
      break;
    case 0x1F:
      v43 = 46;
      break;
    default:
      return 0;
  }
  v60 = 0;
  v8 = *(_DWORD *)(v14 + 8) == 65;
  v59 = 0;
  v15 = *(_QWORD *)(v14 + 24);
  v52 = 8;
  if ( v8 )
  {
    v21 = 0;
    if ( sub_259AA0(v15, v10, a3) )
      return 0;
  }
  else
  {
    v16 = sub_254FE0(v15);
    v17 = sub_259AA0(v16, v10, a3);
    v18 = *(_QWORD *)(v14 + 32);
    if ( v17 )
    {
      v37 = sub_254FE0(v18);
      if ( sub_259AA0(v37, v10, a3) )
        return 0;
      v45 = v13;
      v18 = *(_QWORD *)(v14 + 24);
    }
    v19 = sub_254FE0(v18);
    v20 = *(_DWORD *)(v19 + 8);
    if ( v20 == 65 )
    {
      v21 = 0;
      if ( !(unsigned __int8)sub_1E0010(
                               (__int64)&v59,
                               &v52,
                               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) + 432LL) + 104LL * *(int *)(v19 + 32))) )
        return 0;
    }
    else
    {
      if ( v20 != 61 )
        return 0;
      v21 = sub_255A30(*(__int64 **)(v19 + 24));
    }
  }
  v48 = **(_QWORD **)(v7 + 40);
  if ( v48 == -1 )
    v48 = *(_QWORD *)(v7 + 16);
  v22 = *(_QWORD *)(a2 + 24);
  v53 = 0;
  v49 = *(_QWORD *)(v22 + 64);
  v23 = sub_2968B0(&v53, v49, v10);
  if ( !v23 )
    return 0;
  v50 = v53;
  v24 = *(_QWORD *)(a1[8] + 8LL);
  v25 = sub_670B0(v24, v48);
  v26 = v25;
  if ( v25 && *((_DWORD *)v25 + 19) == 3 && (v38 = v25[6]) != 0 )
  {
    while ( v48 != *(_QWORD *)(v38 + 24) )
    {
      v38 = *(_QWORD *)(v38 + 8);
      if ( !v38 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v61[0] = (__int64)&off_4E0DD0;
    memset(&v61[1], 0, 32);
    v61[5] = v48;
    v62 = nullptr;
    if ( !(unsigned int)sub_11F9E0(v24, v61) )
      return 0;
    v26 = v62;
    if ( !v62 )
      return 0;
  }
  v27 = (__int64)(v26 + 56);
  v46 = v52;
  v63[1] = v52;
  v47 = v51;
  v54 = v21;
  v63[0] = 0;
  v65 = 0;
  v66[0] = 0;
  v66[1] = v51;
  v68 = 0;
  v64 = 0;
  v67 = 0;
  if ( v60 )
  {
    if ( !(unsigned __int8)sub_1E0180(v27, (__m128i *)v63, (__int64)&v59, 0) )
      goto LABEL_62;
    v23 = sub_312AF0((__int64)v63, &v54);
  }
  v3 = sub_1E0180(v27, (__m128i *)v66, (__int64)&v57, 0);
  if ( !(_BYTE)v3 )
  {
LABEL_62:
    sub_312B80((__int64)v66);
    sub_312B80((__int64)v63);
    return 0;
  }
  if ( v23 )
  {
    if ( v46 <= v47 )
    {
      if ( v46 < v47 )
      {
        v8 = v43 == (unsigned int)sub_32EAF0(v43);
        v54 = sub_32ABC0(v54, v47, !v8);
        v46 = v47;
      }
      goto LABEL_32;
    }
    v39 = sub_32EAF0(v43);
    if ( (unsigned __int8)sub_313BB0((__int64)v66, v46, v43 != v39) )
    {
LABEL_32:
      v71 = 0;
      v70 = v46;
      v69 = 0;
      v72 = 0;
      sub_312D90((__int64)v63, (__int64)&v69);
      sub_312B80((__int64)&v69);
      sub_313200((__int64)v63, v43 - 43, v54);
      sub_3147B0((__int64)v63, v66);
      goto LABEL_33;
    }
    goto LABEL_62;
  }
  if ( !(unsigned __int8)sub_312AF0((__int64)v66, v61) )
    goto LABEL_62;
  if ( v45 != 1 && v43 != 44 && v43 != 43 )
    v43 = sub_32EA00(v43);
  if ( v46 < v47 )
  {
    v42 = sub_32EAF0(v43);
    if ( !(unsigned __int8)sub_313BB0((__int64)v63, v47, v43 != v42) )
      goto LABEL_62;
  }
  else if ( v46 > v47 )
  {
    v8 = v43 == (unsigned int)sub_32EAF0(v43);
    v61[0] = sub_32ABC0(v61[0], v46, !v8);
    v47 = v46;
  }
  v71 = 0;
  v70 = v47;
  v69 = 0;
  v72 = 0;
  sub_312D90((__int64)v66, (__int64)&v69);
  sub_312B80((__int64)&v69);
  sub_313200((__int64)v66, v43 - 43, v61[0]);
  sub_3147B0((__int64)v66, v63);
LABEL_33:
  v28 = sub_312DC0((__int64)v66, (__int64)v63);
  sub_312B80((__int64)v66);
  sub_312B80((__int64)v63);
  if ( v28 )
    return 0;
  v44 = *(_DWORD *)(v7 + 28);
  v31 = j__qalloc_or_throw(200, (__int64)v63, v29, v30);
  v32.m128d_f64[0] = 0.0;
  *(_QWORD *)v31 = -1;
  v33 = (__int64 *)v31;
  *(_DWORD *)(v31 + 8) = 0;
  *(_QWORD *)(v31 + 40) = 0;
  *(_QWORD *)(v31 + 12) = -1;
  *(_QWORD *)(v31 + 84) = -1;
  *(_QWORD *)(v31 + 48) = 0;
  *(_QWORD *)(v31 + 144) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v31 + 152) = 0xFFFFFFFFLL;
  *(_DWORD *)(v31 + 56) = 0;
  *(_QWORD *)(v31 + 64) = 0;
  *(_QWORD *)(v31 + 72) = -1;
  *(_DWORD *)(v31 + 80) = 0;
  *(_QWORD *)(v31 + 112) = 0;
  *(_QWORD *)(v31 + 120) = 0;
  *(_DWORD *)(v31 + 128) = 0;
  *(_QWORD *)(v31 + 136) = -1;
  *(_QWORD *)(v31 + 176) = 0;
  *(_QWORD *)(v31 + 184) = 0;
  *(_DWORD *)(v31 + 192) = 0;
  *(_OWORD *)(v31 + 24) = 0;
  *(_OWORD *)(v31 + 96) = 0;
  *(_OWORD *)(v31 + 160) = 0;
  if ( v45 )
  {
    v40 = (__m128d)_mm_loadu_si128((const __m128i *)(v14 + 24));
    v41 = *(_DWORD *)(v14 + 8);
    v32 = _mm_shuffle_pd(v40, v40, 1);
    *(__m128d *)(v14 + 24) = v32;
    *(_DWORD *)(v14 + 8) = sub_254C90(v41);
  }
  sub_2819E0(v33, (__int64 *)v14);
  sub_2819E0(v33 + 9, *(__int64 **)(v7 + 40));
  sub_2819E0(v33 + 17, *(__int64 **)(v50 + 40));
  v34 = (__int64)v55;
  v33[8] = v49;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v54 = v56;
  sub_298400(v61, v34, &v54, v32.m128d_f64[0]);
  sub_296C20(v49, v50, v32.m128d_f64[0]);
  v35 = *(_QWORD *)(a2 + 24);
  if ( v35 )
  {
    v36 = *(_QWORD *)(v35 + 64);
    if ( v36 )
    {
      sub_255050(*(_QWORD *)(v35 + 64), v32.m128d_f64[0]);
      j__qfree(v36);
    }
    sub_255630(v35, v32.m128d_f64[0]);
    clear_tinfo_t();
    j__qfree(v35);
  }
  *(_QWORD *)(a2 + 24) = v33;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v44;
  *(_QWORD *)a2 = v48;
  return v3;
}

