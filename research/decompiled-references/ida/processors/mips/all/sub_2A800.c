__int64 __fastcall sub_2A800(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  __int64 result; // rax
  char v6; // al
  __int64 v7; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & a2;
  if ( *(_QWORD *)(a1 + 392) == v2 )
    return *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 392) = v2;
  v3 = *(_DWORD *)(a1 + 344);
  v4 = v2;
  if ( v3 == 1 )
  {
    if ( (unsigned int)getinf(5) != 26 )
    {
      if ( (unsigned __int64)(v2 - 0x80000000LL) > 0x1FFFFFFF )
      {
        if ( (unsigned __int64)(v2 - 2684354560LL) < 0x20000000 )
          v4 = v2 & 0x1FFFFFFF;
      }
      else
      {
        v4 = v2 & 0x7FFFFFFF;
      }
      if ( !(unsigned __int8)is_mapped(v4) )
      {
        v4 = (unsigned __int8)is_mapped(v4 | 0x80000000LL) ? v4 | 0x80000000LL : v4 | 0xA0000000LL;
        if ( !(unsigned __int8)is_mapped(v4) )
          v4 &= 0x1FFFFFFFu;
      }
    }
  }
  else if ( v3 == 2 )
  {
    if ( (unsigned __int64)(v2 - 0x80000000LL) <= 0x1FFFFFFF )
    {
      v4 = v2 & 0x1FFFFFFF;
    }
    else if ( (unsigned __int64)(v2 - 2684354560LL) < 0x20000000 )
    {
      v4 = v2 & 0x1FFFFFFF;
    }
    v6 = is_mapped(v4);
    v7 = v4;
    v4 |= 0x80000000uLL;
    if ( v6 )
      v4 = v7;
  }
  result = use_mapping(v4);
  *(_QWORD *)(a1 + 400) = result;
  return result;
}

