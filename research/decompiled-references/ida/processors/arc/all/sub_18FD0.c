__int64 __fastcall sub_18FD0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 module_data; // rax
  __int64 v7; // rdx

  module_data = get_module_data((unsigned int)dword_2B9D0);
  v7 = 2;
  if ( (*(_DWORD *)(a5 + 24) & 0x4F) != *(_DWORD *)(module_data + 5280) )
    v7 = 4;
  sub_11D90(a2, (__int64)&unk_1B22E, v7);
  return 4;
}

