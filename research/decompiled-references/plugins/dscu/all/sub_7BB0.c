__int64 __fastcall sub_7BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v11[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int64 v15; // [rsp+58h] [rbp-10h]

  v6 = _mm_loadu_si128((const __m128i *)a2);
  v15 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 56);
  v14 = 0;
  v11[0] = v6;
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v12 = v7;
  LODWORD(v7) = *(_DWORD *)(a2 + 64);
  v11[1] = v8;
  v9 = _mm_loadl_epi64((const __m128i *)(a2 + 32));
  v13 = v7;
  v11[2] = _mm_unpacklo_epi32(v9, (__m128i)0LL);
  v11[3] = _mm_loadu_si128((const __m128i *)(a2 + 40));
  sub_7980(a1, v11, a3, a4, a5, a6);
  return 0;
}
