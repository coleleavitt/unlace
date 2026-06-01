__int64 __fastcall sub_1DD80(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 debug_name_ea; // r12
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // r12

  v1 = sub_1DA80((__int64)a1, a1[255], (__int64)"EFI_BOOT_SERVICES");
  if ( !(_BYTE)v1 )
    return v1;
  debug_name_ea = get_debug_name_ea();
  if ( debug_name_ea == -1 )
    sub_1BF10((__int64)a1, (__int64)"Warning: failed to find debug symbol %s\n", "StartImage");
  a1[256] = debug_name_ea;
  v4 = get_debug_name_ea();
  if ( v4 == -1 )
    sub_1BF10((__int64)a1, (__int64)"Warning: failed to find debug symbol %s\n", "UnloadImage");
  a1[257] = v4;
  v5 = get_debug_name_ea();
  if ( v5 == -1 )
    sub_1BF10((__int64)a1, (__int64)"Warning: failed to find debug symbol %s\n", "HandleProtocol");
  a1[258] = v5;
  v6 = get_debug_name_ea();
  if ( v6 == -1 )
    sub_1BF10((__int64)a1, (__int64)"Warning: failed to find debug symbol %s\n", "GetMemoryMap");
  a1[259] = v6;
  return v1;
}

