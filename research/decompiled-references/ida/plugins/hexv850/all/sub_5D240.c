int sub_5D240()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4C1DC0 = 0;
  qword_4C1DE8 = 0;
  qword_4C1E10 = 0;
  xmmword_4C1DA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6808),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4C1DB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6810),
                               (__m128i)(unsigned __int64)&unk_409AD1);
  xmmword_4C1DC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6818),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4C1DD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6820),
                               (__m128i)(unsigned __int64)&unk_4098A1);
  xmmword_4C1DF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6828),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4C1E00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6830),
                               (__m128i)(unsigned __int64)&unk_409AB9);
  xmmword_4C1E18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6838),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4C1E28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6840),
                               (__m128i)(unsigned __int64)&unk_409886);
  v1 = "atan2";
  qword_4C1E38 = 0;
  xmmword_4C1E40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6848),
                               (__m128i)(unsigned __int64)"atan");
  qword_4C1E60 = 0;
  qword_4C1E88 = 0;
  xmmword_4C1E50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6850),
                               (__m128i)(unsigned __int64)&unk_409A9E);
  qword_4C1EB0 = 0;
  qword_4C1ED8 = 0;
  xmmword_4C1E68 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4C1F00 = 0;
  xmmword_4C1E78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6860),
                               (__m128i)(unsigned __int64)&unk_409A81);
  xmmword_4C1E90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6868),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4C1EA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6870),
                               (__m128i)(unsigned __int64)&unk_409869);
  xmmword_4C1EB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6878),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4C1EC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6880),
                               (__m128i)(unsigned __int64)&unk_409851);
  xmmword_4C1EE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6888),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4C1EF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6890),
                               (__m128i)(unsigned __int64)&unk_409A69);
  xmmword_4C1F08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6898),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4C1F18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68A0),
                               (__m128i)(unsigned __int64)&unk_409839);
  qword_4C1F28 = 0;
  qword_4C1F50 = 0;
  qword_4C1F78 = 0;
  xmmword_4C1F30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68A8),
                               (__m128i)(unsigned __int64)"cos");
  qword_4C1FA0 = 0;
  qword_4C1FC8 = 0;
  xmmword_4C1F40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68B0),
                               (__m128i)(unsigned __int64)&unk_409A51);
  qword_4C1FF0 = 0;
  qword_4C2018 = 0;
  xmmword_4C1F58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68B8),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4C1F68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68C0),
                               (__m128i)(unsigned __int64)&unk_409A39);
  xmmword_4C1F80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68C8),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4C1F90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68D0),
                               (__m128i)(unsigned __int64)&unk_409821);
  xmmword_4C1FA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68D8),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4C1FB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68E0),
                               (__m128i)(unsigned __int64)&unk_409809);
  xmmword_4C1FD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68E8),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4C1FE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68F0),
                               (__m128i)(unsigned __int64)&unk_409A21);
  xmmword_4C1FF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B68F8),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4C2008 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6900),
                               (__m128i)(unsigned __int64)&unk_4097F1);
  xmmword_4C2020 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6908),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4C2040 = 0;
  qword_4C2068 = 0;
  xmmword_4C2030 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6910),
                               (__m128i)(unsigned __int64)&unk_409A09);
  qword_4C2090 = 0;
  qword_4C20B8 = 0;
  xmmword_4C2048 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6918),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4C20E0 = 0;
  qword_4C2108 = 0;
  xmmword_4C2058 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6920),
                               (__m128i)(unsigned __int64)&unk_4097D9);
  xmmword_4C2070 = (__int128)_mm_loadh_ps((const double *)&off_4B6930);
  xmmword_4C2080 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6938),
                               (__m128i)(unsigned __int64)&unk_4099EE);
  xmmword_4C2098 = (__int128)_mm_loadh_ps((const double *)&off_4B6948);
  xmmword_4C20A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6950),
                               (__m128i)(unsigned __int64)&unk_4097BE);
  xmmword_4C20C0 = (__int128)_mm_loadh_ps((const double *)&off_4B6960);
  xmmword_4C20D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6968),
                               (__m128i)(unsigned __int64)&unk_4099D0);
  xmmword_4C20E8 = (__int128)_mm_loadh_ps((const double *)&off_4B6978);
  xmmword_4C20F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6980),
                               (__m128i)(unsigned __int64)&unk_4097A0);
  qword_4C2130 = 0;
  qword_4C2158 = 0;
  xmmword_4C2110 = (__int128)_mm_loadh_ps((const double *)&off_4B6990);
  qword_4C2180 = 0;
  qword_4C21A8 = 0;
  xmmword_4C2120 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6998),
                               (__m128i)(unsigned __int64)&unk_409968);
  qword_4C21D0 = 0;
  xmmword_4C2138 = (__int128)_mm_loadh_ps((const double *)&off_4B69A8);
  xmmword_4C2148 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B69B0),
                               (__m128i)(unsigned __int64)&unk_409981);
  xmmword_4C2160 = (__int128)_mm_loadh_ps((const double *)&off_4B69C0);
  xmmword_4C2170 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B69C8),
                               (__m128i)(unsigned __int64)&unk_409751);
  xmmword_4C2188 = (__int128)_mm_loadh_ps((const double *)&off_4B69D8);
  xmmword_4C2198 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B69E0),
                               (__m128i)(unsigned __int64)&unk_409738);
  xmmword_4C21B0 = (__int128)_mm_loadh_ps((const double *)&off_4B69F0);
  xmmword_4C21C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B69F8),
                               (__m128i)(unsigned __int64)&unk_409931);
  xmmword_4C21D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A00),
                               (__m128i)(unsigned __int64)"powl");
  qword_4C21F8 = 0;
  qword_4C2220 = 0;
  xmmword_4C21E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A08),
                               (__m128i)(unsigned __int64)&unk_409701);
  qword_4C2248 = 0;
  qword_4C2270 = 0;
  xmmword_4C2200 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A10),
                               (__m128i)(unsigned __int64)"sin");
  qword_4C2298 = 0;
  qword_4C22C0 = 0;
  xmmword_4C2210 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A18),
                               (__m128i)(unsigned __int64)&unk_409919);
  xmmword_4C2228 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A20),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4C2238 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A28),
                               (__m128i)(unsigned __int64)&unk_409901);
  xmmword_4C2250 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A30),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4C2260 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A38),
                               (__m128i)(unsigned __int64)&unk_4096E9);
  xmmword_4C2278 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A40),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4C2288 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A48),
                               (__m128i)(unsigned __int64)&unk_4096D1);
  xmmword_4C22A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A50),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4C22B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A58),
                               (__m128i)(unsigned __int64)&unk_4098E9);
  xmmword_4C22C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A60),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4C22D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A68),
                               (__m128i)(unsigned __int64)&unk_4096B9);
  qword_4C22E8 = 0;
  qword_4C2390 = (__int64)"acos";
  qword_4C23B8 = (__int64)"acosl";
  xmmword_4C22F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A70),
                               (__m128i)(unsigned __int64)"tan");
  qword_4C23E0 = (__int64)"asin";
  qword_4C2310 = 0;
  xmmword_4C2300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A78),
                               (__m128i)(unsigned __int64)&unk_4098D1);
  qword_4C2338 = 0;
  qword_4C2360 = 0;
  xmmword_4C2318 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A80),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4C2388 = 0;
  qword_4C2398 = 0;
  xmmword_4C2328 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A88),
                               (__m128i)(unsigned __int64)&unk_4098B9);
  qword_4C23B0 = 0;
  qword_4C23C0 = 0;
  xmmword_4C2340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A90),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4C23D8 = 0;
  qword_4C23E8 = 0;
  xmmword_4C2350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6A98),
                               (__m128i)(unsigned __int64)&unk_4096A1);
  xmmword_4C2368 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AA0),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4C2378 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AA8),
                               (__m128i)(unsigned __int64)&unk_40968B);
  xmmword_4C23A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AB0),
                               (__m128i)(unsigned __int64)&unk_409AE0);
  xmmword_4C23C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AB8),
                               (__m128i)(unsigned __int64)&unk_4098B0);
  qword_4C2408 = (__int64)"asinl";
  qword_4C2480 = (__int64)"atan2l";
  xmmword_4C23F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AC0),
                               (__m128i)(unsigned __int64)&unk_409AC8);
  qword_4C2430 = (__int64)"atan";
  qword_4C2458 = (__int64)"atan2";
  xmmword_4C2418 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AC8),
                               (__m128i)(unsigned __int64)&unk_409898);
  qword_4C24A8 = (__int64)"atanl";
  qword_4C24D0 = (__int64)"ceil";
  xmmword_4C2440 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AD0),
                               (__m128i)(unsigned __int64)&unk_409AB0);
  qword_4C2400 = 0;
  qword_4C2410 = 0;
  xmmword_4C2468 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AD8),
                               (__m128i)(unsigned __int64)&unk_409A92);
  qword_4C2428 = 0;
  qword_4C2438 = 0;
  xmmword_4C2490 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AE0),
                               (__m128i)(unsigned __int64)&unk_40987A);
  qword_4C2450 = 0;
  qword_4C2460 = 0;
  xmmword_4C24B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AE8),
                               (__m128i)(unsigned __int64)&unk_409860);
  qword_4C2478 = 0;
  qword_4C2488 = 0;
  xmmword_4C24E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AF0),
                               (__m128i)(unsigned __int64)&unk_409A78);
  qword_4C24A0 = 0;
  qword_4C24B0 = 0;
  qword_4C24C8 = 0;
  qword_4C24D8 = 0;
  qword_4C24F0 = 0;
  qword_4C24F8 = (__int64)"ceill";
  qword_4C2520 = (__int64)"cos";
  qword_4C2548 = (__int64)"cosh";
  xmmword_4C2508 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6AF8),
                               (__m128i)(unsigned __int64)&unk_409848);
  qword_4C2570 = (__int64)"coshl";
  qword_4C2598 = (__int64)"cosl";
  xmmword_4C2530 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B00),
                               (__m128i)(unsigned __int64)&unk_409A60);
  qword_4C25C0 = (__int64)"exp";
  qword_4C25E8 = (__int64)"expl";
  xmmword_4C2558 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B08),
                               (__m128i)(unsigned __int64)&unk_409A48);
  qword_4C2500 = 0;
  qword_4C2518 = 0;
  xmmword_4C2580 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B10),
                               (__m128i)(unsigned __int64)&unk_409830);
  qword_4C2528 = 0;
  qword_4C2540 = 0;
  xmmword_4C25A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B18),
                               (__m128i)(unsigned __int64)&unk_409818);
  qword_4C2550 = 0;
  qword_4C2568 = 0;
  qword_4C2578 = 0;
  qword_4C2590 = 0;
  qword_4C25A0 = 0;
  qword_4C25B8 = 0;
  qword_4C25C8 = 0;
  qword_4C25E0 = 0;
  qword_4C25F0 = 0;
  xmmword_4C25D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B20),
                               (__m128i)(unsigned __int64)&unk_409A30);
  qword_4C2660 = (__int64)"floor";
  qword_4C2610 = (__int64)"fabs";
  xmmword_4C25F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B28),
                               (__m128i)(unsigned __int64)&unk_409800);
  qword_4C2688 = (__int64)"floorl";
  qword_4C2638 = (__int64)"fabsl";
  xmmword_4C2620 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B30),
                               (__m128i)(unsigned __int64)&unk_409A18);
  qword_4C26B0 = (__int64)"fmod";
  qword_4C2608 = 0;
  xmmword_4C2648 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B38),
                               (__m128i)(unsigned __int64)&unk_4097E8);
  qword_4C26D8 = (__int64)"fmodl";
  qword_4C2618 = 0;
  xmmword_4C2670 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B40),
                               (__m128i)(unsigned __int64)&unk_409A00);
  qword_4C2630 = 0;
  qword_4C2640 = 0;
  xmmword_4C2698 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B48),
                               (__m128i)(unsigned __int64)&unk_4097D0);
  qword_4C2658 = 0;
  qword_4C2668 = 0;
  xmmword_4C26C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B50),
                               (__m128i)(unsigned __int64)&unk_4099E2);
  qword_4C2680 = 0;
  qword_4C2690 = 0;
  xmmword_4C26E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B58),
                               (__m128i)(unsigned __int64)&unk_4097B2);
  qword_4C26A8 = 0;
  qword_4C26B8 = 0;
  qword_4C26D0 = 0;
  qword_4C26E0 = 0;
  qword_4C26F8 = 0;
  qword_4C2700 = (__int64)"frexp";
  qword_4C2708 = 0;
  qword_4C2728 = (__int64)"frexpl";
  xmmword_4C2710 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B60),
                               (__m128i)(unsigned __int64)&unk_4099B8);
  qword_4C2750 = (__int64)"ldexp";
  qword_4C2720 = 0;
  xmmword_4C2738 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B68),
                               (__m128i)(unsigned __int64)&unk_409788);
  qword_4C2778 = (__int64)"ldexpl";
  qword_4C2730 = 0;
  xmmword_4C2760 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B70),
                               (__m128i)(unsigned __int64)&unk_4099A0);
  qword_4C27A0 = (__int64)"log";
  qword_4C2748 = 0;
  xmmword_4C2788 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B78),
                               (__m128i)(unsigned __int64)&unk_409770);
  qword_4C27C8 = (__int64)"log10";
  qword_4C2758 = 0;
  xmmword_4C27B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B80),
                               (__m128i)(unsigned __int64)&unk_409978);
  qword_4C27F0 = (__int64)"log10l";
  qword_4C2770 = 0;
  qword_4C2780 = 0;
  qword_4C2798 = 0;
  qword_4C27A8 = 0;
  qword_4C27C0 = 0;
  qword_4C27D0 = 0;
  qword_4C27E8 = 0;
  qword_4C27F8 = 0;
  xmmword_4C27D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B88),
                               (__m128i)(unsigned __int64)&unk_409990);
  qword_4C2818 = (__int64)"logl";
  qword_4C28E0 = (__int64)"sin";
  xmmword_4C2800 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B90),
                               (__m128i)(unsigned __int64)&unk_409760);
  qword_4C2840 = (__int64)"modf";
  qword_4C28B8 = (__int64)"powl";
  xmmword_4C2828 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6B98),
                               (__m128i)(unsigned __int64)&unk_409748);
  qword_4C2868 = (__int64)"modfl";
  qword_4C2810 = 0;
  xmmword_4C2850 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BA0),
                               (__m128i)(unsigned __int64)&unk_409950);
  qword_4C2890 = (__int64)"pow";
  qword_4C2820 = 0;
  xmmword_4C2878 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BA8),
                               (__m128i)(unsigned __int64)&unk_409720);
  qword_4C2838 = 0;
  qword_4C2848 = 0;
  xmmword_4C28A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BB0),
                               (__m128i)(unsigned __int64)&unk_409942);
  qword_4C2860 = 0;
  qword_4C2870 = 0;
  xmmword_4C28C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BB8),
                               (__m128i)(unsigned __int64)&unk_409712);
  qword_4C2888 = 0;
  qword_4C2898 = 0;
  xmmword_4C28F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BC0),
                               (__m128i)(unsigned __int64)&unk_409928);
  qword_4C28B0 = 0;
  qword_4C28C0 = 0;
  qword_4C28D8 = 0;
  qword_4C28E8 = 0;
  qword_4C2900 = 0;
  qword_4C2908 = (__int64)"sinh";
  qword_4C2930 = (__int64)"sinhl";
  xmmword_4C2918 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BC8),
                               (__m128i)(unsigned __int64)&unk_409910);
  qword_4C2958 = (__int64)"sinl";
  qword_4C2980 = (__int64)"sqrt";
  xmmword_4C2940 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BD0),
                               (__m128i)(unsigned __int64)&unk_4096F8);
  qword_4C29A8 = (__int64)"sqrtl";
  qword_4C29D0 = (__int64)"tan";
  xmmword_4C2968 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BD8),
                               (__m128i)(unsigned __int64)&unk_4096E0);
  qword_4C29F8 = (__int64)"tanh";
  qword_4C2910 = 0;
  xmmword_4C2990 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BE0),
                               (__m128i)(unsigned __int64)&unk_4098F8);
  qword_4C2928 = 0;
  qword_4C2938 = 0;
  xmmword_4C29B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BE8),
                               (__m128i)(unsigned __int64)&unk_4096C8);
  qword_4C2950 = 0;
  qword_4C2960 = 0;
  qword_4C2978 = 0;
  qword_4C2988 = 0;
  qword_4C29A0 = 0;
  qword_4C29B0 = 0;
  qword_4C29C8 = 0;
  qword_4C29D8 = 0;
  qword_4C29F0 = 0;
  qword_4C2A00 = 0;
  xmmword_4C29E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BF0),
                               (__m128i)(unsigned __int64)&unk_4098E0);
  qword_4C2A18 = 0;
  qword_4C2A28 = 0;
  xmmword_4C2A08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6BF8),
                               (__m128i)(unsigned __int64)&unk_4098C8);
  qword_4C2A40 = 0;
  qword_4C2A50 = 0;
  xmmword_4C2A30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C00),
                               (__m128i)(unsigned __int64)&unk_4096B0);
  qword_4C2A68 = 0;
  qword_4C2A20 = (__int64)"tanhl";
  xmmword_4C2A58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C08),
                               (__m128i)(unsigned __int64)&unk_409698);
  qword_4C2A48 = (__int64)"tanl";
  __cxa_atexit(sub_312D20, nullptr, &off_4AF4E0);
  xmmword_4C1C00 = 0;
  *(_QWORD *)&xmmword_4C1C00 = "__m64";
  qword_4C1C20 = 0;
  qword_4C1C28 = (__int64)"__m128";
  xmmword_4C1C10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C10),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4C1C50 = (__int64)"__m128d";
  qword_4C1C30 = 0;
  xmmword_4C1C38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C18),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4C1C78 = (__int64)"__m128i";
  qword_4C1C48 = 0;
  xmmword_4C1C60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C20),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4C1CA0 = (__int64)"__m256";
  qword_4C1C58 = 0;
  xmmword_4C1C88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C28),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4C1CC8 = (__int64)"__m256d";
  qword_4C1C70 = 0;
  xmmword_4C1CB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C30),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4C1CF0 = (__int64)"__m256i";
  qword_4C1C80 = 0;
  qword_4C1C98 = 0;
  qword_4C1CA8 = 0;
  qword_4C1CC0 = 0;
  qword_4C1CD0 = 0;
  qword_4C1CE8 = 0;
  qword_4C1CF8 = 0;
  xmmword_4C1CD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C38),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4C1D18 = (__int64)"__m512";
  qword_4C1D10 = 0;
  xmmword_4C1D00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C40),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4C1D40 = (__int64)"__m512d";
  qword_4C1D20 = 0;
  xmmword_4C1D28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C48),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4C1D68 = (__int64)"__m512i";
  qword_4C1D38 = 0;
  xmmword_4C1D50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B6C50),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4C1D48 = 0;
  qword_4C1D60 = 0;
  qword_4C1D70 = 0;
  qword_4C1D88 = 0;
  xmmword_4C1D78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4B6C58),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_312CE0, nullptr, &off_4AF4E0);
}

