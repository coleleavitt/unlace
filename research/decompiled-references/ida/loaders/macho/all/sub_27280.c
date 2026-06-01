__int64 __fastcall sub_27280(__int64 a1, __m128i *a2, __int64 (*a3)(), __int64 (*a4)())
{
  __m128i *v4; // r8
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rax
  bool v7; // zf
  const __m128i *v8; // rbp
  unsigned int v9; // r14d
  __m128i *v10; // rbx
  __int64 (*v11)(); // rax
  int v12; // eax
  __int64 (*v14)(); // rax
  int v15; // eax
  unsigned __int64 v16; // [rsp+8h] [rbp-D0h]
  __m128i *v17; // [rsp+18h] [rbp-C0h]
  __m128i *v18; // [rsp+18h] [rbp-C0h]
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
  __int64 v37; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v38; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-98h]
  __m128i v40; // [rsp+50h] [rbp-88h]
  __m128i v41; // [rsp+60h] [rbp-78h]
  __m128i v42; // [rsp+70h] [rbp-68h]
  __m128i v43; // [rsp+80h] [rbp-58h] BYREF
  __int64 v44; // [rsp+90h] [rbp-48h]
  unsigned __int64 v45; // [rsp+98h] [rbp-40h]

  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(a1 + 144);
  v45 = __readfsqword(0x28u);
  v16 = v6;
  while ( v5 < *(_QWORD *)(a1 + 208) )
  {
    while ( 1 )
    {
      v7 = *(_BYTE *)(a1 + 160) == 0;
      v8 = *(const __m128i **)(*(_QWORD *)(a1 + 200) + 8 * v5);
      v37 = v8->m128i_i64[0];
      if ( !v7 )
        sub_10C40((unsigned int *)&v37);
      v9 = HIDWORD(v37);
      v10 = (__m128i *)((char *)v8 + HIDWORD(v37));
      if ( v16 < (unsigned __int64)v10 || v8 >= v10 )
      {
        sub_112F0((__int64)"Inconsistency in load commands", a2, a3, a4, v4);
        return 0;
      }
      a4 = sub_10990;
      v11 = *(__int64 (**)())v4->m128i_i64[0];
      if ( v11 != sub_10990 )
      {
        v17 = v4;
        a2 = (__m128i *)&v37;
        v12 = ((__int64 (__fastcall *)(__m128i *, __int64 *, const __m128i *, __int8 *))v11)(
                v4,
                &v37,
                v8,
                &v8->m128i_i8[HIDWORD(v37)]);
        v4 = v17;
        if ( v12 == 2 )
          goto LABEL_19;
        if ( v12 )
          return 1;
      }
      if ( (unsigned int)v37 > 0x32 )
      {
        switch ( (unsigned int)v37 )
        {
          case 0x80000018:
          case 0x8000001F:
          case 0x80000023:
LABEL_42:
            a2 = &v38;
            if ( v9 <= 0x17 )
            {
              v39.m128i_i64[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i64[0] = v8[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v39.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[0], v39.m128i_u32[1]));
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            }
            v24 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 72))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v24;
            goto LABEL_27;
          case 0x8000001C:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10AE0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 168);
            if ( v14 != sub_10AE0 )
              goto LABEL_25;
            ++v5;
            break;
          case 0x80000022:
LABEL_136:
            a2 = &v38;
            if ( v9 <= 0x2F )
            {
              v38 = 0;
              v39 = 0;
              v40 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39 = _mm_loadu_si128(v8 + 1);
              v40 = _mm_loadu_si128(v8 + 2);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
              v39 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[3]))));
              v40 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v40.m128i_u32[3]))));
            }
            v32 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 200))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v32;
            goto LABEL_27;
          case 0x80000028:
            a2 = &v38;
            if ( v9 <= 0x17 )
            {
              v39.m128i_i64[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i64[0] = v8[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i64[1] = _byteswap_uint64(v38.m128i_u64[1]);
              v39.m128i_i64[0] = _byteswap_uint64(v39.m128i_u64[0]);
            }
            v36 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 240))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v36;
            goto LABEL_27;
          case 0x80000033:
          case 0x80000034:
