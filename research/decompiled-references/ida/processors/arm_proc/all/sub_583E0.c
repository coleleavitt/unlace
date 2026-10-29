_QWORD *__fastcall sub_583E0(__int64 *a1)
{
  __int64 module_data; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *result; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  module_data = get_module_data();
  v2 = (_QWORD *)*a1;
  v3 = module_data;
  v4 = a1[2];
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 24) + 4LL) & 1) != 0 )
  {
    if ( v4 <= 0xF )
    {
      v7 = qvector_reserve();
      *a1 = v7;
      v2 = (_QWORD *)v7;
    }
    a1[1] = 16;
    *v2 = 0x69685F67703A2001LL;
    *(_QWORD *)((char *)v2 + 7) = 0x732520023A323169LL;
    result = (_QWORD *)*a1;
    *(_BYTE *)(*a1 + 15) = 0;
  }
  else
  {
    if ( v4 <= 0xB )
    {
      v6 = qvector_reserve();
      *a1 = v6;
      v2 = (_QWORD *)v6;
    }
    a1[1] = 12;
    *v2 = 0x4741504020017325LL;
    *(_DWORD *)((char *)v2 + 7) = 537019719;
    result = (_QWORD *)*a1;
    *(_BYTE *)(*a1 + 11) = 0;
  }
  return result;
}

