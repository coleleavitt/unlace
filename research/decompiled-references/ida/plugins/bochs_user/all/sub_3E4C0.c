__int64 __fastcall sub_3E4C0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, __int64, unsigned __int64, unsigned __int16); // rax

  v3 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int16))(*a1 + 112);
  if ( v3 == sub_3E4B0 )
    return sub_3E3F0(a1[1], a3, 4u);
  else
    return v3((__int64)a1, 0, a3, 4u);
}

