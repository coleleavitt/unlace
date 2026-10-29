__int64 __fastcall sub_3373F0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v2 == sub_3373D0 )
    {
      sub_336A40(a2, a2);
      qfree();
    }
    else
    {
      ((void (__fastcall *)(__int64))v2)(a2);
    }
  }
  clr_module_data();
  return sub_66B20((__int64)"Hex-Rays: could not initialize processor subsystem\n");
}

