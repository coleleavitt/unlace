__int64 *__fastcall sub_E0BB0(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = ~a2;
  if ( *(_DWORD *)(v2 + 72) + *(_DWORD *)(v2 + 68) < 0 )
    return sub_E0B40(*(_QWORD *)(a1 + 24), (_DWORD *)(a1 + 144), v3);
  result = *(__int64 **)(v2 + 80);
  *((_DWORD *)result + v3) = *(_DWORD *)(a1 + 144);
  return result;
}
