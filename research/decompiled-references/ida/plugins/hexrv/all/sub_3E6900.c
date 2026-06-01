__int64 __fastcall sub_3E6900(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  int v10; // eax

  v8 = sub_3348D0(a1, a2, a3, *(_QWORD *)(a4 + 24), a5, (char *)a6);
  if ( !v8 )
    return 0;
  if ( v8 == 1 )
    return 1;
  if ( *(_BYTE *)a6 != 1 )
    return 0;
  v10 = **(_DWORD **)(a1 + 648);
  if ( *(_DWORD *)(a6 + 8) != v10 )
    return 0;
  if ( *(_BYTE *)(a4 + 64) != 1 || v10 != *(_DWORD *)(a4 + 72) )
  {
    sub_CBAB0();
    return 0;
  }
  return 0;
}

