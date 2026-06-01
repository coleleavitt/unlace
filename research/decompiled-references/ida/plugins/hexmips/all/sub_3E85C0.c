__int64 __fastcall sub_3E85C0(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(a1 + 760);
  if ( !v2 )
    sub_3E5460(a2);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 752) + 4 * v2 - 4);
  *(_QWORD *)(a1 + 760) = v2 - 1;
  return v3;
}

