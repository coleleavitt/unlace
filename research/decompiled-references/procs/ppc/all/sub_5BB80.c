__int64 __fastcall sub_5BB80(__int64 a1, __int64 *a2, __int64 a3, unsigned int *a4)
{
  __int64 *v4; // rdi
  unsigned int v5; // eax

  v4 = *(__int64 **)(a1 + 336);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( *a4 - 280 > 1 && *a4 > 0x1F )
    return 0;
  v5 = a4[1];
  if ( v5 - 280 > 1 && v5 > 0x1F )
    return 0;
  return sub_5AE90(v4, a2, a3, a4, 10);
}
