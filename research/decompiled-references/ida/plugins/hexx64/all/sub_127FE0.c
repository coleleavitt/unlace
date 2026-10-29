__int64 __fastcall sub_127FE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // r12
  __int64 v10; // rbp
  __int64 (*v11)(); // rax
  __int64 v12; // r12
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __m128 v19; // xmm0
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // r8d
  char v25; // al
  __int64 v26; // rdx
  _BYTE *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  int v31; // edx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 v39; // rsi
  int v40; // r8d
  int v41; // r9d
  _QWORD *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 *v45; // rsi
  __m128i *v46; // rdx
  unsigned __int64 v47; // r13
  __int64 v48; // rcx
  __m128i si128; // xmm0
  __int64 v50; // r13
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __m128i v58; // xmm0
  size_t v59; // r11
  unsigned __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  void *v65; // rax
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v67; // [rsp+10h] [rbp-B8h]
  char v68; // [rsp+17h] [rbp-B1h]
  size_t v69; // [rsp+18h] [rbp-B0h]
  __int64 *v70; // [rsp+20h] [rbp-A8h]
  __int64 *v71; // [rsp+28h] [rbp-A0h]
  __int64 v72[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v73; // [rsp+40h] [rbp-88h] BYREF
  __m128i v74; // [rsp+48h] [rbp-80h]
  _BYTE v75[24]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v76; // [rsp+78h] [rbp-50h]
  unsigned __int64 v77; // [rsp+88h] [rbp-40h]

  v8 = a3;
  v67 = a4;
  v77 = __readfsqword(0x28u);
  while ( 2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v11 = *(__int64 (**)())(*(_QWORD *)v10 + 64LL);
    if ( v11 != sub_11B410
      && ((unsigned __int8 (__fastcall *)(_QWORD, __int64 *, __int64, __int64, _QWORD))v11)(
           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
           a2,
           a1,
           v8,
           v67) )
    {
      return v77 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)v8 )
    {
      case 1:
        v31 = *(_DWORD *)(v8 + 4);
        v32 = *(_DWORD *)(v8 + 8);
        *(_OWORD *)v75 = 0u;
        sub_63E80((__int64 *)v75, v32, v31, a7);
        *(_QWORD *)&v75[16] = 0;
        v76 = 0;
        sub_64280(a2, (__int64 *)v75, 0.0);
        sub_316CB0(a2 + 2, (__int64 **)&v75[16], v33, v34);
        if ( *(_QWORD *)&v75[16] )
        {
          *(_QWORD *)&v76 = 0;
          qfree(*(__int64 *)&v75[16]);
        }
        goto LABEL_34;
      case 4:
        sub_127A20((__int64)v75, a1, *(_QWORD *)(v8 + 8), v67, a5, a6, a7, a8);
        sub_64280(a2, (__int64 *)v75, a7);
        sub_316CB0(a2 + 2, (__int64 **)&v75[16], v35, v36);
        if ( *(_QWORD *)&v75[16] )
        {
          *(_QWORD *)&v76 = 0;
          qfree(*(__int64 *)&v75[16]);
        }
LABEL_34:
        qfree(*(__int64 *)v75);
        return v77 - __readfsqword(0x28u);
      case 5:
        v37 = *(int *)(v8 + 4);
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + *(_QWORD *)(**(_QWORD **)(v8 + 8) + 1440LL));
        goto LABEL_39;
      case 6:
        if ( (v67 & 0x400) != 0
          && (unsigned __int8)sub_342B40(*(_QWORD *)(a1 + 480), *(_QWORD *)(v8 + 8), *(int *)(v8 + 4)) )
        {
          return v77 - __readfsqword(0x28u);
        }
        v37 = *(int *)(v8 + 4);
        v38 = *(_QWORD *)(v8 + 8);
LABEL_39:
        result = sub_122B20(a2, v38, v37);
        break;
      case 8:
        v12 = *(_QWORD *)(v8 + 8);
        v72[0] = 0;
        v72[1] = 0;
        v74 = 0;
        v73 = 0;
        v13 = v67 & 0x4000;
        v68 = v13 != 0;
        if ( (v67 & 1) != 0 )
        {
          v45 = (__int64 *)(v12 + 136);
          v70 = v72;
          sub_648D0(v72, (const void **)(v12 + 136), 0.0);
          v47 = *(_QWORD *)(v12 + 160);
          v48 = 0;
          if ( v47 )
          {
            n[0] = 16 * v47;
            v65 = (void *)qalloc_or_throw(16 * v47, (__int64)v45, 16 * v47, 0);
            v45 = *(__int64 **)(v12 + 152);
            v48 = (__int64)memcpy(v65, v45, 16 * v47);
          }
          si128 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
          if ( v73 )
          {
            v69 = v48;
            *(__m128i *)n = si128;
            v74.m128i_i64[0] = 0;
            qfree(v73);
            v48 = v69;
            si128 = _mm_load_si128((const __m128i *)n);
          }
          v73 = v48;
          v74 = si128;
          if ( (v67 & 0x4000) != 0 )
          {
            v57 = *(_QWORD *)(a1 + 64);
            v58 = _mm_loadu_si128((const __m128i *)(v57 + 664));
            v59 = *(_QWORD *)(v57 + 568);
            memset(v75, 0, sizeof(v75));
            a8 = (__m128)_mm_srli_si128(v58, 8);
            v60 = _mm_add_epi64(v58, (__m128i)a8).m128i_u64[0];
            if ( v60 - 1 >= v59 )
            {
              v69 = v59;
              n[0] = v60;
              *(_QWORD *)v75 = qvector_reserve((__int64)v75, 0, 1, 16);
              v46 = (__m128i *)(16LL * *(_QWORD *)&v75[8]);
              *(__m128i *)(*(_QWORD *)v75 + 16LL * (*(_QWORD *)&v75[8])++) = _mm_unpacklo_epi64(
                                                                               (__m128i)v69,
                                                                               (__m128i)(n[0] - v69));
            }
            v71 = &v73;
            sub_3180C0(&v73, (__int64)v75, v46, v48);
            if ( *(_QWORD *)v75 )
            {
              *(_QWORD *)&v75[8] = 0;
              qfree(*(__int64 *)v75);
            }
            sub_64640(v70, (__int64 *)(v12 + 96), v61, v62, v63, v64);
            v45 = (__int64 *)(v12 + 112);
            sub_317C60(v71, v12 + 112);
          }
          if ( (v67 & 0x2000) == 0 )
          {
            v50 = *(_QWORD *)(a1 + 64);
            memset(v75, 0, sizeof(v75));
            v51 = *(_QWORD *)(v50 + 216);
            if ( v51 )
            {
              n[0] = *(_QWORD *)(v50 + 216);
              v69 = 16 * v51;
              *(_QWORD *)v75 = qalloc_or_throw(16 * v51, (__int64)v45, 16 * v51, v51);
              *(_QWORD *)&v75[16] = n[0];
              memcpy(*(void **)v75, *(const void **)(v50 + 208), v69);
              *(_QWORD *)&v75[8] = n[0];
            }
            sub_317BD0((__int64 *)v75, (__m128i *)(v50 + 600));
            v45 = (__int64 *)v75;
            sub_317C60(&v73, (__int64)v75);
            if ( *(_QWORD *)v75 )
            {
              *(_QWORD *)&v75[8] = 0;
              qfree(*(__int64 *)v75);
            }
            if ( !v13 )
            {
              v45 = v70;
              sub_11E5D0(v12, v70, *(_QWORD **)(a1 + 64), 0.0);
            }
          }
          v52 = *(_QWORD *)(a1 + 64);
          v19.m128_u64[0] = 0;
          memset(v75, 0, sizeof(v75));
          v53 = *(_QWORD *)(v52 + 192);
          if ( v53 )
          {
            n[0] = 16 * v53;
            *(_QWORD *)v75 = qalloc_or_throw(16 * v53, (__int64)v45, 16 * v53, v48);
            *(_QWORD *)&v75[16] = v53;
            memcpy(*(void **)v75, *(const void **)(v52 + 184), n[0]);
            *(_QWORD *)&v75[8] = v53;
            v52 = *(_QWORD *)(a1 + 64);
          }
          sub_317C60((__int64 *)v75, v52 + 208);
          v71 = &v73;
          sub_317C60(&v73, (__int64)v75);
          if ( (v67 & 0x80u) != 0 && (!(unsigned __int8)sub_64880((_QWORD *)(v12 + 176)) || *(_QWORD *)(v12 + 200)) )
          {
            sub_64640(v70, (__int64 *)(v12 + 176), v54, v55, v56, v23);
            sub_317C60(v71, v12 + 192);
          }
          if ( *(_QWORD *)v75 )
          {
            *(_QWORD *)&v75[8] = 0;
            qfree(*(__int64 *)v75);
          }
        }
        else
        {
          v70 = v72;
          if ( (v67 & 0x40) != 0 )
            sub_11E5D0(v12, v72, *(_QWORD **)(a1 + 64), 0.0);
          v14 = v12 + 96;
          if ( (v67 & 0x1000) != 0 )
          {
            sub_64000((__int64 *)v75, v14, 0.0);
            *(_QWORD *)&v75[16] = 0;
            v19.m128_u64[0] = 0;
            v76 = 0;
            v44 = *(_QWORD *)(v12 + 120);
            if ( v44 )
            {
              n[0] = 16 * v44;
              *(_QWORD *)&v75[16] = qalloc_or_throw(16 * v44, v14, 16 * v44, v43);
              *((_QWORD *)&v76 + 1) = v44;
              memcpy(*(void **)&v75[16], *(const void **)(v12 + 112), 16 * v44);
              *(_QWORD *)&v76 = v44;
            }
          }
          else
          {
            sub_64000((__int64 *)v75, v14, 0.0);
            *(_QWORD *)&v75[16] = 0;
            v19.m128_u64[0] = 0;
            v76 = 0;
            v20 = *(_QWORD *)(v12 + 120);
            if ( v20 )
            {
              n[0] = 16 * v20;
              *(_QWORD *)&v75[16] = qalloc_or_throw(16 * v20, v14, 16 * v20, v16);
              *((_QWORD *)&v76 + 1) = v20;
              memcpy(*(void **)&v75[16], *(const void **)(v12 + 112), 16 * v20);
              *(_QWORD *)&v76 = v20;
            }
            sub_64640((__int64 *)v75, (__int64 *)(v12 + 240), v15, v16, v17, v18);
            sub_317C60((__int64 *)&v75[16], v12 + 256);
          }
          sub_64280(v70, (__int64 *)v75, 0.0);
          v71 = &v73;
          sub_316CB0(&v73, (__int64 **)&v75[16], v21, v22);
          if ( *(_QWORD *)&v75[16] )
          {
            *(_QWORD *)&v76 = 0;
            qfree(*(__int64 *)&v75[16]);
          }
          qfree(*(__int64 *)v75);
        }
        if ( *(_QWORD *)(v12 + 32) )
        {
          v24 = 0;
          v25 = 0;
          v26 = 0;
          do
          {
            v27 = (_BYTE *)(*(_QWORD *)(v12 + 24) + 80 * v26);
            if ( *v27 == 4 || *v27 == 10 )
            {
              LOBYTE(n[0]) = v25;
              sub_127FE0(a1, (__int64)a2, (__int64)v27, v67, v24, v23, n[0], n[1], v67, v24, (__int64)v70);
              v24 = v69;
              v25 = n[0];
            }
            if ( v25 != 1 && v68 )
            {
              LODWORD(n[0]) = v24;
              v25 = sub_151D70((__int64)v27, v10);
              v24 = n[0];
            }
            v26 = ++v24;
          }
          while ( (unsigned __int64)v24 < *(_QWORD *)(v12 + 32) );
          v68 &= v25 ^ 1;
        }
        if ( v68 )
        {
          v19 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
          *(__m128 *)v75 = v19;
          sub_317BD0(v71, (__m128i *)v75);
        }
        sub_64280(a2, v70, *(double *)v19.m128_u64);
        sub_316CB0(a2 + 2, (__int64 **)v71, v28, v29);
        sub_32FE70(v12, a2, a1, v67, *(double *)v19.m128_u64, a8);
        if ( v73 )
        {
          v74.m128i_i64[0] = 0;
          qfree(v73);
        }
        qfree(v72[0]);
        return v77 - __readfsqword(0x28u);
      case 9:
        v42 = **(_QWORD ***)(v8 + 8);
        if ( (*(_DWORD *)v42 & 4) != 0 || (*(_DWORD *)v42 & 0xC0000) == 0x40000 )
          return v77 - __readfsqword(0x28u);
        result = sub_11BCA0(v42, (__int64)a2, v8, 0xFFFF0000, a7);
        break;
      case 0xA:
        v39 = *(_QWORD *)(v8 + 8);
        if ( *(int *)(v39 + 20) > 0 && ((v67 & 1) == 0 || (v67 & 0x80u) == 0) )
        {
          sub_123A40((__int64)v75, (unsigned __int8 *)v39, a3, a4);
          *(_DWORD *)&v75[4] = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 20LL);
          sub_127FE0(a1, (__int64)a2, (__int64)v75, v67, v40, v41, n[0], n[1], v67, v69, (__int64)v70);
          sub_11CDA0((__int64)v75);
        }
        return v77 - __readfsqword(0x28u);
      case 0xE:
        sub_127FE0(a1, (__int64)a2, *(_QWORD *)(v8 + 8), v67, a5, a6, n[0], n[1], v67, v69, (__int64)v70);
        v8 = *(_QWORD *)(v8 + 8) + 16LL;
        continue;
      case 0xF:
        *(_QWORD *)&v75[8] = a1;
        *(_QWORD *)v75 = &off_4DD5E8;
        *(_QWORD *)&v75[16] = a2;
        LODWORD(v76) = v67;
        sub_11E540((_BYTE *)v8, a7);
        return v77 - __readfsqword(0x28u);
      default:
        return v77 - __readfsqword(0x28u);
    }
    return result;
  }
}

