__m128i *__fastcall sub_3668D0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __m128i a11,
        __int64 a12,
        __int64 a13)
{
  __m128 v14; // [rsp+0h] [rbp-98h] BYREF
  __m128i v15; // [rsp+10h] [rbp-88h] BYREF
  __m128i v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19[4]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v20[7]; // [rsp+60h] [rbp-38h] BYREF

  v20[5] = __readfsqword(0x28u);
  v20[0] = a2;
  v20[1] = a3;
  v16 = a11;
  v20[2] = a4;
  v19[0] = a6;
  v17 = a12;
  v20[3] = a5;
  v18 = a13;
  v19[1] = a8;
  v19[2] = a9;
  v19[3] = a10;
  sub_366790(&v14, (__int64)v20, v19, &v16);
  *a1 = _mm_load_si128((const __m128i *)&v14);
  a1[1] = _mm_load_si128(&v15);
  return a1;
}

