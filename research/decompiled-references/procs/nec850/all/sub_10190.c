bool __fastcall sub_10190(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 26);
  v9[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = v2 + v3;
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 != 45 )
    return v5 == 79
        || v5 == 44
        && *(_BYTE *)(a2 + 41) == 1
        && *(_WORD *)(a2 + 46) != 31
        && (unsigned __int8)sub_10040(a1, v9, v3, 31, 0, 1)
        && v9[0] == v4;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v8 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
  if ( v8 != v7 )
  {
    v7 &= v8;
    if ( v8 == -1 )
      v7 = -1;
  }
  return v4 != v7;
}
