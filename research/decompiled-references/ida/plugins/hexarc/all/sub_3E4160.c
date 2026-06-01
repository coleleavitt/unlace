__int64 __fastcall sub_3E4160(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0

  result = operator new(0x180u);
  *(_QWORD *)(result + 96) = a1;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 184) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 240) = 0;
  *(_QWORD *)(result + 264) = 0;
  *(_QWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 304) = 0;
  *(_QWORD *)(result + 328) = 0;
  *(_QWORD *)result = off_4B8AF8;
  *(_QWORD *)(result + 352) = 0;
  *(_QWORD *)(result + 360) = off_4B6178;
  *(_QWORD *)(result + 368) = result;
  *(_BYTE *)(result + 376) = 0;
  *(_QWORD *)(result + 8) = 384;
  *(_DWORD *)(result + 16) = 63;
  *(_OWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 168) = 0;
  *(_OWORD *)(result + 208) = 0;
  *(_OWORD *)(result + 248) = 0;
  *(_OWORD *)(result + 288) = 0;
  *(_OWORD *)(result + 312) = 0;
  *(_OWORD *)(result + 336) = 0;
  v2 = _mm_loadl_epi64((const __m128i *)&off_4B63C0);
  *(_QWORD *)(result + 40) = "bp";
  *(__m128i *)(result + 24) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"sp");
  *(__m128i *)(result + 48) = _mm_load_si128((const __m128i *)&xmmword_3FA430);
  *(__m128i *)(result + 64) = _mm_load_si128((const __m128i *)&xmmword_3FA440);
  *(__m128i *)(result + 80) = _mm_load_si128((const __m128i *)&xmmword_3FA450);
  return result;
}

