__int64 __fastcall sub_468D0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rax

  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(*(int *)(a1 + 24) + 8LL) )
    return 0;
  v5 = swap64();
  *(_DWORD *)(a1 + 24) += 8;
  if ( a2 )
    *a2 = v5;
  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 56) )
      sub_1FAD0((__int64 *)(a1 + 32));
  }
  return 1;
}

