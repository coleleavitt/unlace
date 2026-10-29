__int64 __fastcall sub_3EF4A0(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  __int64 v5; // r13
  __int64 v6; // r13
  unsigned int v7; // r14d
  int dtype_size; // eax
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  int v11; // [rsp+8h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 832);
  v12 = __readfsqword(0x28u);
  v10 = 0x800000001LL;
  v11 = *(_DWORD *)(v5 + 464);
  sub_1D6450(a1, 60, nullptr, nullptr, (unsigned __int8 *)&v10, a3, a4, a5);
  v6 = *(int *)(v5 + 464);
  v7 = *(_DWORD *)(a2 + 8);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, v7, dtype_size, 8, v6, 8, *(double *)a3.m128i_i64, 0);
  sub_11CDA0((__int64)&v10);
  return 0;
}

