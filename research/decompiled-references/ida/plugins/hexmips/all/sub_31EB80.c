__int64 __fastcall sub_31EB80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v2 > 0x3A )
    return 0;
  v3 = 0x409001800000000LL;
  if ( _bittest64(&v3, v2) )
    return 1;
  if ( (_DWORD)v2 == 57 )
  {
    if ( *(_QWORD *)(a1 + 24) != a2 )
    {
      sub_27FAE0(a1, a2, nullptr);
      return sub_31E340();
    }
  }
  else if ( (unsigned int)(v2 - 22) <= 9 )
  {
    return sub_31E340();
  }
  return 0;
}

