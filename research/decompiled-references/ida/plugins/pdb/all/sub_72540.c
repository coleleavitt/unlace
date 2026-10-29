__int64 __fastcall sub_72540(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx
  _QWORD *v3; // r11
  unsigned int v5; // esi
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 52);
  v3 = *(_QWORD **)(a1 + 8);
  v8 = __readfsqword(0x28u);
  if ( v2 != -1 )
    return sub_55B00(v3, a2, v2);
  v5 = *(_DWORD *)(a1 + 88);
  if ( v5 > 0xFFF )
  {
    if ( !sub_5F700(v3 + 21, v5) )
      return 1;
  }
  else if ( !v5 )
  {
    return 1;
  }
  if ( !(unsigned __int8)sub_6F820(v3, &v7, v5, 0) )
    return 1;
  return sub_55B00(*(_QWORD **)(a1 + 8), a2, v7);
}

