__int64 __fastcall sub_2F9C0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r14
  __m128i si128; // xmm0
  __int64 v14; // [rsp+18h] [rbp-190h] BYREF
  __int64 v15; // [rsp+20h] [rbp-188h] BYREF
  __int128 v16; // [rsp+28h] [rbp-180h]
  _BYTE v17[20]; // [rsp+40h] [rbp-168h] BYREF
  int v18; // [rsp+54h] [rbp-154h]
  _BYTE v19[264]; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v20; // [rsp+168h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  sub_84A60(v19);
  v9 = sub_98E20(a4, v19);
  if ( (_BYTE)v9 )
  {
    v10 = sub_5A0C0(a3, v19, 2, 4);
    *(__m128i *)(v10 + 392) = _mm_loadu_si128(a5);
    *(_QWORD *)(v10 + 408) = a5[1].m128i_i64[0];
    sub_59E30(v10, 5, 0);
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64 *))(*(_QWORD *)v10 + 16LL))(
           v10,
           &v14,
           a3,
           a6,
           &v15);
    if ( (_BYTE)v9 )
    {
      v18 = 0;
      *(_OWORD *)&v17[4] = 0;
      *(_DWORD *)v17 = 1;
      *(_QWORD *)&v17[8] = v10;
      si128 = _mm_load_si128((const __m128i *)v17);
      a2[1].m128i_i64[0] = 0;
      *a2 = si128;
    }
    else
    {
      sub_56050(a3, v10);
    }
    clear_tinfo_t(&v14);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  sub_1B750((__int64)v19);
  return v9;
}

