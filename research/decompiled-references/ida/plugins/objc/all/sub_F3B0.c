__int64 (__fastcall **__fastcall sub_F3B0(__int64 a1))(int, int, int, int, int, int, int, int)
{
  __int64 (__fastcall **result)(int, int, int, int, int, int, int, int); // rax

  result = &off_3C348;
  *(_QWORD *)a1 = &off_3C348;
  if ( *(_DWORD *)(a1 + 752) != -1 )
    return (__int64 (__fastcall **)(int, int, int, int, int, int, int, int))unregister_custom_refinfo();
  return result;
}
