__int64 (__fastcall **__fastcall sub_5E740(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7))()
{
  sub_168790(a1, a4, a5, a6, a7);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 108) = 2;
  *(_QWORD *)a1 = &off_23DB68;
  sub_1687E0(a1, &unk_236C80, 18);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_23D410;
  return &off_23D410;
}
