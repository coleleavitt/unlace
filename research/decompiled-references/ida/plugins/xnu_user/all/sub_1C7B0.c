__int64 __fastcall sub_1C7B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i si128; // xmm1

  sub_55060(a1, a2, "dbg_xnu", "$ xnu options");
  *(_QWORD *)a1 = off_98FB8;
  sub_2EC90(a1 + 1704, a1, 0);
  *(_QWORD *)(a1 + 1784) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1704) = &off_98270;
  *(_QWORD *)(a1 + 1856) = a1 + 1840;
  *(_QWORD *)(a1 + 1864) = a1 + 1840;
  *(_QWORD *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1872) = 0;
  *(_QWORD *)(a1 + 1904) = 0;
  *(_QWORD *)(a1 + 1960) = 0;
  *(_DWORD *)(a1 + 1992) = 0;
  *(_QWORD *)(a1 + 2000) = 0;
  *(_QWORD *)(a1 + 2008) = a1 + 1992;
  *(_QWORD *)(a1 + 2016) = a1 + 1992;
  *(_QWORD *)(a1 + 2024) = 0;
  *(_QWORD *)(a1 + 2072) = -1;
  *(_QWORD *)(a1 + 2104) = 0;
  *(_OWORD *)(a1 + 1792) = 0;
  *(_OWORD *)(a1 + 1816) = 0;
  *(_OWORD *)(a1 + 1912) = 0;
  *(_OWORD *)(a1 + 1968) = 0;
  *(_OWORD *)(a1 + 2040) = -1;
  *(_OWORD *)(a1 + 2056) = -1;
  *(_OWORD *)(a1 + 2112) = 0;
  result = sub_71CF0(a1, "xnu");
  si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
  *(_QWORD *)(a1 + 1896) = -1;
  *(_OWORD *)(a1 + 1880) = -1;
  *(_OWORD *)(a1 + 1928) = -1;
  *(_OWORD *)(a1 + 2080) = -1;
  *(_QWORD *)(a1 + 2096) = -1;
  *(_QWORD *)(a1 + 2032) = 0;
  *(_WORD *)(a1 + 2144) = 1;
  *(__m128i *)(a1 + 1944) = si128;
  *(_OWORD *)(a1 + 2128) = 0;
  return result;
}

