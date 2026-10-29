__int64 __fastcall sub_14940(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = -1;
  sub_7FF0(0xBC4u, v6, a2, a3);
  result = v6[0];
  if ( v6[0] != -1 )
  {
    v5 = a3[2] + 16LL * v6[0];
    result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    if ( (*a3 & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
    {
      v5 += *(unsigned __int16 *)(a2 + 26) + *(_QWORD *)(a2 + 8);
      if ( v5 == result )
        return result;
    }
    else if ( v5 == result )
    {
      return result;
    }
    result &= v5;
    if ( v5 == -1 )
      return -1;
  }
  return result;
}

