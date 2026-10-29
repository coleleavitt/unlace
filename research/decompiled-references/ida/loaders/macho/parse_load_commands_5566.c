__int64 __fastcall sub_27280(
        __int64 a1,
        __m128i *a2,
        __int64 (__fastcall *a3)(),
        __int64 (__fastcall *a4)(),
        __int64 a5,
        int a6)
{
  __m128i *v6; // r8
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  bool v9; // zf
  const __m128i *v10; // rbp
  unsigned int v11; // r14d
  __m128i *v12; // rbx
  __int64 (__fastcall *v13)(); // rax
  int v14; // eax
  __int64 (__fastcall *v16)(); // rax
  int v17; // eax
  unsigned __int64 v18; // [rsp+8h] [rbp-D0h]
  __m128i *v19; // [rsp+18h] [rbp-C0h]
  __m128i *v20; // [rsp+18h] [rbp-C0h]
  __m128i *v21; // [rsp+18h] [rbp-C0h]
  __m128i *v22; // [rsp+18h] [rbp-C0h]
  __m128i *v23; // [rsp+18h] [rbp-C0h]
  __m128i *v24; // [rsp+18h] [rbp-C0h]
  __m128i *v25; // [rsp+18h] [rbp-C0h]
  __m128i *v26; // [rsp+18h] [rbp-C0h]
  __m128i *v27; // [rsp+18h] [rbp-C0h]
  __m128i *v28; // [rsp+18h] [rbp-C0h]
  __m128i *v29; // [rsp+18h] [rbp-C0h]
  __m128i *v30; // [rsp+18h] [rbp-C0h]
  __m128i *v31; // [rsp+18h] [rbp-C0h]
  __m128i *v32; // [rsp+18h] [rbp-C0h]
  __m128i *v33; // [rsp+18h] [rbp-C0h]
  __m128i *v34; // [rsp+18h] [rbp-C0h]
  __m128i *v35; // [rsp+18h] [rbp-C0h]
  __m128i *v36; // [rsp+18h] [rbp-C0h]
  __m128i *v37; // [rsp+18h] [rbp-C0h]
  __m128i *v38; // [rsp+18h] [rbp-C0h]
  __int64 v39; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v40; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+40h] [rbp-98h]
  __m128i v42; // [rsp+50h] [rbp-88h]
  __m128i v43; // [rsp+60h] [rbp-78h]
  __m128i v44; // [rsp+70h] [rbp-68h]
  __m128i v45; // [rsp+80h] [rbp-58h] BYREF
  __int64 v46; // [rsp+90h] [rbp-48h]
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v6 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(a1 + 144);
  v47 = __readfsqword(0x28u);
  v18 = v8;
  while ( v7 < *(_QWORD *)(a1 + 208) )
  {
    while ( 1 )
    {
      v9 = *(_BYTE *)(a1 + 160) == 0;
      v10 = *(const __m128i **)(*(_QWORD *)(a1 + 200) + 8 * v7);
      v39 = v10->m128i_i64[0];
      if ( !v9 )
        sub_10C40(&v39, a2, a3, a4, v6);
      v11 = HIDWORD(v39);
      v12 = (__m128i *)((char *)v10 + HIDWORD(v39));
      if ( v18 < (unsigned __int64)v12 || v10 >= v12 )
      {
        sub_112F0((unsigned int)"Inconsistency in load commands", (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)v6, a6);
        return 0;
      }
      a4 = sub_10990;
      v13 = *(__int64 (__fastcall **)())v6->m128i_i64[0];
      if ( v13 != sub_10990 )
      {
        v19 = v6;
        a2 = (__m128i *)&v39;
        v14 = ((__int64 (__fastcall *)(__m128i *, __int64 *, const __m128i *, __int8 *))v13)(
                v6,
                &v39,
                v10,
                &v10->m128i_i8[HIDWORD(v39)]);
        v6 = v19;
        if ( v14 == 2 )
          goto LABEL_19;
        if ( v14 )
          return 1;
      }
      if ( (unsigned int)v39 > 0x32 )
      {
        switch ( (unsigned int)v39 )
        {
          case 0x80000018:
          case 0x8000001F:
          case 0x80000023:
LABEL_42:
            a2 = &v40;
            if ( v11 <= 0x17 )
            {
              v41.m128i_i64[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i64[0] = v10[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v41.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[0], v41.m128i_u32[1]));
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            }
            v26 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 72))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v26;
            goto LABEL_27;
          case 0x8000001C:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10AE0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 168);
            if ( v16 != sub_10AE0 )
              goto LABEL_25;
            ++v7;
            break;
          case 0x80000022:
LABEL_136:
            a2 = &v40;
            if ( v11 <= 0x2F )
            {
              v40 = 0;
              v41 = 0;
              v42 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41 = _mm_loadu_si128(v10 + 1);
              v42 = _mm_loadu_si128(v10 + 2);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
              v41 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[3]))));
              v42 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v42.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v42.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v42.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v42.m128i_u32[3]))));
            }
            v34 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 200))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v34;
            goto LABEL_27;
          case 0x80000028:
            a2 = &v40;
            if ( v11 <= 0x17 )
            {
              v41.m128i_i64[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i64[0] = v10[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i64[1] = _byteswap_uint64(v40.m128i_u64[1]);
              v41.m128i_i64[0] = _byteswap_uint64(v41.m128i_u64[0]);
            }
            v38 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 240))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v38;
            goto LABEL_27;
          case 0x80000033:
          case 0x80000034:
