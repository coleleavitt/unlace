__int64 __fastcall sub_4CAD0(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0;
  else
    return *(_QWORD *)a1 + 56LL * a2;
}
