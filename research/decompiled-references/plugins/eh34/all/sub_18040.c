__int64 (__fastcall *__fastcall sub_18040(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  if ( *(_BYTE *)(a1 + 2840) )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))sub_17F40(
                                                                a1,
                                                                (__int64)"eh34_backbone_hook_t::install_filter() called w"
                                                                         "hile filter is already installed");
  result = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
  if ( result )
    result = (__int64 (__fastcall *)(__int64, __int64, __int64))result(199, a1 + 48, 1);
  *(_BYTE *)(a1 + 2840) = 1;
  return result;
}
