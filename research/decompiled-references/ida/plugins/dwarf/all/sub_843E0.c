__int64 __fastcall sub_843E0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 112);
  if ( (int)v2 <= 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 104);
  v4 = v3 + 8LL * (unsigned int)(v2 - 1) + 8;
  while ( *(_DWORD *)(*(_QWORD *)v3 + 192LL) != a2 )
  {
    v3 += 8;
    if ( v3 == v4 )
      return 0;
  }
  return *(_QWORD *)v3;
}

