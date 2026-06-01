__int64 __fastcall sub_407720(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6, __m128 a7)
{
  __int16 v7; // r13
  bool v9; // zf
  unsigned __int16 v11; // r15
  unsigned __int8 v12; // r14
  int v13; // eax
  int v14; // eax
  char v15; // al
  unsigned int v16; // r15d
  int v17; // r15d
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rsi
  int v23; // edi
  __int16 v24; // ax
  unsigned __int8 *v25; // r8
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r15
  int v36; // edx
  unsigned __int8 v37; // r15
  int v38; // r8d
  int v39; // ecx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // r14
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int dtype_size; // eax
  __int64 v59; // r12
  int v60; // eax
  __int64 v61; // r12
  int v62; // eax
  __int64 v63; // r12
  int v64; // eax
  unsigned int v65; // [rsp+10h] [rbp-80h]
  unsigned int v66; // [rsp+14h] [rbp-7Ch]
  int v67; // [rsp+14h] [rbp-7Ch]
  _QWORD v69[2]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+30h] [rbp-60h] BYREF
  __int64 v71; // [rsp+38h] [rbp-58h]
  __int64 v72; // [rsp+40h] [rbp-50h] BYREF
  __int64 v73; // [rsp+48h] [rbp-48h]
  unsigned __int64 v74; // [rsp+58h] [rbp-38h]

  v7 = a2;
  v9 = *(_BYTE *)(a3 + 16) == 0;
  v74 = __readfsqword(0x28u);
  if ( !v9 )
  {
    if ( *(_BYTE *)(a4 + 16) )
      goto LABEL_3;
LABEL_58:
    sub_3FA580((int *)a4, 0, 0, a5, a6, a7);
    if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      goto LABEL_4;
LABEL_59:
    if ( (unsigned __int8)sub_4074F0(a1, a3, a5, a6, a7) )
    {
      sub_3ED3A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
      return 0;
    }
    v11 = *(_WORD *)(a1 + 48);
LABEL_7:
    v12 = sub_3FA390(a1, a1 + 64);
    sub_3FA390(a1, a1 + 104);
    if ( v11 == 225 )
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, dtype_size, 8, -1, 8, *(double *)a5.m128i_i64, 0);
      v59 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v60 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v60, -1, -1, v59, *(double *)a5.m128i_i64, 0);
      v61 = *(int *)(*(_QWORD *)(a1 + 832) + 388LL);
      v62 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v62, -1, -1, v61, *(double *)a5.m128i_i64, 0);
      v63 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
      v64 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v64, -1, -1, v63, *(double *)a5.m128i_i64, 0);
      return 0;
    }
    if ( v11 <= 0xE1u )
    {
      if ( v11 == 161 )
      {
        if ( *(_BYTE *)(a3 + 16) || (unsigned __int8)sub_3FACB0(a3, a5, a6, a7) )
        {
          v51 = *(int *)(a3 + 12);
          v52 = get_dtype_size();
          sub_1D6310(a1, 0x3Eu, v52, v51, -1, -1, *(double *)a5.m128i_i64, 0);
          sub_4075A0(a1, *(double *)a5.m128i_i64);
          return 0;
        }
        goto LABEL_83;
      }
      if ( v11 > 0xA1u )
      {
        if ( v11 == 218 )
        {
          v7 = a2 | 0x100;
LABEL_73:
          if ( *(_BYTE *)(a3 + 16) || (unsigned __int8)sub_3FACB0(a3, a5, a6, a7) )
          {
            v65 = *(_DWORD *)(a3 + 12);
LABEL_16:
            v66 = -1;
            v15 = *(_BYTE *)(a4 + 16);
            if ( (v7 & 0x200) != 0 )
            {
              if ( v15 )
              {
                v16 = *(_DWORD *)(a4 + 12);
                v66 = v16;
                goto LABEL_19;
              }
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6, a7) )
                goto LABEL_83;
              v15 = *(_BYTE *)(a4 + 16);
              v66 = *(_DWORD *)(a4 + 12);
            }
            if ( !v15 && !(unsigned __int8)sub_3FACB0(a4, a5, a6, a7) )
              goto LABEL_83;
            v16 = *(_DWORD *)(a4 + 12);
LABEL_19:
            if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3FACB0(a3, a5, a6, a7) )
              goto LABEL_83;
            v17 = sub_4076B0(a1, v7, *(_DWORD *)(a3 + 12), v16, a5, a6, a7);
            LODWORD(v69[0]) = 1;
            v69[1] = v65;
            HIDWORD(v69[0]) = get_dtype_size();
            v70 = 0xFFFFFFFF00000001LL;
            v71 = v66;
            v18 = get_dtype_size();
            v19 = HIDWORD(v69[0]);
            v20 = 32;
            v72 = 1;
            v21 = v18;
            if ( (v7 & 4) != 0 )
              v21 = HIDWORD(v69[0]);
            v73 = 0;
            if ( SHIDWORD(v69[0]) > 32 )
              v19 = 32;
            LODWORD(v73) = v17;
            if ( v18 <= 32 )
              v20 = v18;
            if ( v21 > 32 )
              v21 = 32;
            v22 = *(_QWORD *)(a1 + 832);
            HIDWORD(v69[0]) = v19;
            HIDWORD(v70) = v20;
            HIDWORD(v72) = v21;
            v23 = *(_DWORD *)(v22 + 92);
            if ( v19 >= v23 )
              BYTE1(v69[0]) |= 2u;
            if ( v20 >= v23 )
              BYTE1(v70) |= 2u;
            BYTE1(v72) = 2 * (v21 >= v23);
            v24 = *(_WORD *)(a1 + 48);
            if ( (v24 == 5 || v24 == 166) && *(_BYTE *)(a1 + 105) == 5 )
            {
              LODWORD(v71) = 0;
              if ( v18 != 1 )
              {
                v40 = *(_QWORD *)(a1 + 40);
                HIDWORD(v70) = 1;
                sub_1207E0((char *)&v70, (unsigned __int64 *)v22, 9, v40, v20, a5);
              }
            }
            v25 = (unsigned __int8 *)&v72;
            if ( v17 == -1 )
              v25 = nullptr;
            v26 = nullptr;
            if ( v66 != -1 )
              v26 = (unsigned __int8 *)&v70;
            v27 = (unsigned __int8 *)v69;
            if ( v65 == -1 )
              v27 = nullptr;
            sub_1D6450(a1, 62, v27, v26, v25, a5, a6, a7);
            if ( (v7 & 4) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL) == v17 )
            {
              if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3FACB0(a3, a5, a6, a7) )
                sub_3EB430(*(double *)a5.m128i_i64);
              sub_3FB270(a1, 0, *(_DWORD *)(a3 + 12), 0, a5, a6, a7);
            }
            if ( (v7 & 8) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 456LL) == v17 )
            {
              if ( !*(_BYTE *)(a4 + 16) && !(unsigned __int8)sub_3FACB0(a4, a5, a6, a7) )
                sub_3EB430(*(double *)a5.m128i_i64);
              sub_3FB270(a1, 1, *(_DWORD *)(a4 + 12), 0, a5, a6, a7);
            }
            v28 = *(unsigned __int16 *)(a1 + 48);
            if ( (_WORD)v28 != 465 )
            {
              if ( (unsigned __int16)v28 > 0x1D1u )
              {
                if ( (_WORD)v28 != 1076 )
                {
                  if ( (unsigned __int16)v28 <= 0x434u )
                  {
                    if ( (_WORD)v28 != 526 && (_WORD)v28 != 584 )
                      goto LABEL_51;
                    goto LABEL_89;
                  }
                  if ( (unsigned __int16)(v28 - 1105) > 1u )
                    goto LABEL_51;
                }
                v41 = get_dtype_size();
                sub_1D6310(a1, 0x3Eu, v41, -1, -1, 0, *(double *)a5.m128i_i64, 0);
                v42 = get_dtype_size();
                sub_1D6310(a1, 0x3Eu, v42, -1, -1, 1, *(double *)a5.m128i_i64, 0);
                v43 = get_dtype_size();
                sub_1D6310(a1, 3u, v43, 0, 0x3BEA45E214ADDC55LL, 2, *(double *)a5.m128i_i64, 0);
                v44 = get_dtype_size();
                sub_1D6310(a1, 3u, v44, 0, 0x3BEA45E214ADDC55LL, 3, *(double *)a5.m128i_i64, 0);
                v45 = get_dtype_size();
                sub_1D6310(a1, 3u, v45, 0, 0x3BEA45E214ADDC55LL, 4, *(double *)a5.m128i_i64, 0);
                goto LABEL_51;
              }
              if ( (unsigned __int16)v28 <= 0x8Eu )
              {
                if ( (unsigned __int16)v28 <= 0x8Au )
                {
                  if ( (unsigned __int16)(v28 - 5) > 0x27u )
                    goto LABEL_51;
                  v29 = 0x10040000FC60LL;
                  if ( !_bittest64(&v29, v28) )
                    goto LABEL_51;
                }
                goto LABEL_50;
              }
              if ( (unsigned __int16)v28 > 0x100u )
              {
                if ( (_WORD)v28 != 430 )
                  goto LABEL_51;
              }
              else if ( (unsigned __int16)v28 <= 0xFCu )
              {
                if ( (_WORD)v28 != 166 && (_WORD)v28 != 209 )
                  goto LABEL_51;
LABEL_50:
                sub_4075A0(a1, *(double *)a5.m128i_i64);
LABEL_51:
                sub_11CDA0((__int64)&v72);
                sub_11CDA0((__int64)&v70);
                sub_11CDA0((__int64)v69);
                return 0;
              }
            }
