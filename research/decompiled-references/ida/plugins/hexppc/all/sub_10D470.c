__int64 __fastcall sub_10D470(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rax

  if ( !a1 || *(_DWORD *)(a1 + 76) != 3 || *(_DWORD *)(a1 + 352) != 1 || !*(_QWORD *)(a1 + 48) )
    return (unsigned int)-1;
  v4 = *(_DWORD **)(a1 + 56);
  if ( *v4 == 55 )
  {
    v2 = v4[10];
    if ( a2 == -1 )
      return v2;
    ++a2;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 72) + 1;
  }
  if ( a2 != -1 && a2 != sub_32C980(a1) )
    return (unsigned int)-1;
  return v2;
}

