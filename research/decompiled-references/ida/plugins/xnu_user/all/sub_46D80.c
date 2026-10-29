__int64 __fastcall sub_46D80(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 i; // rdx

  v2 = *(_QWORD *)(a1 + 1384);
  v3 = *(_QWORD *)(a1 + 1376);
  *(_BYTE *)(a1 + 1697) = 0;
  for ( i = v3 + 112 * v2; v3 != i; v3 += 112 )
  {
    if ( *(_DWORD *)(v3 + 24) != a2 )
      --*(_DWORD *)(v3 + 36);
  }
  return 1;
}

