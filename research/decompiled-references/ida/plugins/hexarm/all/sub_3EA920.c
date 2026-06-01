__int64 __fastcall sub_3EA920(__int64 a1, __int64 *a2)
{
  sub_8F0C0((__int64)a2, 2, "arm_va_adaptor.va_adaptor");
  sub_8FB10(a1, a2);
  sub_8F0C0((__int64)a2, 2, "arm_va_adaptor.ini_fldvals");
  sub_80670((__int64 *)(a1 + 360), a2);
  sub_8F0C0((__int64)a2, 2, "arm_va_adaptor.argoff");
  sub_7F780(a2, *(_QWORD *)(a1 + 392));
  sub_8F0C0((__int64)a2, 2, "arm_va_adaptor.strict");
  return sub_7F130(a2, *(_BYTE *)(a1 + 400));
}

