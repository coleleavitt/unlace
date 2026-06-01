__int64 __fastcall sub_3FF10(__int64 a1, int a2)
{
  if ( a2 < 0 || *(_DWORD *)(a1 + 124) <= a2 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL * a2);
}

