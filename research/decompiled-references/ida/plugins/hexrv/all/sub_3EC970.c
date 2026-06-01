__m128i *__fastcall sub_3EC970(__int64 a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm2
  __m128i *v3; // rbx
  bool v4; // zf
  const char *v5; // rax
  __m128i v6; // xmm0

  v1 = operator new(0x2D8u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE590);
  v3 = (__m128i *)v1;
  *(_OWORD *)(v1 + 48) = 0;
  *(_OWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 96) = a1;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 144) = 0;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 200) = 0;
  *(_QWORD *)(v1 + 224) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 304) = 0;
  *(_QWORD *)(v1 + 328) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(__m128i *)(v1 + 64) = si128;
  *(_OWORD *)(v1 + 128) = 0;
  *(_OWORD *)(v1 + 168) = 0;
  *(_OWORD *)(v1 + 208) = 0;
  *(_OWORD *)(v1 + 248) = 0;
  *(_OWORD *)(v1 + 288) = 0;
  *(_OWORD *)(v1 + 312) = 0;
  *(_OWORD *)(v1 + 336) = 0;
  *(_QWORD *)v1 = off_4BEAA0;
  *(_QWORD *)(v1 + 632) = v1 + 352;
  *(_QWORD *)(v1 + 640) = v1 + 356;
  *(_QWORD *)(v1 + 648) = v1 + 364;
  *(_QWORD *)(v1 + 656) = v1 + 368;
  *(_QWORD *)(v1 + 664) = v1 + 384;
  *(_QWORD *)(v1 + 672) = v1 + 392;
  *(_DWORD *)(v1 + 624) = -1;
  *(_QWORD *)(v1 + 680) = v1 + 520;
  *(_DWORD *)(v1 + 688) = 0;
  *(_QWORD *)(v1 + 692) = 0;
  *(_QWORD *)(v1 + 704) = 0;
  *(_QWORD *)(v1 + 8) = 728;
  *(_OWORD *)(v1 + 352) = -1;
  *(_OWORD *)(v1 + 368) = -1;
  *(_OWORD *)(v1 + 384) = -1;
  *(_OWORD *)(v1 + 400) = -1;
  *(_OWORD *)(v1 + 416) = -1;
  *(_OWORD *)(v1 + 432) = -1;
  *(_OWORD *)(v1 + 448) = -1;
  *(_OWORD *)(v1 + 464) = -1;
  *(_OWORD *)(v1 + 480) = -1;
  *(_OWORD *)(v1 + 496) = -1;
  *(_OWORD *)(v1 + 512) = -1;
  *(_OWORD *)(v1 + 528) = -1;
  *(_OWORD *)(v1 + 544) = -1;
  *(_OWORD *)(v1 + 560) = -1;
  *(_OWORD *)(v1 + 576) = -1;
  *(_OWORD *)(v1 + 592) = -1;
  *(_OWORD *)(v1 + 608) = -1;
  *(_OWORD *)(v1 + 712) = 0;
  v4 = (unsigned __int8)getinf_flag() == 0;
  v5 = "HEXRV";
  v6 = _mm_load_si128((const __m128i *)&xmmword_3FE5A0);
  if ( !v4 )
    v5 = "HEXRV64";
  v3[1].m128i_i32[0] = 72;
  v3[3].m128i_i32[0] = (int)&loc_31F80;
  v3[1].m128i_i64[1] = (__int64)v5;
  v3[2].m128i_i64[0] = (__int64)"sp";
  v3[2].m128i_i64[1] = (__int64)&unk_3F3793;
  v3[5] = v6;
  return v3;
}

