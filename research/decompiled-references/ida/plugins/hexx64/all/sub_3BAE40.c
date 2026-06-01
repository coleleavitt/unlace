__int64 __fastcall sub_3BAE40(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  double v6; // xmm0_8
  int *v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+4h] [rbp-54h] BYREF
  int v11; // [rsp+Ch] [rbp-4Ch]
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[5] = __readfsqword(0x28u);
  if ( a2 )
  {
    sub_38B490(a2, 0);
    *(_QWORD *)&v6 = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 44)), 225).m128i_u64[0];
    *(double *)v12 = v6;
    v7 = sub_38F260((_QWORD *)a2, v12);
    if ( v7 )
    {
      HIDWORD(v10) = 0;
      v11 = 0;
      LODWORD(v10) = v7[1];
      v8 = *v7;
      v11 = 15;
      HIDWORD(v10) = v8;
      sub_390A30((__int64)v12, *(_QWORD *)(a2 + 24) + 8LL, &v10);
      sub_395890((__int64)v12, 1, a2, 0, v6, a4, a5, a6);
    }
  }
  return 1;
}

