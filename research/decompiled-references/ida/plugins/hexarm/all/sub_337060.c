unsigned __int64 __fastcall sub_337060(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i si128; // xmm1
  __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128 v11; // xmm1
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = a1 + 232;
  v18 = __readfsqword(0x28u);
  *(_OWORD *)(v3 - 224) = 0;
  *(_QWORD *)(v3 - 232) = 0x347000401LL;
  *(_OWORD *)(v3 - 208) = 0;
  *(_OWORD *)(v3 - 192) = -1;
  *(_QWORD *)(v3 - 176) = -1;
  *(_QWORD *)(v3 - 168) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v3 - 160) = 16;
  *(_OWORD *)(v3 - 152) = 0;
  *(_OWORD *)(v3 - 136) = 0;
  *(_QWORD *)(v3 - 120) = 0;
  *(_DWORD *)(v3 - 112) = 0;
  *(_OWORD *)(v3 - 104) = 0;
  *(_OWORD *)(v3 - 88) = 0;
  *(_QWORD *)(v3 - 72) = -1;
  *(_OWORD *)(v3 - 64) = 0;
  *(_QWORD *)(v3 - 48) = 0;
  *(_OWORD *)(v3 - 40) = 0;
  *(_QWORD *)(v3 - 24) = 0;
  *(_OWORD *)(v3 - 16) = 0;
  *(_QWORD *)v3 = 0;
  *(_OWORD *)(v3 + 8) = 0;
  v4 = qvector_reserve();
  v5 = *(_QWORD *)(a1 + 240);
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 232) = v4;
  *(__m128i *)(v4 + 16 * v5) = si128;
  v7 = a1 + 536;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 480) = -1;
  *(_QWORD *)(a1 + 488) = -1;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 240) = v5 + 1;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 504) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  do
  {
    *(_QWORD *)(v7 + 16) = "<unnamed inteval>";
    v7 += 32;
    *(__m128i *)(v7 - 32) = si128;
    *(_QWORD *)(v7 - 8) = 0;
  }
  while ( a1 + 728 != v7 );
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 976) = a1 + 960;
  *(_QWORD *)(a1 + 984) = a1 + 960;
  *(_QWORD *)(a1 + 1024) = a1 + 1008;
  *(_QWORD *)(a1 + 1032) = a1 + 1008;
  *(_QWORD *)(a1 + 1072) = a1 + 1056;
  *(_QWORD *)(a1 + 1080) = a1 + 1056;
  *(_OWORD *)(a1 + 736) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  *(_OWORD *)(a1 + 856) = 0;
  *(_OWORD *)(a1 + 888) = 0;
  *(_OWORD *)(a1 + 920) = 0;
  *(_OWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 912) = 0;
  *(_DWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1016) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1120) = a1 + 1104;
  *(_QWORD *)(a1 + 1128) = a1 + 1104;
  *(_OWORD *)(a1 + 1168) = 0;
  *(_OWORD *)(a1 + 1200) = 0;
  *(_OWORD *)(a1 + 1224) = 0;
  *(_OWORD *)(a1 + 1240) = 0;
  *(_OWORD *)(a1 + 1264) = 0;
  *(_OWORD *)(a1 + 1288) = 0;
  *(_OWORD *)(a1 + 1328) = 0;
  *(_DWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_DWORD *)(a1 + 1184) = -1;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 1256) = 0;
  *(_QWORD *)(a1 + 1280) = 0;
  *(_DWORD *)(a1 + 1304) = 1;
  *(_QWORD *)(a1 + 1312) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1344) = 0;
  *(_QWORD *)(a1 + 1352) = -1;
  *(_QWORD *)(a1 + 1360) = 0;
  *(_QWORD *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0;
  *(_QWORD *)(a1 + 1392) = 0;
  *(_QWORD *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1408) = 0;
  *(_OWORD *)(a1 + 1416) = 0;
  v8 = _mm_load_si128((const __m128i *)&xmmword_41FA60);
  *(_OWORD *)(a1 + 1456) = 0;
  *(__m128i *)(a1 + 1432) = v8;
  *(_OWORD *)(a1 + 1480) = 0;
  *(_QWORD *)(a1 + 1448) = 0;
  *(_QWORD *)(a1 + 1472) = 0;
  v9 = *(_QWORD *)(a2 + 112);
  *(__m128i *)(a1 + 1496) = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v9);
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v9 + 68)), _mm_cvtsi32_si128(0xFFFF - *(_DWORD *)(v9 + 68)));
  v11 = (__m128)_mm_cmpgt_epi32((__m128i)0LL, v10);
  v17 = _mm_unpacklo_epi32(v10, (__m128i)v11);
  sub_316F70((__int64 *)(a1 + 1160), &v17, *(double *)v17.m128i_i64, v11);
  netnode_check();
  v12 = netnode_exist();
  v13 = -1;
  if ( v12 )
  {
    netnode_altval();
    v13 = node2ea();
  }
  *(_QWORD *)(a1 + 1352) = v13;
  v14 = operator new(0x48u);
  v15 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  *(_QWORD *)v14 = a1;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 64) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 944) = v14;
  *(__m128i *)(v14 + 8) = v15;
  *(__m128i *)(v14 + 24) = v15;
  *(_OWORD *)(v14 + 48) = 0;
  return v18 - __readfsqword(0x28u);
}

