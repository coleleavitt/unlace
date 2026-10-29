__int64 __fastcall sub_43800(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        char a4,
        double a5,
        __m128i a6,
        __m128i a7,
        __m128i a8)
{
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __m128i v12; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  if ( a4 == 3 )
  {
    sub_42AC0(a1, a2, (__int64)a3, a5, a6, a7, *(double *)a8.m128i_i64);
  }
  else if ( a4 == 4 )
  {
    sub_3FD40(a1, a2, a3, a5, a6, a7, a8);
  }
  else
  {
    sub_19A90((__int64)&v11, (__int64)"Invalid EH34 type");
    v9 = v11;
    v10 = _mm_loadu_si128(&v12);
    *(_BYTE *)(a1 + 144) = 1;
    *(_QWORD *)a1 = v9;
    *(__m128i *)(a1 + 8) = v10;
  }
  return a1;
}
