__int64 sub_58E70()
{
  __int64 result; // rax
  __m128i v1; // xmm1
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_A2E78), (__m128i)(unsigned __int64)sub_586A0);
  result = operator new(0x1F8u);
  v1 = _mm_loadl_epi64((const __m128i *)off_A2E80);
  *(_QWORD *)(result + 8) = "PAGE";
  *(_QWORD *)(result + 48) = sub_58B10;
  *(_QWORD *)(result + 64) = "HI12";
  *(_QWORD *)(result + 72) = 0x400000002LL;
  *(_QWORD *)(result + 128) = 0x400000002LL;
  *(__m128i *)(result + 32) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)sub_58640);
  v2 = _mm_loadl_epi64((const __m128i *)off_A2E88);
  *(_QWORD *)(result + 96) = sub_584B0;
  *(_QWORD *)(result + 104) = sub_58820;
  *(_QWORD *)(result + 16) = 0x40000000ALL;
  *(_QWORD *)(result + 120) = "PAGEOFF";
  *(_QWORD *)(result + 160) = sub_58BE0;
  *(_QWORD *)(result + 176) = "LO21";
  *(_QWORD *)(result + 184) = 0x40000000ALL;
  *(_QWORD *)(result + 208) = sub_585E0;
  *(_QWORD *)(result + 216) = sub_58A50;
  *(_QWORD *)(result + 232) = "MV16_00";
  *(_QWORD *)(result + 240) = 0x100400000008LL;
  *(_DWORD *)result = 56;
  *(_DWORD *)(result + 24) = 64;
  *(_DWORD *)(result + 56) = 56;
  *(_DWORD *)(result + 80) = 64;
  *(_QWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 112) = 56;
  *(_DWORD *)(result + 136) = 64;
  *(_DWORD *)(result + 168) = 56;
  *(_DWORD *)(result + 192) = 64;
  *(_QWORD *)(result + 200) = 0;
  *(_DWORD *)(result + 224) = 56;
  *(_DWORD *)(result + 248) = 64;
  *(__m128i *)(result + 144) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)sub_58790);
  v3 = _mm_load_si128(&v4);
  *(_QWORD *)(result + 272) = sub_58CB0;
  *(_QWORD *)(result + 328) = sub_58CB0;
  *(_QWORD *)(result + 384) = sub_58CB0;
  *(_QWORD *)(result + 440) = sub_58CB0;
  *(_QWORD *)(result + 288) = "MV16_16";
  *(_QWORD *)(result + 296) = 0x10100400000008LL;
  *(_QWORD *)(result + 344) = "MV16_32";
  *(_QWORD *)(result + 456) = "PREL31";
  *(__m128i *)(result + 256) = v3;
  *(__m128i *)(result + 312) = v3;
  *(__m128i *)(result + 368) = v3;
  *(__m128i *)(result + 424) = v3;
  *(_DWORD *)(result + 280) = 56;
  *(_DWORD *)(result + 304) = 64;
  *(_DWORD *)(result + 336) = 56;
  *(_QWORD *)(result + 352) = 0x20100400000008LL;
  *(_DWORD *)(result + 360) = 64;
  *(_DWORD *)(result + 392) = 56;
  *(_QWORD *)(result + 400) = "MV16_48";
  *(_QWORD *)(result + 408) = 0x30100400000008LL;
  *(_DWORD *)(result + 416) = 64;
  *(_DWORD *)(result + 448) = 56;
  *(_QWORD *)(result + 464) = 0x1F0400000000LL;
  *(_DWORD *)(result + 472) = 2;
  *(_QWORD *)(result + 496) = 0;
  *(_OWORD *)(result + 480) = 0;
  return result;
}
