__m128i *__fastcall sub_3F2A70(__int64 a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm2
  __m128i *v3; // rbx
  bool v4; // zf
  const char *v5; // rax
  __m128i v6; // xmm0

  v1 = operator new(0x328u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_407590);
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
  *(_QWORD *)v1 = off_4CCAE0;
  *(_QWORD *)(v1 + 696) = v1 + 356;
  *(_QWORD *)(v1 + 704) = v1 + 456;
  *(_QWORD *)(v1 + 712) = v1 + 468;
  *(_QWORD *)(v1 + 720) = v1 + 476;
  *(_QWORD *)(v1 + 728) = v1 + 480;
  *(_QWORD *)(v1 + 688) = -1;
  *(_QWORD *)(v1 + 736) = 0;
  *(_BYTE *)(v1 + 744) = 0;
  *(_DWORD *)(v1 + 748) = 0;
  *(_QWORD *)(v1 + 752) = 0;
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
  *(_OWORD *)(v1 + 624) = -1;
  *(_OWORD *)(v1 + 640) = -1;
  *(_OWORD *)(v1 + 656) = -1;
  *(_OWORD *)(v1 + 672) = -1;
  *(_OWORD *)(v1 + 760) = 0;
  *(_QWORD *)(v1 + 776) = off_4CA0C0;
  *(_QWORD *)(v1 + 784) = v1;
  *(_QWORD *)(v1 + 792) = off_4CA0E8;
  *(_QWORD *)(v1 + 800) = v1;
  *(_QWORD *)(v1 + 8) = 808;
  v4 = (unsigned __int8)getinf_flag() == 0;
  v5 = "HEXMIPS";
  v6 = _mm_load_si128((const __m128i *)&xmmword_407570);
  if ( !v4 )
    v5 = "HEXMIPS64";
  v3[1].m128i_i32[0] = 12;
  v3[3].m128i_i32[0] = 237440;
  v3[1].m128i_i64[1] = (__int64)v5;
  v3[2].m128i_i64[0] = (__int64)"sp";
  v3[2].m128i_i64[1] = (__int64)&unk_3FC793;
  v3[5] = v6;
  return v3;
}