LABEL_32:
            a2 = &v40;
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            v24 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 176))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v24;
            goto LABEL_27;
          case 0x80000035:
            a2 = &v40;
            if ( v11 <= 0x1F )
            {
              v40 = 0;
              v41 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41 = _mm_loadu_si128(v10 + 1);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v41.m128i_i64[0] = v40.m128i_i64[1];
              v40.m128i_i64[1] = _byteswap_uint64(v40.m128i_u64[1]);
              v41.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[2], v41.m128i_u32[3]));
            }
            v37 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 248))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v37;
            goto LABEL_27;
          default:
            goto LABEL_23;
        }
        goto LABEL_20;
      }
      if ( (_DWORD)v39 )
      {
        switch ( (int)v39 )
        {
          case 1:
            a2 = v12;
            v22 = v6;
            v17 = sub_26BA0(v10, v12, v6, *(unsigned __int8 *)(a1 + 160));
            v6 = v22;
            goto LABEL_27;
          case 2:
            a2 = &v40;
            if ( v11 <= 0x17 )
            {
              v41.m128i_i64[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i64[0] = v10[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v41.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[0], v41.m128i_u32[1]));
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            }
            v29 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 16))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v29;
            goto LABEL_27;
          case 3:
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (__fastcall *)())_byteswap_ulong(v40.m128i_u32[3]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_109C0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 24);
            if ( v16 != sub_109C0 )
              goto LABEL_73;
            ++v7;
            goto LABEL_20;
          case 4:
          case 5:
            if ( v11 <= 7 )
            {
              v40.m128i_i64[0] = 0;
              a2 = &v40;
            }
            else
            {
              a2 = &v40;
              v40.m128i_i64[0] = v10->m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
            v28 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 32))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v28;
            goto LABEL_27;
          case 6:
          case 7:
            a2 = &v40;
            if ( v11 <= 0x13 )
            {
              v41.m128i_i32[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i32[0] = v10[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (__fastcall *)())_byteswap_ulong(v40.m128i_u32[3]);
              v41.m128i_i32[0] = _byteswap_ulong(v41.m128i_u32[0]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_109E0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 40);
            if ( v16 != sub_109E0 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 8:
            if ( v11 <= 7 )
              v40.m128i_i64[0] = 0;
            else
              v40.m128i_i64[0] = v10->m128i_i64[0];
            if ( *(_BYTE *)(a1 + 160) )
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
            a3 = sub_109F0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 48);
            if ( v16 != sub_109F0 )
              goto LABEL_73;
            ++v7;
            goto LABEL_20;
          case 9:
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (__fastcall *)())_byteswap_ulong(v40.m128i_u32[3]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10A00;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 56);
            if ( v16 != sub_10A00 )
              goto LABEL_73;
            ++v7;
            goto LABEL_20;
          case 11:
            a2 = &v40;
            if ( v11 <= 0x4F )
            {
              v40 = 0;
              v41 = 0;
              v42 = 0;
              v43 = 0;
              v44 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41 = _mm_loadu_si128(v10 + 1);
              v42 = _mm_loadu_si128(v10 + 2);
              v43 = _mm_loadu_si128(v10 + 3);
              v44 = _mm_loadu_si128(v10 + 4);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[2], v40.m128i_u32[3]));
              v41.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[0], v41.m128i_u32[1]));
              v41.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[2], v41.m128i_u32[3]));
              v42.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v42.m128i_u32[0], v42.m128i_u32[1]));
              v42.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v42.m128i_u32[2], v42.m128i_u32[3]));
              v43.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v43.m128i_u32[0], v43.m128i_u32[1]));
              v43.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v43.m128i_u32[2], v43.m128i_u32[3]));
              v44.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v44.m128i_u32[0], v44.m128i_u32[1]));
              v44.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v44.m128i_u32[2], v44.m128i_u32[3]));
            }
            v35 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 64))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v35;
            goto LABEL_27;
          case 12:
          case 13:
          case 32:
            goto LABEL_42;
          case 14:
          case 15:
          case 39:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            v27 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 80))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v27;
            goto LABEL_27;
          case 16:
            a2 = &v40;
            if ( v11 <= 0x13 )
            {
              v41.m128i_i32[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i32[0] = v10[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (__fastcall *)())_byteswap_ulong(v40.m128i_u32[3]);
              v41.m128i_i32[0] = _byteswap_ulong(v41.m128i_u32[0]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10A40;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 88);
            if ( v16 != sub_10A40 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 17:
            a2 = &v40;
            if ( v11 <= 0x27 )
            {
              v42.m128i_i64[0] = 0;
              v40 = 0;
              v41 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41 = _mm_loadu_si128(v10 + 1);
              v42.m128i_i64[0] = v10[2].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
              v42.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v42.m128i_u32[0], v42.m128i_u32[1]));
              v41 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v41.m128i_u32[3]))));
            }
            v30 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 96))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v30;
            goto LABEL_27;
          case 18:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10A60;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 104);
            if ( v16 != sub_10A60 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 19:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10A70;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 112);
            if ( v16 != sub_10A70 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 20:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10A80;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 120);
            if ( v16 != sub_10A80 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 21:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10A90;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 128);
            if ( v16 != sub_10A90 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 22:
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (__fastcall *)())_byteswap_ulong(v40.m128i_u32[3]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10AA0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 136);
            if ( v16 == sub_10AA0 )
              goto LABEL_19;
            goto LABEL_73;
          case 23:
            a2 = &v40;
            if ( v11 <= 0xB )
            {
              v40.m128i_i64[0] = 0;
              v40.m128i_i32[2] = 0;
            }
            else
            {
              v40.m128i_i64[0] = v10->m128i_i64[0];
              v40.m128i_i32[2] = v10->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i32[2] = _byteswap_ulong(v40.m128i_u32[2]);
            }
            a3 = sub_10AB0;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 144);
            if ( v16 != sub_10AB0 )
              goto LABEL_25;
            ++v7;
            goto LABEL_20;
          case 25:
            a2 = v12;
            v21 = v6;
            v17 = sub_26EB0(v10, v12, v6, *(unsigned __int8 *)(a1 + 160));
            v6 = v21;
            goto LABEL_27;
          case 26:
            a2 = &v40;
            if ( v11 <= 0x47 )
            {
              v44.m128i_i64[0] = 0;
              v40 = 0;
              v41 = 0;
              v42 = 0;
              v43 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41 = _mm_loadu_si128(v10 + 1);
              v42 = _mm_loadu_si128(v10 + 2);
              v43 = _mm_loadu_si128(v10 + 3);
              v44.m128i_i64[0] = v10[4].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i64[1] = _byteswap_uint64(v40.m128i_u64[1]);
              v41.m128i_i64[0] = _byteswap_uint64(v41.m128i_u64[0]);
              v41.m128i_i64[1] = _byteswap_uint64(v41.m128i_u64[1]);
              v42.m128i_i64[0] = _byteswap_uint64(v42.m128i_u64[0]);
              v42.m128i_i64[1] = _byteswap_uint64(v42.m128i_u64[1]);
              v43.m128i_i64[0] = _byteswap_uint64(v43.m128i_u64[0]);
              v43.m128i_i64[1] = _byteswap_uint64(v43.m128i_u64[1]);
              v44.m128i_i64[0] = _byteswap_uint64(v44.m128i_u64[0]);
            }
            v31 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 152))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v31;
            goto LABEL_27;
          case 27:
            a2 = &v45;
            if ( v11 <= 0x17 )
            {
              v46 = 0;
              v45 = 0;
            }
            else
            {
              v45 = _mm_loadu_si128(v10);
              v46 = v10[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
              v45.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v45.m128i_u32[0], v45.m128i_u32[1]));
            v32 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 160))(
                    v6,
                    &v45,
                    v10,
                    v12);
            v6 = v32;
            goto LABEL_27;
          case 29:
          case 30:
          case 38:
          case 41:
          case 43:
            goto LABEL_32;
          case 33:
            a2 = &v40;
            if ( v11 <= 0x13 )
            {
              v41.m128i_i32[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i32[0] = v10[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v41.m128i_i32[0] = _byteswap_ulong(v41.m128i_u32[0]);
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            }
            v33 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 184))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v33;
            goto LABEL_27;
          case 34:
            goto LABEL_136;
          case 36:
          case 37:
          case 47:
          case 48:
            a2 = &v40;
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            v25 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 208))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v25;
            goto LABEL_27;
          case 42:
            if ( v11 <= 0xF )
              v40 = 0;
            else
              v40 = _mm_loadu_si128(v10);
            if ( *(_BYTE *)(a1 + 160) )
            {
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i64[1] = _byteswap_uint64(v40.m128i_u64[1]);
            }
            a3 = sub_10B60;
            v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 232);
            if ( v16 == sub_10B60 )
              goto LABEL_19;
