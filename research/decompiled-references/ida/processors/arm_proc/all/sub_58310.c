__int64 __fastcall sub_58310(__int64 *a1)
{
  __int64 module_data; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  module_data = get_module_data();
  v2 = *a1;
  v3 = module_data;
  v4 = a1[2];
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 24) + 4LL) & 1) != 0 )
  {
    if ( v4 <= 0xC )
    {
      v7 = qvector_reserve();
      *a1 = v7;
      v2 = v7;
    }
    a1[1] = 13;
    *(_QWORD *)v2 = 0x3A32316F6C3A2001LL;
    *(_DWORD *)(v2 + 8) = 1931812866;
    result = *a1;
    *(_BYTE *)(*a1 + 12) = 0;
  }
  else
  {
    if ( v4 <= 0xE )
    {
      v6 = qvector_reserve();
      *a1 = v6;
      v2 = v6;
    }
    a1[1] = 15;
    *(_QWORD *)v2 = 0x4741504020017325LL;
    *(_QWORD *)(v2 + 6) = 0x200246464F454741LL;
    result = *a1;
    *(_BYTE *)(*a1 + 14) = 0;
  }
  return result;
}

