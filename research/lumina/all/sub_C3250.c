__int64 __fastcall sub_C3250(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  __int64 result; // rax

  v4 = (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * (a3 % *(_DWORD *)(a1 + 60)));
  v5 = *v4;
  if ( a2 != *v4 )
  {
    while ( *(_QWORD *)(v5 + 24) != a2 )
      v5 = *(_QWORD *)(v5 + 24);
    v4 = (__int64 *)(v5 + 24);
  }
  *v4 = *(_QWORD *)(a2 + 24);
  v6 = a4 % *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a2 + 16) = a4;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * v6);
  result = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(result + 8LL * v6) = a2;
  if ( *(_DWORD *)(a1 + 44) < a4 )
    *(_DWORD *)(a1 + 44) = a4;
  return result;
}