LABEL_89:
            v46 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v46, -1, -1, 0, *(double *)a5.m128i_i64, 0);
            v47 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v47, -1, -1, 1, *(double *)a5.m128i_i64, 0);
            v48 = get_dtype_size();
            sub_1D6310(a1, 3u, v48, 0, 0x3BEA45E214ADDC55LL, 2, *(double *)a5.m128i_i64, 0);
            v49 = get_dtype_size();
            sub_1D6310(a1, 3u, v49, 0, 0x3BEA45E214ADDC55LL, 3, *(double *)a5.m128i_i64, 0);
            v50 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v50, -1, -1, 4, *(double *)a5.m128i_i64, 0);
            goto LABEL_51;
          }
LABEL_83:
          sub_3EB430(*(double *)a5.m128i_i64);
        }
      }
      else if ( v11 == 92 )
      {
        v36 = *(_DWORD *)(a1 + 52);
        v37 = 7;
        if ( (v36 & 0x1018) != 0x1010 )
          v37 = ((v36 & 0x1018) == 4104 || (v36 & 0x1008) == 0) + 1;
        if ( v37 < v12 )
        {
          if ( *(_BYTE *)(a4 + 16) )
          {
            v38 = *(_DWORD *)(a4 + 12);
            v39 = v38;
          }
          else
          {
            if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6, a7) )
              goto LABEL_83;
            v38 = *(_DWORD *)(a4 + 12);
            if ( *(_BYTE *)(a4 + 16) )
            {
              v39 = *(_DWORD *)(a4 + 12);
            }
            else
            {
              v67 = *(_DWORD *)(a4 + 12);
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6, a7) )
                goto LABEL_83;
              v39 = *(_DWORD *)(a4 + 12);
              v38 = v67;
            }
          }
          sub_1D6840(a1, v37, v12, v39, v38, 0, a5, a6, a7);
        }
      }
      else if ( (unsigned __int16)(v11 - 148) <= 3u )
      {
        v13 = get_dtype_size();
        sub_1D6310(a1, 0x3Eu, v13, 0, 1, -1, *(double *)a5.m128i_i64, 0);
        v14 = get_dtype_size();
        sub_1D6310(a1, 0x3Eu, v14, 2, 3, -1, *(double *)a5.m128i_i64, 0);
      }
