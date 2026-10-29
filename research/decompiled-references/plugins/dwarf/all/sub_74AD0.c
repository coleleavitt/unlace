__int64 __fastcall sub_74AD0(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  _BYTE *v5; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __m128i *v20; // rbp
  __m128i *v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  _BYTE *v26; // rbx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r13
  __m128i si128; // xmm0
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  const __m128i *v37; // r13
  __int64 v38; // r14
  signed __int64 v39; // rbp
  __m128i v40; // xmm0
  bool v41; // cf
  __m128i v42; // xmm0
  int v43; // edx
  __int64 v44; // r12
  __int64 v45; // rax
  const __m128i *v46; // r14
  __int64 v47; // r12
  _DWORD *v48; // rbp
  __int32 v49; // ecx
  __m128i v50; // xmm0
  const __m128i *v51; // rdi
  __int8 *v53; // [rsp+10h] [rbp-D8h]
  __int64 v54; // [rsp+18h] [rbp-D0h]
  int v55; // [rsp+2Ch] [rbp-BCh] BYREF
  _QWORD v56[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v57; // [rsp+50h] [rbp-98h] BYREF
  __int128 v58; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v59; // [rsp+68h] [rbp-80h]
  int v60; // [rsp+70h] [rbp-78h]
  __int128 v61; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v62[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v5 = *(_BYTE **)(a1 + 48);
  v63 = __readfsqword(0x28u);
  result = 0;
  if ( *v5 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v61 = 0;
    memset(v62, 0, sizeof(v62));
    v10 = sub_847F0(a3, v8, &v61);
    v13 = *(_QWORD *)(a1 + 8);
    if ( v10 && v62[16] == 3 )
    {
      v26 = *(_BYTE **)(a1 + 48);
      v61 = 0;
      memset(v62, 0, sizeof(v62));
      if ( (unsigned __int8)sub_84590(a3, v13, &v61, 0, v11, v12) )
      {
        v30 = sub_1D000(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a2 + 16LL) + 128LL), v61);
        if ( *v26 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a2 + 16LL) + 176LL)
              + v30
              - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a2 + 16LL) + 184LL);
          if ( (unsigned __int8)apply_tinfo(v31, v26, 0) )
          {
            sub_74A10(v31, 1u, (__int64)"Function-local static variable", 0.0);
            return 1;
          }
        }
      }
      if ( (debug & 0x400000) == 0 )
        return 1;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 16);
      v56[2] = *(_QWORD *)(a1 + 8);
      v15 = *a2;
      v58 = 0;
      v56[1] = v14;
      v55 = 0;
      v56[0] = &off_C8BD0;
      v57 = 0;
      v59 = 0;
      if ( (unsigned __int8)sub_84860(a3) )
      {
        v16 = sub_84880(a3, *(_QWORD *)(*(_QWORD *)v15 + 16LL));
        v17 = sub_848A0(a3, *(_QWORD *)(*(_QWORD *)v15 + 16LL));
      }
      else
      {
        DWORD2(v61) = 0;
        *(_QWORD *)v62 = 0;
        *(_QWORD *)&v61 = off_C8C00;
        *(__m128i *)&v62[8] = _mm_load_si128((const __m128i *)&xmmword_AB150);
        v43 = sub_99180(v15, &v61, 1);
        v16 = 0;
        v17 = 0;
        if ( v43 == 1 )
        {
          v16 = *(_QWORD *)&v62[8];
          v17 = *(_QWORD *)&v62[16];
        }
      }
      v18 = *a2;
      *((_QWORD *)&v58 + 1) = v16;
      v59 = v17;
      if ( (unsigned __int8)sub_89840(v56, &v57, &v55, v18, a3, v16) )
      {
        v19 = *(_QWORD *)(a1 + 32);
        v20 = *(__m128i **)(a1 + 24);
        if ( v19 )
        {
          v21 = (__m128i *)((char *)v20 + 40 * v19);
          if ( v20 == v21 )
            goto LABEL_38;
          while ( v20[1].m128i_i64[0] < *((_QWORD *)&v58 + 1) )
          {
            v20 = (__m128i *)((char *)v20 + 40);
            if ( v20 == v21 )
              goto LABEL_38;
          }
          if ( v20 == v21 )
          {
LABEL_38:
            LODWORD(v61) = 0;
            copy_argloc(&v61, &v57);
            v32 = *(_QWORD *)(a1 + 24);
            si128 = _mm_load_si128((const __m128i *)((char *)&v58 + 8));
            v34 = *(_QWORD *)(a1 + 40);
            *(_DWORD *)&v62[16] = v60;
            *(__m128i *)v62 = si128;
            v53 = &v21->m128i_i8[-v32];
            v35 = *(_QWORD *)(a1 + 32);
            if ( v34 < v35 + 1 )
            {
              v32 = qvector_reserve(a1 + 24, 0, v35 + 1, 40);
              v44 = *(_QWORD *)(a1 + 32);
              v45 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 40) = v34;
              v46 = *(const __m128i **)(a1 + 24);
              v54 = v45;
              v47 = v44 - 1;
              if ( v47 >= 0 )
              {
                v48 = (_DWORD *)v32;
                do
                {
                  *v48 = 0;
                  copy_argloc(v48, v46);
                  v49 = v46[2].m128i_i32[0];
                  v50 = _mm_loadu_si128(v46 + 1);
                  v51 = v46;
                  v48 += 10;
                  v46 = (const __m128i *)((char *)v46 + 40);
                  *(v48 - 2) = v49;
                  *(__m128i *)(v48 - 6) = v50;
                  cleanup_argloc(v51);
                  v41 = v47-- == 0;
                }
                while ( !v41 );
                v46 = *(const __m128i **)(a1 + 24);
              }
              qfree(v46);
              *(_QWORD *)(a1 + 24) = v32;
              *(_QWORD *)(a1 + 40) = v54;
              v21 = (__m128i *)&v53[v32];
              v35 = *(_QWORD *)(a1 + 32);
            }
            v36 = 40 * v35;
            v37 = (const __m128i *)(v36 + v32);
            v38 = (__int64)&v21[2].m128i_i64[1] + v36 - (_QWORD)v53;
            v39 = 0xCCCCCCCCCCCCCCCDLL * ((v36 - (__int64)v53) >> 3) - 1;
            if ( v39 >= 0 )
            {
              do
              {
                *(_DWORD *)(v38 - 40) = 0;
                v38 -= 40;
                v37 = (const __m128i *)((char *)v37 - 40);
                copy_argloc(v38, v37);
                v40 = _mm_loadu_si128(v37 + 1);
                *(_DWORD *)(v38 + 32) = v37[2].m128i_i32[0];
                *(__m128i *)(v38 + 16) = v40;
                cleanup_argloc(v37);
                v41 = v39-- == 0;
              }
              while ( !v41 );
            }
            v21->m128i_i32[0] = 0;
            copy_argloc(v21, &v61);
            v42 = _mm_load_si128((const __m128i *)v62);
            v21[2].m128i_i32[0] = *(_DWORD *)&v62[16];
            v21[1] = v42;
            ++*(_QWORD *)(a1 + 32);
            cleanup_argloc(&v61);
            if ( a4 )
              goto LABEL_24;
            goto LABEL_42;
          }
          if ( *((_QWORD *)&v58 + 1) < v20[1].m128i_i64[1]
            && v20[1].m128i_i64[0] < v59
            && !(unsigned int)compare_arglocs(v20, &v57) )
          {
            v22 = *((_QWORD *)&v58 + 1);
            v23 = v20[1].m128i_u64[0];
            if ( *((_QWORD *)&v58 + 1) < v23 )
            {
              v20[1].m128i_i64[0] = *((_QWORD *)&v58 + 1);
              v23 = v22;
            }
            v24 = v20[1].m128i_u64[1];
            if ( v24 < v22 )
            {
              v20[1].m128i_i64[1] = v22;
              v24 = v22;
            }
            v25 = v59;
            if ( v59 < v23 )
              v20[1].m128i_i64[0] = v59;
            if ( v24 >= v25 )
            {
              if ( a4 )
                goto LABEL_24;
            }
            else
            {
              v20[1].m128i_i64[1] = v25;
              if ( a4 )
              {
LABEL_24:
                cleanup_argloc(&v57);
                return 1;
              }
            }
LABEL_42:
            if ( (v55 & 1) != 0 )
              *(_BYTE *)(a1 + 56) = 1;
            goto LABEL_24;
          }
        }
        v21 = v20;
        goto LABEL_38;
      }
      if ( !a4 && (v55 & 1) != 0 )
        *(_BYTE *)(a1 + 56) = 1;
      cleanup_argloc(&v57);
      if ( (debug & 0x400000) == 0 )
        return 1;
    }
    sub_88B80(
      (unsigned int)"Unhandled param/var locdesc %llu -> %llu. Skipping.\n",
      *(_QWORD *)(a3 + 16),
      *(_QWORD *)(a3 + 24),
      v27,
      v28,
      v29);
    return 1;
  }
  return result;
}
