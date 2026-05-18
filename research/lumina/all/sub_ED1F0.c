__int64 __fastcall sub_ED1F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  int v3; // edx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) >= a2 && a2 )
  {
    v2 = a2 >> 3;
    v3 = 1 << (a2 & 7);
    v4 = *(_QWORD *)(a1 + 16);
    result = (unsigned __int8)(v3 & *(_BYTE *)(v4 + v2));
    if ( ((unsigned __int8)v3 & *(_BYTE *)(v4 + v2)) != 0 )
    {
      sub_ECFF0(a1, "2nd reference to page %d", a2);
      return 1;
    }
    else if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 400LL) )
    {
      return 1;
    }
    else
    {
      *(_BYTE *)(v4 + v2) |= v3;
    }
  }
  else
  {
    sub_ECFF0(a1, "invalid page number %d", a2);
    return 1;
  }
  return result;
}
