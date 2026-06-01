__int64 __fastcall sub_82530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const __m128i *a5)
{
  _QWORD *v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm0
  _OWORD v9[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v10; // [rsp+50h] [rbp-40h]
  unsigned __int64 v11; // [rsp+58h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 616);
  if ( v5 )
  {
    v6 = a5[2].m128i_i64[0];
    v9[0] = _mm_loadu_si128(a5);
    v7 = _mm_loadu_si128(a5 + 1);
    v10 = v6;
    v9[1] = v7;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _OWORD *, __int64, __int64))(*v5 + 64LL))(v5, v9, a4, a3) )
    {
      reg_finder_make_rfop();
      v5[9] = -1;
    }
  }
  return 0;
}
