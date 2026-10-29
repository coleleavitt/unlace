__int64 __fastcall sub_5900(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  _DWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = a2 & 0xFF000000;
  if ( (a2 & 0xFF000000) == 0x6000000 )
  {
    if ( netnode_supval(*(_QWORD *)(a1 + 144), a2, v4, 28, 97) > 0 )
      return v4[2];
    return -1;
  }
  if ( v2 == 1879048192 )
    return netnode_altval(*(_QWORD *)(a1 + 144), a2, 114);
  if ( v2 != 0x4000000 || netnode_supval(*(_QWORD *)(a1 + 144), a2, v4, 20, 97) <= 0 )
    return -1;
  return v5;
}
