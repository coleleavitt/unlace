bool __fastcall sub_3CC070(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a3 + 64);
  if ( !v4 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) > 1 )
    return 0;
  v5 = *(int *)(a4 + 20);
  if ( (int)v5 < 0 )
    return 0;
  v6 = *(_QWORD *)(v4 + 64);
  if ( (int)v5 >= *(_DWORD *)(v6 + 64) )
    return 0;
  if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 64) )
    sub_3C9D80(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v5);
  return v7 && (unsigned int)(*(_DWORD *)(v7 + 76) - 3) <= 2;
}

