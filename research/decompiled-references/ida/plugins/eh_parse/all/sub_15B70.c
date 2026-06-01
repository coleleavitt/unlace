__int64 __fastcall sub_15B70(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v3 = a2 + 40LL * a3;
  if ( *(_BYTE *)(v3 + 41) != 5 )
    return -1;
  v7[0] = -1;
  sub_7FF0(0xBC4u, v7, a2, a2 + 8 * (5LL * a3 + 5));
  v6 = *(_QWORD *)(v3 + 48) + 16LL * v7[0];
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( v6 != v4 )
  {
    v4 &= v6;
    if ( v6 == -1 )
      v4 = -1;
  }
  if ( !(unsigned __int8)is_mapped(v4) )
    return -1;
  return v4;
}

