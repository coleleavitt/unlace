__int64 __fastcall sub_155720(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  int v7; // ecx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_11BB80((char *)a1, v8, 0) )
  {
    v6 = v8[0];
  }
  else
  {
    if ( *(_BYTE *)a1 != 10 )
      return 0;
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)v5 != 6 )
      return 0;
    v6 = *(_QWORD *)(v5 + 8);
    v7 = 8 * *(_DWORD *)(a1 + 4);
    if ( (unsigned __int64)v7 <= 0x3F )
      v6 &= ~(-1LL << v7);
    v8[0] = v6;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) < v6 )
    return 0;
  *a3 = v6;
  return 1;
}

