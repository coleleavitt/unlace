bool __fastcall sub_13D220(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL) >= a3 || *(_BYTE *)a2 != 10 || **(_BYTE **)(a2 + 8) != 6 )
    return 1;
  v4 = getseg();
  return !v4 || *(_BYTE *)(v4 + 184) != 1;
}

