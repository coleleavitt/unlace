__int64 __fastcall sub_128ED0(__int64 a1, int a2, int **a3, __int64 a4, int a5, int a6, double a7)
{
  __int64 v9; // r14
  unsigned int v10; // ebx

  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v10;
  if ( *a3 )
    sub_128C80(a1, *(int **)(a4 + 32), **a3, 0, *((_BYTE *)*a3 + 4), a7);
  sub_E1710(v9, 97, a5 + a2, a6 - a2, v10);
  return v10;
}
