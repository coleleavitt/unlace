__int64 __fastcall sub_D9E00(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx

  v7 = *(int *)(a1 + 4);
  if ( *(_DWORD *)a1 <= (int)v7 )
    return 0;
  v8 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = v7 + 1;
  return sub_D9DB0(*(_QWORD *)(v8 + 8 * v7), 1u, a2, v8, (int)v7 + 1, a6, a7);
}
