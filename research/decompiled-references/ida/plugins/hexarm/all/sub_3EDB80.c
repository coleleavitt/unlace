__m128i *__fastcall sub_3EDB80(__int64 a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm2
  __m128i *v3; // rbx
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  bool v6; // zf
  const char *v7; // rax
  __m128i v8; // xmm0

  v1 = operator new(0x2F0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_41FC10);
  v3 = (__m128i *)v1;
  *(_OWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 128) = 0;
  *(_OWORD *)(v1 + 168) = 0;
  *(_OWORD *)(v1 + 208) = 0;
  *(_OWORD *)(v1 + 248) = 0;
  *(_OWORD *)(v1 + 288) = 0;
  *(_OWORD *)(v1 + 312) = 0;
  *(_OWORD *)(v1 + 336) = 0;
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
  *(_OWORD *)(v1 + 48) = 0;
  *(__m128i *)(v1 + 64) = si128;
  *(_OWORD *)(v1 + 80) = 0;
  *(_QWORD *)v1 = off_4E8AE8;
  v4 = _mm_load_si128((const __m128i *)&xmmword_41FC20);
  *(_QWORD *)(v1 + 664) = &off_4E4110;
  *(__m128i *)(v1 + 352) = v4;
  *(_QWORD *)(v1 + 696) = off_4E40E8;
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
  *(_OWORD *)(v1 + 624) = -1;
  *(_OWORD *)(v1 + 640) = -1;
  v5 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  *(_QWORD *)(v1 + 712) = off_4E4060;
  *(_QWORD *)(v1 + 656) = -1;
  *(_QWORD *)(v1 + 672) = 0;
  *(_QWORD *)(v1 + 680) = a1;
  *(_QWORD *)(v1 + 688) = 0;
  *(_QWORD *)(v1 + 704) = v1;
  *(_QWORD *)(v1 + 736) = 0;
  *(_WORD *)(v1 + 744) = 0;
  *(__m128i *)(v1 + 720) = v5;
  *(_QWORD *)(v1 + 8) = 752;
  v6 = (unsigned __int8)getinf_flag() == 0;
  v7 = "HEXARM";
  v8 = _mm_load_si128((const __m128i *)&xmmword_41FC30);
  if ( !v6 )
    v7 = "HEXARM64";
  v3[1].m128i_i32[0] = 13;
  v3[3].m128i_i32[2] = -1;
  v3[1].m128i_i64[1] = (__int64)v7;
  v3[2].m128i_i64[0] = (__int64)"sp";
  v3[2].m128i_i64[1] = (__int64)"bp";
  v3[5] = v8;
  v3[3].m128i_i64[0] = -4294322236LL;
  return v3;
}