LABEL_32:
            a2 = &v38;
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            v22 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 176))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v22;
            goto LABEL_27;
          case 0x80000035:
            a2 = &v38;
            if ( v9 <= 0x1F )
            {
              v38 = 0;
              v39 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39 = _mm_loadu_si128(v8 + 1);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v39.m128i_i64[0] = v38.m128i_i64[1];
              v38.m128i_i64[1] = _byteswap_uint64(v38.m128i_u64[1]);
              v39.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[2], v39.m128i_u32[3]));
            }
            v35 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 248))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v35;
            goto LABEL_27;
          default:
            goto LABEL_23;
        }
        goto LABEL_20;
      }
      if ( (_DWORD)v37 )
      {
        switch ( (int)v37 )
        {
          case 1:
            a2 = v10;
            v20 = v4;
            v15 = sub_26BA0(v8, (unsigned __int64)v10, (__int64)v4, *(_BYTE *)(a1 + 160));
            v4 = v20;
            goto LABEL_27;
          case 2:
            a2 = &v38;
            if ( v9 <= 0x17 )
            {
              v39.m128i_i64[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i64[0] = v8[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v39.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[0], v39.m128i_u32[1]));
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            }
            v27 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 16))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v27;
            goto LABEL_27;
          case 3:
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (*)())_byteswap_ulong(v38.m128i_u32[3]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_109C0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 24);
            if ( v14 != sub_109C0 )
              goto LABEL_73;
            ++v5;
            goto LABEL_20;
          case 4:
          case 5:
            if ( v9 <= 7 )
            {
              v38.m128i_i64[0] = 0;
              a2 = &v38;
            }
            else
            {
              a2 = &v38;
              v38.m128i_i64[0] = v8->m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
            v26 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 32))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v26;
            goto LABEL_27;
          case 6:
          case 7:
            a2 = &v38;
            if ( v9 <= 0x13 )
            {
              v39.m128i_i32[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i32[0] = v8[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (*)())_byteswap_ulong(v38.m128i_u32[3]);
              v39.m128i_i32[0] = _byteswap_ulong(v39.m128i_u32[0]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_109E0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 40);
            if ( v14 != sub_109E0 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 8:
            if ( v9 <= 7 )
              v38.m128i_i64[0] = 0;
            else
              v38.m128i_i64[0] = v8->m128i_i64[0];
            if ( *(_BYTE *)(a1 + 160) )
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
            a3 = sub_109F0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 48);
            if ( v14 != sub_109F0 )
              goto LABEL_73;
            ++v5;
            goto LABEL_20;
          case 9:
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (*)())_byteswap_ulong(v38.m128i_u32[3]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10A00;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 56);
            if ( v14 != sub_10A00 )
              goto LABEL_73;
            ++v5;
            goto LABEL_20;
          case 11:
            a2 = &v38;
            if ( v9 <= 0x4F )
            {
              v38 = 0;
              v39 = 0;
              v40 = 0;
              v41 = 0;
              v42 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39 = _mm_loadu_si128(v8 + 1);
              v40 = _mm_loadu_si128(v8 + 2);
              v41 = _mm_loadu_si128(v8 + 3);
              v42 = _mm_loadu_si128(v8 + 4);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[2], v38.m128i_u32[3]));
              v39.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[0], v39.m128i_u32[1]));
              v39.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[2], v39.m128i_u32[3]));
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v40.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[2], v40.m128i_u32[3]));
              v41.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[0], v41.m128i_u32[1]));
              v41.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v41.m128i_u32[2], v41.m128i_u32[3]));
              v42.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v42.m128i_u32[0], v42.m128i_u32[1]));
              v42.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v42.m128i_u32[2], v42.m128i_u32[3]));
            }
            v33 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 64))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v33;
            goto LABEL_27;
          case 12:
          case 13:
          case 32:
            goto LABEL_42;
          case 14:
          case 15:
          case 39:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            v25 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 80))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v25;
            goto LABEL_27;
          case 16:
            a2 = &v38;
            if ( v9 <= 0x13 )
            {
              v39.m128i_i32[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i32[0] = v8[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (*)())_byteswap_ulong(v38.m128i_u32[3]);
              v39.m128i_i32[0] = _byteswap_ulong(v39.m128i_u32[0]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10A40;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 88);
            if ( v14 != sub_10A40 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 17:
            a2 = &v38;
            if ( v9 <= 0x27 )
            {
              v40.m128i_i64[0] = 0;
              v38 = 0;
              v39 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39 = _mm_loadu_si128(v8 + 1);
              v40.m128i_i64[0] = v8[2].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
              v39 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v39.m128i_u32[3]))));
            }
            v28 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 96))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v28;
            goto LABEL_27;
          case 18:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10A60;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 104);
            if ( v14 != sub_10A60 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 19:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10A70;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 112);
            if ( v14 != sub_10A70 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 20:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10A80;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 120);
            if ( v14 != sub_10A80 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 21:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10A90;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 128);
            if ( v14 != sub_10A90 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 22:
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
            {
              a4 = (__int64 (*)())_byteswap_ulong(v38.m128i_u32[3]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128((unsigned int)a4)));
            }
            a3 = sub_10AA0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 136);
            if ( v14 == sub_10AA0 )
              goto LABEL_19;
            goto LABEL_73;
          case 23:
            a2 = &v38;
            if ( v9 <= 0xB )
            {
              v38.m128i_i64[0] = 0;
              v38.m128i_i32[2] = 0;
            }
            else
            {
              v38.m128i_i64[0] = v8->m128i_i64[0];
              v38.m128i_i32[2] = v8->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i32[2] = _byteswap_ulong(v38.m128i_u32[2]);
            }
            a3 = sub_10AB0;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 144);
            if ( v14 != sub_10AB0 )
              goto LABEL_25;
            ++v5;
            goto LABEL_20;
          case 25:
            a2 = v10;
            v19 = v4;
            v15 = sub_26EB0(v8, (unsigned __int64)v10, (__int64)v4, *(_BYTE *)(a1 + 160));
            v4 = v19;
            goto LABEL_27;
          case 26:
            a2 = &v38;
            if ( v9 <= 0x47 )
            {
              v42.m128i_i64[0] = 0;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              v41 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39 = _mm_loadu_si128(v8 + 1);
              v40 = _mm_loadu_si128(v8 + 2);
              v41 = _mm_loadu_si128(v8 + 3);
              v42.m128i_i64[0] = v8[4].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i64[1] = _byteswap_uint64(v38.m128i_u64[1]);
              v39.m128i_i64[0] = _byteswap_uint64(v39.m128i_u64[0]);
              v39.m128i_i64[1] = _byteswap_uint64(v39.m128i_u64[1]);
              v40.m128i_i64[0] = _byteswap_uint64(v40.m128i_u64[0]);
              v40.m128i_i64[1] = _byteswap_uint64(v40.m128i_u64[1]);
              v41.m128i_i64[0] = _byteswap_uint64(v41.m128i_u64[0]);
              v41.m128i_i64[1] = _byteswap_uint64(v41.m128i_u64[1]);
              v42.m128i_i64[0] = _byteswap_uint64(v42.m128i_u64[0]);
            }
            v29 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 152))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v29;
            goto LABEL_27;
          case 27:
            a2 = &v43;
            if ( v9 <= 0x17 )
            {
              v44 = 0;
              v43 = 0;
            }
            else
            {
              v43 = _mm_loadu_si128(v8);
              v44 = v8[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
              v43.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v43.m128i_u32[0], v43.m128i_u32[1]));
            v30 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 160))(
                    v4,
                    &v43,
                    v8,
                    v10);
            v4 = v30;
            goto LABEL_27;
          case 29:
          case 30:
          case 38:
          case 41:
          case 43:
            goto LABEL_32;
          case 33:
            a2 = &v38;
            if ( v9 <= 0x13 )
            {
              v39.m128i_i32[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i32[0] = v8[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v39.m128i_i32[0] = _byteswap_ulong(v39.m128i_u32[0]);
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            }
            v31 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 184))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v31;
            goto LABEL_27;
          case 34:
            goto LABEL_136;
          case 36:
          case 37:
          case 47:
          case 48:
            a2 = &v38;
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            v23 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 208))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v23;
            goto LABEL_27;
          case 42:
            if ( v9 <= 0xF )
              v38 = 0;
            else
              v38 = _mm_loadu_si128(v8);
            if ( *(_BYTE *)(a1 + 160) )
            {
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i64[1] = _byteswap_uint64(v38.m128i_u64[1]);
            }
            a3 = sub_10B60;
            v14 = *(__int64 (**)())(v4->m128i_i64[0] + 232);
            if ( v14 == sub_10B60 )
              goto LABEL_19;
