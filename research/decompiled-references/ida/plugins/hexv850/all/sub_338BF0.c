__int64 __fastcall sub_338BF0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v2 == sub_338BD0 )
    {
      sub_338240(a2, a2);
      qfree();
    }
    else
    {
      ((void (__fastcall *)(__int64))v2)(a2);
    }
  }
  clr_module_data();
  return sub_68620((__int64)"Hex-Rays: could not initialize processor subsystem\n");
}

