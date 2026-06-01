unsigned __int64 __fastcall sub_53580(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  _BYTE v5[8]; // [rsp+10h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+18h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+20h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 144);
  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_numbered_type(*(_QWORD *)(v3 + 8), a3, v5, v6, 0, 0, 0) )
    deserialize_tinfo(a1, *(_QWORD *)(*(_QWORD *)(a2 + 144) + 8LL), v5, v6, 0, 0);
  return v7 - __readfsqword(0x28u);
}

