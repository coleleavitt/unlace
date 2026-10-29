__int64 __fastcall sub_3E12B0(__int64 a1, __int64 a2, _DWORD *a3, double a4, double a5, __m128i a6, __m128 a7)
{
  int v8; // r13d

  v8 = *(_DWORD *)(a1 + 56);
  if ( dword_4EEA08 == (*(unsigned int (__fastcall **)(_DWORD *, double, double, double, double))(*(_QWORD *)a3 + 112LL))(
                         a3,
                         a4,
                         a5,
                         *(double *)a6.m128i_i64,
                         *(double *)a7.m128_u64) )
    v8 = a3[3];
  return sub_3DF6E0(a1, a2, a3, v8, a4, a5, a6, a7);
}

