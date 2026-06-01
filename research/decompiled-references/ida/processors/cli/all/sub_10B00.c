__int64 __fastcall sub_10B00(
        _QWORD *a1,
        double a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  double v9; // xmm0_8
  double v10; // xmm4_8
  double v11; // xmm5_8

  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*a1 + 368LL))(a1, 9, 0, 0);
  v9 = (*(double (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
  sub_8620(a1, v9, a3, a4);
  return sub_109B0((__int64)a1, v9, a3, a4, a5, v10, v11, a8, a9);
}

