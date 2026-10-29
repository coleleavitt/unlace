int sub_5BD70()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4BABE0 = 0;
  qword_4BAC08 = 0;
  qword_4BAC30 = 0;
  xmmword_4BABC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF690),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4BABD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF698),
                               (__m128i)(unsigned __int64)&unk_403A91);
  xmmword_4BABE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6A0),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4BABF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6A8),
                               (__m128i)(unsigned __int64)&unk_403861);
  xmmword_4BAC10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6B0),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4BAC20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6B8),
                               (__m128i)(unsigned __int64)&unk_403A79);
  xmmword_4BAC38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6C0),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4BAC48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6C8),
                               (__m128i)(unsigned __int64)&unk_403846);
  v1 = "atan2";
  qword_4BAC58 = 0;
  xmmword_4BAC60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6D0),
                               (__m128i)(unsigned __int64)"atan");
  qword_4BAC80 = 0;
  qword_4BACA8 = 0;
  xmmword_4BAC70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6D8),
                               (__m128i)(unsigned __int64)&unk_403A5E);
  qword_4BACD0 = 0;
  qword_4BACF8 = 0;
  xmmword_4BAC88 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4BAD20 = 0;
  xmmword_4BAC98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6E8),
                               (__m128i)(unsigned __int64)&unk_403A41);
  xmmword_4BACB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6F0),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4BACC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF6F8),
                               (__m128i)(unsigned __int64)&unk_403829);
  xmmword_4BACD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF700),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4BACE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF708),
                               (__m128i)(unsigned __int64)&unk_403811);
  xmmword_4BAD00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF710),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4BAD10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF718),
                               (__m128i)(unsigned __int64)&unk_403A29);
  xmmword_4BAD28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF720),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4BAD38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF728),
                               (__m128i)(unsigned __int64)&unk_4037F9);
  qword_4BAD48 = 0;
  qword_4BAD70 = 0;
  qword_4BAD98 = 0;
  xmmword_4BAD50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF730),
                               (__m128i)(unsigned __int64)"cos");
  qword_4BADC0 = 0;
  qword_4BADE8 = 0;
  xmmword_4BAD60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF738),
                               (__m128i)(unsigned __int64)&unk_403A11);
  qword_4BAE10 = 0;
  qword_4BAE38 = 0;
  xmmword_4BAD78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF740),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4BAD88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF748),
                               (__m128i)(unsigned __int64)&unk_4039F9);
  xmmword_4BADA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF750),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4BADB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF758),
                               (__m128i)(unsigned __int64)&unk_4037E1);
  xmmword_4BADC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF760),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4BADD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF768),
                               (__m128i)(unsigned __int64)&unk_4037C9);
  xmmword_4BADF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF770),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4BAE00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF778),
                               (__m128i)(unsigned __int64)&unk_4039E1);
  xmmword_4BAE18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF780),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4BAE28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF788),
                               (__m128i)(unsigned __int64)&unk_4037B1);
  xmmword_4BAE40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF790),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4BAE60 = 0;
  qword_4BAE88 = 0;
  xmmword_4BAE50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF798),
                               (__m128i)(unsigned __int64)&unk_4039C9);
  qword_4BAEB0 = 0;
  qword_4BAED8 = 0;
  xmmword_4BAE68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF7A0),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4BAF00 = 0;
  qword_4BAF28 = 0;
  xmmword_4BAE78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF7A8),
                               (__m128i)(unsigned __int64)&unk_403799);
  xmmword_4BAE90 = (__int128)_mm_loadh_ps((const double *)&off_4AF7B8);
  xmmword_4BAEA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF7C0),
                               (__m128i)(unsigned __int64)&unk_4039AE);
  xmmword_4BAEB8 = (__int128)_mm_loadh_ps((const double *)&off_4AF7D0);
  xmmword_4BAEC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF7D8),
                               (__m128i)(unsigned __int64)&unk_40377E);
  xmmword_4BAEE0 = (__int128)_mm_loadh_ps((const double *)&off_4AF7E8);
  xmmword_4BAEF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF7F0),
                               (__m128i)(unsigned __int64)&unk_403990);
  xmmword_4BAF08 = (__int128)_mm_loadh_ps((const double *)&off_4AF800);
  xmmword_4BAF18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF808),
                               (__m128i)(unsigned __int64)&unk_403760);
  qword_4BAF50 = 0;
  qword_4BAF78 = 0;
  xmmword_4BAF30 = (__int128)_mm_loadh_ps((const double *)&off_4AF818);
  qword_4BAFA0 = 0;
  qword_4BAFC8 = 0;
  xmmword_4BAF40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF820),
                               (__m128i)(unsigned __int64)&unk_403928);
  qword_4BAFF0 = 0;
  xmmword_4BAF58 = (__int128)_mm_loadh_ps((const double *)&off_4AF830);
  xmmword_4BAF68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF838),
                               (__m128i)(unsigned __int64)&unk_403941);
  xmmword_4BAF80 = (__int128)_mm_loadh_ps((const double *)&off_4AF848);
  xmmword_4BAF90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF850),
                               (__m128i)(unsigned __int64)&unk_403711);
  xmmword_4BAFA8 = (__int128)_mm_loadh_ps((const double *)&off_4AF860);
  xmmword_4BAFB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF868),
                               (__m128i)(unsigned __int64)&unk_4036F8);
  xmmword_4BAFD0 = (__int128)_mm_loadh_ps((const double *)&off_4AF878);
  xmmword_4BAFE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF880),
                               (__m128i)(unsigned __int64)&unk_4038F1);
  xmmword_4BAFF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF888),
                               (__m128i)(unsigned __int64)"powl");
  qword_4BB018 = 0;
  qword_4BB040 = 0;
  xmmword_4BB008 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF890),
                               (__m128i)(unsigned __int64)&unk_4036C1);
  qword_4BB068 = 0;
  qword_4BB090 = 0;
  xmmword_4BB020 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF898),
                               (__m128i)(unsigned __int64)"sin");
  qword_4BB0B8 = 0;
  qword_4BB0E0 = 0;
  xmmword_4BB030 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8A0),
                               (__m128i)(unsigned __int64)&unk_4038D9);
  xmmword_4BB048 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8A8),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4BB058 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8B0),
                               (__m128i)(unsigned __int64)&unk_4038C1);
  xmmword_4BB070 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8B8),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4BB080 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8C0),
                               (__m128i)(unsigned __int64)&unk_4036A9);
  xmmword_4BB098 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8C8),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4BB0A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8D0),
                               (__m128i)(unsigned __int64)&unk_403691);
  xmmword_4BB0C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8D8),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4BB0D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8E0),
                               (__m128i)(unsigned __int64)&unk_4038A9);
  xmmword_4BB0E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8E8),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4BB0F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8F0),
                               (__m128i)(unsigned __int64)&unk_403679);
  qword_4BB108 = 0;
  qword_4BB1B0 = (__int64)"acos";
  qword_4BB1D8 = (__int64)"acosl";
  xmmword_4BB110 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF8F8),
                               (__m128i)(unsigned __int64)"tan");
  qword_4BB200 = (__int64)"asin";
  qword_4BB130 = 0;
  xmmword_4BB120 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF900),
                               (__m128i)(unsigned __int64)&unk_403891);
  qword_4BB158 = 0;
  qword_4BB180 = 0;
  xmmword_4BB138 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF908),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4BB1A8 = 0;
  qword_4BB1B8 = 0;
  xmmword_4BB148 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF910),
                               (__m128i)(unsigned __int64)&unk_403879);
  qword_4BB1D0 = 0;
  qword_4BB1E0 = 0;
  xmmword_4BB160 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF918),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4BB1F8 = 0;
  qword_4BB208 = 0;
  xmmword_4BB170 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF920),
                               (__m128i)(unsigned __int64)&unk_403661);
  xmmword_4BB188 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF928),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4BB198 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF930),
                               (__m128i)(unsigned __int64)&unk_40364B);
  xmmword_4BB1C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF938),
                               (__m128i)(unsigned __int64)&unk_403AA0);
  xmmword_4BB1E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF940),
                               (__m128i)(unsigned __int64)&unk_403870);
  qword_4BB228 = (__int64)"asinl";
  qword_4BB2A0 = (__int64)"atan2l";
  xmmword_4BB210 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF948),
                               (__m128i)(unsigned __int64)&unk_403A88);
  qword_4BB250 = (__int64)"atan";
  qword_4BB278 = (__int64)"atan2";
  xmmword_4BB238 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF950),
                               (__m128i)(unsigned __int64)&unk_403858);
  qword_4BB2C8 = (__int64)"atanl";
  qword_4BB2F0 = (__int64)"ceil";
  xmmword_4BB260 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF958),
                               (__m128i)(unsigned __int64)&unk_403A70);
  qword_4BB220 = 0;
  qword_4BB230 = 0;
  xmmword_4BB288 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF960),
                               (__m128i)(unsigned __int64)&unk_403A52);
  qword_4BB248 = 0;
  qword_4BB258 = 0;
  xmmword_4BB2B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF968),
                               (__m128i)(unsigned __int64)&unk_40383A);
  qword_4BB270 = 0;
  qword_4BB280 = 0;
  xmmword_4BB2D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF970),
                               (__m128i)(unsigned __int64)&unk_403820);
  qword_4BB298 = 0;
  qword_4BB2A8 = 0;
  xmmword_4BB300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF978),
                               (__m128i)(unsigned __int64)&unk_403A38);
  qword_4BB2C0 = 0;
  qword_4BB2D0 = 0;
  qword_4BB2E8 = 0;
  qword_4BB2F8 = 0;
  qword_4BB310 = 0;
  qword_4BB318 = (__int64)"ceill";
  qword_4BB340 = (__int64)"cos";
  qword_4BB368 = (__int64)"cosh";
  xmmword_4BB328 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF980),
                               (__m128i)(unsigned __int64)&unk_403808);
  qword_4BB390 = (__int64)"coshl";
  qword_4BB3B8 = (__int64)"cosl";
  xmmword_4BB350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF988),
                               (__m128i)(unsigned __int64)&unk_403A20);
  qword_4BB3E0 = (__int64)"exp";
  qword_4BB408 = (__int64)"expl";
  xmmword_4BB378 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF990),
                               (__m128i)(unsigned __int64)&unk_403A08);
  qword_4BB320 = 0;
  qword_4BB338 = 0;
  xmmword_4BB3A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF998),
                               (__m128i)(unsigned __int64)&unk_4037F0);
  qword_4BB348 = 0;
  qword_4BB360 = 0;
  xmmword_4BB3C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9A0),
                               (__m128i)(unsigned __int64)&unk_4037D8);
  qword_4BB370 = 0;
  qword_4BB388 = 0;
  qword_4BB398 = 0;
  qword_4BB3B0 = 0;
  qword_4BB3C0 = 0;
  qword_4BB3D8 = 0;
  qword_4BB3E8 = 0;
  qword_4BB400 = 0;
  qword_4BB410 = 0;
  xmmword_4BB3F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9A8),
                               (__m128i)(unsigned __int64)&unk_4039F0);
  qword_4BB480 = (__int64)"floor";
  qword_4BB430 = (__int64)"fabs";
  xmmword_4BB418 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9B0),
                               (__m128i)(unsigned __int64)&unk_4037C0);
  qword_4BB4A8 = (__int64)"floorl";
  qword_4BB458 = (__int64)"fabsl";
  xmmword_4BB440 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9B8),
                               (__m128i)(unsigned __int64)&unk_4039D8);
  qword_4BB4D0 = (__int64)"fmod";
  qword_4BB428 = 0;
  xmmword_4BB468 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9C0),
                               (__m128i)(unsigned __int64)&unk_4037A8);
  qword_4BB4F8 = (__int64)"fmodl";
  qword_4BB438 = 0;
  xmmword_4BB490 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9C8),
                               (__m128i)(unsigned __int64)&unk_4039C0);
  qword_4BB450 = 0;
  qword_4BB460 = 0;
  xmmword_4BB4B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9D0),
                               (__m128i)(unsigned __int64)&unk_403790);
  qword_4BB478 = 0;
  qword_4BB488 = 0;
  xmmword_4BB4E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9D8),
                               (__m128i)(unsigned __int64)&unk_4039A2);
  qword_4BB4A0 = 0;
  qword_4BB4B0 = 0;
  xmmword_4BB508 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9E0),
                               (__m128i)(unsigned __int64)&unk_403772);
  qword_4BB4C8 = 0;
  qword_4BB4D8 = 0;
  qword_4BB4F0 = 0;
  qword_4BB500 = 0;
  qword_4BB518 = 0;
  qword_4BB520 = (__int64)"frexp";
  qword_4BB528 = 0;
  qword_4BB548 = (__int64)"frexpl";
  xmmword_4BB530 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9E8),
                               (__m128i)(unsigned __int64)&unk_403978);
  qword_4BB570 = (__int64)"ldexp";
  qword_4BB540 = 0;
  xmmword_4BB558 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9F0),
                               (__m128i)(unsigned __int64)&unk_403748);
  qword_4BB598 = (__int64)"ldexpl";
  qword_4BB550 = 0;
  xmmword_4BB580 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AF9F8),
                               (__m128i)(unsigned __int64)&unk_403960);
  qword_4BB5C0 = (__int64)"log";
  qword_4BB568 = 0;
  xmmword_4BB5A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA00),
                               (__m128i)(unsigned __int64)&unk_403730);
  qword_4BB5E8 = (__int64)"log10";
  qword_4BB578 = 0;
  xmmword_4BB5D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA08),
                               (__m128i)(unsigned __int64)&unk_403938);
  qword_4BB610 = (__int64)"log10l";
  qword_4BB590 = 0;
  qword_4BB5A0 = 0;
  qword_4BB5B8 = 0;
  qword_4BB5C8 = 0;
  qword_4BB5E0 = 0;
  qword_4BB5F0 = 0;
  qword_4BB608 = 0;
  qword_4BB618 = 0;
  xmmword_4BB5F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA10),
                               (__m128i)(unsigned __int64)&unk_403950);
  qword_4BB638 = (__int64)"logl";
  qword_4BB700 = (__int64)"sin";
  xmmword_4BB620 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA18),
                               (__m128i)(unsigned __int64)&unk_403720);
  qword_4BB660 = (__int64)"modf";
  qword_4BB6D8 = (__int64)"powl";
  xmmword_4BB648 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA20),
                               (__m128i)(unsigned __int64)&unk_403708);
  qword_4BB688 = (__int64)"modfl";
  qword_4BB630 = 0;
  xmmword_4BB670 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA28),
                               (__m128i)(unsigned __int64)&unk_403910);
  qword_4BB6B0 = (__int64)"pow";
  qword_4BB640 = 0;
  xmmword_4BB698 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA30),
                               (__m128i)(unsigned __int64)&unk_4036E0);
  qword_4BB658 = 0;
  qword_4BB668 = 0;
  xmmword_4BB6C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA38),
                               (__m128i)(unsigned __int64)&unk_403902);
  qword_4BB680 = 0;
  qword_4BB690 = 0;
  xmmword_4BB6E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA40),
                               (__m128i)(unsigned __int64)&unk_4036D2);
  qword_4BB6A8 = 0;
  qword_4BB6B8 = 0;
  xmmword_4BB710 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA48),
                               (__m128i)(unsigned __int64)&unk_4038E8);
  qword_4BB6D0 = 0;
  qword_4BB6E0 = 0;
  qword_4BB6F8 = 0;
  qword_4BB708 = 0;
  qword_4BB720 = 0;
  qword_4BB728 = (__int64)"sinh";
  qword_4BB750 = (__int64)"sinhl";
  xmmword_4BB738 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA50),
                               (__m128i)(unsigned __int64)&unk_4038D0);
  qword_4BB778 = (__int64)"sinl";
  qword_4BB7A0 = (__int64)"sqrt";
  xmmword_4BB760 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA58),
                               (__m128i)(unsigned __int64)&unk_4036B8);
  qword_4BB7C8 = (__int64)"sqrtl";
  qword_4BB7F0 = (__int64)"tan";
  xmmword_4BB788 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA60),
                               (__m128i)(unsigned __int64)&unk_4036A0);
  qword_4BB818 = (__int64)"tanh";
  qword_4BB730 = 0;
  xmmword_4BB7B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA68),
                               (__m128i)(unsigned __int64)&unk_4038B8);
  qword_4BB748 = 0;
  qword_4BB758 = 0;
  xmmword_4BB7D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA70),
                               (__m128i)(unsigned __int64)&unk_403688);
  qword_4BB770 = 0;
  qword_4BB780 = 0;
  qword_4BB798 = 0;
  qword_4BB7A8 = 0;
  qword_4BB7C0 = 0;
  qword_4BB7D0 = 0;
  qword_4BB7E8 = 0;
  qword_4BB7F8 = 0;
  qword_4BB810 = 0;
  qword_4BB820 = 0;
  xmmword_4BB800 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA78),
                               (__m128i)(unsigned __int64)&unk_4038A0);
  qword_4BB838 = 0;
  qword_4BB848 = 0;
  xmmword_4BB828 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA80),
                               (__m128i)(unsigned __int64)&unk_403888);
  qword_4BB860 = 0;
  qword_4BB870 = 0;
  xmmword_4BB850 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA88),
                               (__m128i)(unsigned __int64)&unk_403670);
  qword_4BB888 = 0;
  qword_4BB840 = (__int64)"tanhl";
  xmmword_4BB878 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA90),
                               (__m128i)(unsigned __int64)&unk_403658);
  qword_4BB868 = (__int64)"tanl";
  __cxa_atexit(sub_311260, nullptr, &off_4A8340);
  xmmword_4BAA20 = 0;
  *(_QWORD *)&xmmword_4BAA20 = "__m64";
  qword_4BAA40 = 0;
  qword_4BAA48 = (__int64)"__m128";
  xmmword_4BAA30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFA98),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4BAA70 = (__int64)"__m128d";
  qword_4BAA50 = 0;
  xmmword_4BAA58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAA0),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4BAA98 = (__int64)"__m128i";
  qword_4BAA68 = 0;
  xmmword_4BAA80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAA8),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4BAAC0 = (__int64)"__m256";
  qword_4BAA78 = 0;
  xmmword_4BAAA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAB0),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4BAAE8 = (__int64)"__m256d";
  qword_4BAA90 = 0;
  xmmword_4BAAD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAB8),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4BAB10 = (__int64)"__m256i";
  qword_4BAAA0 = 0;
  qword_4BAAB8 = 0;
  qword_4BAAC8 = 0;
  qword_4BAAE0 = 0;
  qword_4BAAF0 = 0;
  qword_4BAB08 = 0;
  qword_4BAB18 = 0;
  xmmword_4BAAF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAC0),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4BAB38 = (__int64)"__m512";
  qword_4BAB30 = 0;
  xmmword_4BAB20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAC8),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4BAB60 = (__int64)"__m512d";
  qword_4BAB40 = 0;
  xmmword_4BAB48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAD0),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4BAB88 = (__int64)"__m512i";
  qword_4BAB58 = 0;
  xmmword_4BAB70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4AFAD8),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4BAB68 = 0;
  qword_4BAB80 = 0;
  qword_4BAB90 = 0;
  qword_4BABA8 = 0;
  xmmword_4BAB98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4AFAE0),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_311220, nullptr, &off_4A8340);
}