LABEL_73:
            a2 = &v38;
            goto LABEL_25;
          case 44:
            a2 = &v38;
            if ( v9 <= 0x17 )
            {
              v39.m128i_i64[0] = 0;
              v38 = 0;
            }
            else
            {
              v38 = _mm_loadu_si128(v8);
              v39.m128i_i64[0] = v8[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v39.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[0], v39.m128i_u32[1]));
              v38 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v38.m128i_u32[3]))));
            }
            v34 = v4;
            v15 = (*(__int64 (__fastcall **)(__m128i *, __m128i *, const __m128i *, __m128i *))(v4->m128i_i64[0] + 192))(
                    v4,
                    &v38,
                    v8,
                    v10);
            v4 = v34;
            goto LABEL_27;
          case 50:
            a2 = v10;
            v21 = v4;
            v15 = sub_1AE00(v8, v10, (__int64)v4, *(_BYTE *)(a1 + 160));
            v4 = v21;
            goto LABEL_27;
          default:
            break;
        }
      }
LABEL_23:
      a3 = sub_109A0;
      v14 = *(__int64 (**)())(v4->m128i_i64[0] + 8);
      if ( v14 != sub_109A0 )
        break;
LABEL_19:
      ++v5;
LABEL_20:
      if ( v5 >= *(_QWORD *)(a1 + 208) )
        return 0;
    }
    a2 = (__m128i *)&v37;
LABEL_25:
    v18 = v4;
    v15 = ((__int64 (__fastcall *)(__m128i *, __m128i *, const __m128i *, __m128i *))v14)(v4, a2, v8, v10);
    v4 = v18;
LABEL_27:
    ++v5;
    if ( v15 )
      return 1;
  }
  return 0;
}