LABEL_14:
      if ( (a2 & 0x100) == 0 )
      {
        v65 = -1;
        goto LABEL_16;
      }
      goto LABEL_73;
    }
    if ( v11 != 742 )
    {
      if ( v11 <= 0x2E6u )
      {
        if ( v11 == 342 )
        {
          v31 = get_dtype_size();
          sub_1D6310(a1, 0x3Eu, v31, -1, -1, 8, *(double *)a5.m128i_i64, 0);
          return 0;
        }
        if ( v11 != 632 )
          goto LABEL_14;
LABEL_63:
        if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
        {
          v71 = 0;
          v70 = 0xFFFFFFFF00000000LL;
          sub_11D4A0((__int64)&v70);
          v72 = 0xFFFFFFFF00000000LL;
          v73 = 0;
          v34 = j__qalloc_or_throw(312, (__int64)"BUG", v32, v33);
          *(_QWORD *)v34 = -1;
          *(_QWORD *)(v34 + 8) = 0;
          v35 = v34;
          *(_QWORD *)(v34 + 16) = 0;
          *(_QWORD *)(v34 + 24) = 0;
          *(_QWORD *)(v34 + 48) = 0;
          *(_QWORD *)(v34 + 72) = 0;
          *(_QWORD *)(v34 + 80) = 0;
          *(_QWORD *)(v34 + 88) = 0;
          *(_QWORD *)(v34 + 96) = 0;
          *(_QWORD *)(v34 + 104) = 0;
          *(_QWORD *)(v34 + 112) = 0;
          *(_QWORD *)(v34 + 136) = 0;
          *(_QWORD *)(v34 + 144) = 0;
          *(_QWORD *)(v34 + 152) = 0;
          *(_QWORD *)(v34 + 176) = 0;
          *(_QWORD *)(v34 + 184) = 0;
          *(_QWORD *)(v34 + 192) = 0;
          *(_QWORD *)(v34 + 216) = 0;
          *(_QWORD *)(v34 + 240) = 0;
          *(_QWORD *)(v34 + 248) = 0;
          *(_QWORD *)(v34 + 256) = 0;
          *(_QWORD *)(v34 + 280) = 0;
          *(_QWORD *)(v34 + 288) = 0;
          *(_OWORD *)(v34 + 32) = 0;
          *(_OWORD *)(v34 + 56) = 0;
          *(_OWORD *)(v34 + 120) = 0;
          *(_OWORD *)(v34 + 160) = 0;
          *(_OWORD *)(v34 + 200) = 0;
          *(_OWORD *)(v34 + 224) = 0;
          *(_OWORD *)(v34 + 264) = 0;
          *(_OWORD *)(v34 + 296) = 0;
          LOBYTE(v72) = 8;
          v73 = v34;
          HIDWORD(v72) = 0;
          *(_DWORD *)(v34 + 20) = 112;
          v69[0] = 1;
          copy_tinfo_t();
          clear_tinfo_t();
          *(_DWORD *)(v35 + 280) |= 9u;
          *(_DWORD *)(v35 + 284) = 10;
          sub_1D6450(a1, 56, (unsigned __int8 *)&v70, nullptr, (unsigned __int8 *)&v72, (__m128i)0LL, a6, a7);
          sub_11CDA0((__int64)&v72);
          sub_11CDA0((__int64)&v70);
        }
        return 0;
      }
      if ( v11 != 763 )
      {
        if ( v11 != 0x8D05 )
          goto LABEL_14;
        goto LABEL_63;
      }
    }
    v53 = get_dtype_size();
    sub_1D6310(a1, 0x3Eu, v53, -1, -1, 0, *(double *)a5.m128i_i64, 0);
    v54 = get_dtype_size();
    sub_1D6310(a1, 3u, v54, 0, 0x3BEA45E214ADDC55LL, 1, *(double *)a5.m128i_i64, 0);
    v55 = get_dtype_size();
    sub_1D6310(a1, 3u, v55, 0, 0x3BEA45E214ADDC55LL, 2, *(double *)a5.m128i_i64, 0);
    v56 = get_dtype_size();
    sub_1D6310(a1, 3u, v56, 0, 0x3BEA45E214ADDC55LL, 3, *(double *)a5.m128i_i64, 0);
    v57 = get_dtype_size();
    sub_1D6310(a1, 3u, v57, 0, 0x3BEA45E214ADDC55LL, 4, *(double *)a5.m128i_i64, 0);
    goto LABEL_14;
  }
  sub_3FA580((int *)a3, 0, 0, a5, a6, a7);
  if ( !*(_BYTE *)(a4 + 16) )
    goto LABEL_58;
LABEL_3:
  if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
    goto LABEL_59;
LABEL_4:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 6) > 1u )
  {
    v11 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v11 - 17) > 1u && (unsigned __int16)(v11 - 87) > 1u )
      goto LABEL_7;
  }
  return 4294967294LL;
}

