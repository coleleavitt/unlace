__int64 __fastcall sub_207A0(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 == 91 && (*(_DWORD *)(a1 + 16) = v1 - 1, *(_QWORD *)(a1 + 8) = v2 + 1, (unsigned __int8)sub_20720(a1)) )
    return sub_1F8E0(a1, (__int64)"[]", 2);
  else
    return 0;
}

