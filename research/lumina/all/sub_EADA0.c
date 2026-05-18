__int64 __fastcall sub_EADA0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-24h]
  _QWORD *v6; // [rsp+4h] [rbp-20h]

  *a4 = 0;
  if ( *(__int64 *)(a1 + 96) <= 0 )
    return 0;
  if ( *(_QWORD *)(a1 + 104)
    || *(int *)(a1 + 76) > 0
    || (v6 = a4, v5 = a3, result = sub_EAC10(a1, -1), a3 = v5, a4 = v6, !(_DWORD)result) )
  {
    if ( *(_QWORD *)(a1 + 80) >= a2 + a3 )
    {
      *a4 = *(_QWORD *)(a1 + 104) + a2;
      ++*(_DWORD *)(a1 + 76);
    }
    return 0;
  }
  return result;
}
