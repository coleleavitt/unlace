_DWORD *__fastcall sub_30D5C0(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, double a5, __m128 a6)
{
  int *v8; // rcx

  if ( *a4 != 5 )
    return sub_30D1C0((__int64)a4);
  v8 = (int *)sub_129440(a2, (__int64)(a4 + 8), (__int64)a3, 0, a5, a6);
  if ( v8 )
    return sub_30D340(a1, a2, a3, v8, a5, a6);
  else
    return nullptr;
}

