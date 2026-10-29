__int64 __fastcall sub_187F0(__int64 a1)
{
  __m128i v2; // xmm0
  __m128i *v3; // rdi
  __int64 result; // rax

  v2 = _mm_loadl_epi64((const __m128i *)off_2D858);
  *(_QWORD *)(a1 + 208) = "HIGHA16";
  v3 = (__m128i *)(a1 + 200);
  v3[1].m128i_i64[0] = 0x200000000LL;
  v3->m128i_i32[0] = 56;
  v3[1].m128i_i32[2] = 64;
  v3[3].m128i_i64[0] = (__int64)sub_18530;
  v3[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)sub_18570);
  *(_WORD *)(a1 + 256) = register_custom_fixup();
  result = (unsigned int)register_custom_refinfo(&unk_2D820) | 0x40;
  *(_DWORD *)(a1 + 260) = result;
  *(_DWORD *)(a1 + 224) = result;
  return result;
}
