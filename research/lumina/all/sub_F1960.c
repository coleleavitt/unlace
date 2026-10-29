__int64 __fastcall sub_F1960(__int64 a1, void (*a2)(void), __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  if ( (unsigned __int64)a2 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    a2();
  *a4 = 18;
  sub_F11D0(*a3, "string or blob too big", -1, 1, nullptr, a6);
  return 18;
}
