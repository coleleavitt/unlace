__int64 __fastcall sub_1F9B0(__int64 a1)
{
  *(_DWORD *)(a1 + 296) = 64;
  *(_DWORD *)(a1 + 352) = 64;
  *(_DWORD *)(a1 + 184) = 64;
  *(_DWORD *)(a1 + 240) = 64;
  *(_DWORD *)(a1 + 408) = 64;
  unregister_custom_refinfo(*(unsigned int *)(a1 + 460));
  unregister_custom_refinfo(*(unsigned int *)(a1 + 452));
  unregister_custom_refinfo(*(unsigned int *)(a1 + 456));
  unregister_custom_refinfo(*(unsigned int *)(a1 + 464));
  unregister_custom_fixup(*(unsigned __int16 *)(a1 + 446));
  unregister_custom_fixup(*(unsigned __int16 *)(a1 + 444));
  unregister_custom_fixup(*(unsigned __int16 *)(a1 + 442));
  unregister_custom_fixup(*(unsigned __int16 *)(a1 + 440));
  return unregister_custom_fixup(*(unsigned __int16 *)(a1 + 448));
}