LABEL_73:
            a2 = &v40;
            goto LABEL_25;
          case 44:
            a2 = &v40;
            if ( v11 <= 0x17 )
            {
              v41.m128i_i64[0] = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v10);
              v41.m128i_i64[0] = v10[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v41.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[0], v41.m128i_u32[1]));
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            }
            v36 = v6;
            v17 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v6->m128i_i64[0] + 192))(
                    v6,
                    &v40,
                    v10,
                    v12);
            v6 = v36;
            goto LABEL_27;
          case 50:
            a2 = v12;
            v23 = v6;
            v17 = sub_1AE00(v10, v12, v6, *(unsigned __int8 *)(a1 + 160));
            v6 = v23;
            goto LABEL_27;
          default:
            break;
        }
      }
LABEL_23:
      a3 = sub_109A0;
      v16 = *(__int64 (__fastcall **)())(v6->m128i_i64[0] + 8);
      if ( v16 != sub_109A0 )
        break;
LABEL_19:
      ++v7;
LABEL_20:
      if ( v7 >= *(_QWORD *)(a1 + 208) )
        return 0;
    }
    a2 = (__m128i *)&v39;
LABEL_25:
    v20 = v6;
    v17 = ((__int64 (__fastcall *)(__m128i *, __m128i *, const __m128i *, __m128i *))v16)(v6, a2, v10, v12);
    v6 = v20;
LABEL_27:
    ++v7;
    if ( v17 )
      return 1;
  }
  return 0;
}
