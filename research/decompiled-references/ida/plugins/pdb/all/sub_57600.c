__int64 __fastcall sub_57600(__int64 a1)
{
  unsigned int v1; // ebp
  void (*v2)(void); // rax
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __m128i v6; // xmm0
  unsigned __int64 v7; // rax
  double v8; // xmm5_8
  __m128d v9; // xmm1
  __m128d v10; // xmm0
  __int64 v11; // r13
  __int64 v12; // rax
  __m128d v13; // xmm0
  double v14; // xmm0_8
  __m128d v15; // xmm3
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 bkt; // rax
  int v19; // r13d
  int v20; // r15d
  __int64 *v21; // rbx
  __int64 v22; // rsi
  __m128i si128; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // [rsp+0h] [rbp-A8h]
  unsigned __int16 v27; // [rsp+16h] [rbp-92h] BYREF
  void *v28; // [rsp+18h] [rbp-90h] BYREF
  int v29[3]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v30; // [rsp+2Ch] [rbp-7Ch]
  _DWORD v31[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 136);
  v34 = __readfsqword(0x28u);
  if ( (_BYTE)v1 )
  {
    (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 608) + 24LL))(&v28, *(_QWORD *)(a1 + 608), 4);
    if ( v28 )
    {
      if ( (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 24LL))(v28) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *, _DWORD *, __int64))(*(_QWORD *)v28 + 48LL))(v28, v31, 56) )
        {
          if ( v31[0] != 20040203 && v31[0] != 19990903 )
          {
            sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Unsupported IPI stream version %d", v31[0]);
            v1 = 0;
LABEL_5:
            if ( v28 )
            {
              v2 = *(void (**)(void))(*(_QWORD *)v28 + 8LL);
              if ( (char *)v2 == (char *)sub_54910 )
                operator delete(v28, 0x40u);
              else
                v2();
            }
            return v1;
          }
          if ( v31[1] == 56 )
          {
            if ( v32 >= v33
              || (v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 24LL))(v28),
                  (unsigned int)(v7 >> 2) < v33 - v32) )
            {
              if ( (*(_DWORD *)debug & 0x400000) != 0 )
                sub_29350();
              v21 = *(__int64 **)(a1 + 600);
              v22 = *v21;
              if ( (unsigned __int64)v21[2] <= 0x16 )
              {
                v25 = qvector_reserve(v21, v22, 23, 1);
                *v21 = v25;
                v22 = v25;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_94140);
              v21[1] = 23;
              v1 = 0;
              *(__m128i *)v22 = si128;
              *(_QWORD *)(v22 + 14) = 0x6D61657274732049LL;
              *(_BYTE *)(*v21 + 22) = 0;
            }
            else
            {
              v9 = 0;
              v8 = *(float *)(a1 + 256);
              v26 = (__int64 *)(a1 + 224);
              v9.m128d_f64[0] = (double)(int)(v33 - v32) / v8;
              if ( fabs(v9.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v10.m128d_f64[0] = (double)(int)v9.m128d_f64[0];
                *(_QWORD *)&v9.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                v10.m128d_f64[0]
                                              + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v9, v10).m128d_f64[0] & 0x3FF0000000000000LL))
                                            | *(_QWORD *)&v9.m128d_f64[0] & 0x8000000000000000LL;
              }
              v11 = *(_QWORD *)(a1 + 264);
              v12 = *(_QWORD *)(a1 + 248) + 1LL;
              v13 = 0;
              if ( v12 < 0 )
                v14 = (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1))
                    + (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1));
              else
                v14 = (double)(int)v12;
              v13.m128d_f64[0] = v14 / v8;
              if ( fabs(v13.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v15.m128d_f64[0] = (double)(int)v13.m128d_f64[0];
                *(_QWORD *)&v13.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v15.m128d_f64[0]
                                               + COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v13, v15).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | *(_QWORD *)&v13.m128d_f64[0] & 0x8000000000000000LL;
              }
              if ( v9.m128d_f64[0] >= 9.223372036854776e18 )
                v16 = (unsigned int)(int)(v9.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
              else
                v16 = (unsigned int)(int)v9.m128d_f64[0];
              if ( v13.m128d_f64[0] >= 9.223372036854776e18 )
                v17 = (unsigned int)(int)(v13.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
              else
                v17 = (unsigned int)(int)v13.m128d_f64[0];
              if ( v16 >= v17 )
                v17 = v16;
              bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt(
                      (std::__detail::_Prime_rehash_policy *)(a1 + 256),
                      v17);
              if ( bkt == *(_QWORD *)(a1 + 232) )
                *(_QWORD *)(a1 + 264) = v11;
              else
                sub_54940((__int64)v26, bkt);
              v19 = v32;
              if ( v32 < v33 )
              {
                while ( (*(unsigned __int8 (__fastcall **)(void *, unsigned __int16 *, __int64))(*(_QWORD *)v28 + 48LL))(
                          v28,
                          &v27,
                          2) )
                {
                  v20 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v28 + 32LL))(v28);
                  if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v28 + 40LL))(
                          v28,
                          (unsigned int)v27 + v20) )
                    goto LABEL_21;
                  v29[0] = v19;
                  v29[1] = v20;
                  v29[2] = -1;
                  v30 = v27;
                  sub_54D40(v26, v29);
                  if ( ++v19 >= v33 )
                    goto LABEL_5;
                }
                sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Invalid IPI stream, typ=%u\n", v19);
                v1 = 0;
              }
            }
            goto LABEL_5;
          }
          if ( (*(_DWORD *)debug & 0x400000) != 0 )
            sub_29350();
          v4 = *(__int64 **)(a1 + 600);
          v5 = *v4;
          if ( (unsigned __int64)v4[2] <= 0x1D )
          {
            v24 = qvector_reserve(v4, v5, 30, 1);
            *v4 = v24;
            v5 = v24;
          }
          v6 = _mm_load_si128((const __m128i *)&xmmword_94120);
          v4[1] = 30;
          *(__m128i *)v5 = v6;
          *(__m128i *)(v5 + 13) = _mm_load_si128((const __m128i *)&xmmword_94130);
          *(_BYTE *)(*v4 + 29) = 0;
        }
LABEL_21:
        v1 = 0;
        goto LABEL_5;
      }
      if ( (*(_DWORD *)debug & 0x400000) == 0 )
        goto LABEL_5;
    }
    else if ( (*(_DWORD *)debug & 0x400000) == 0 )
    {
      return v1;
    }
    sub_29350();
    goto LABEL_5;
  }
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
    sub_29350();
  return 1;
}

