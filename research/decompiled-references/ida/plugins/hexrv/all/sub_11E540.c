__int64 __fastcall sub_11E540(__int64 a1)
{
  while ( 1 )
  {
    if ( !a1 )
      return 0;
    if ( *(_DWORD *)a1 )
      break;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return a1;
}

