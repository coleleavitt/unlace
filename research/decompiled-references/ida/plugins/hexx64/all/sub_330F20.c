__int64 __fastcall sub_330F20(__int64 a1, int a2)
{
  unsigned int v3; // edx

  if ( *(_DWORD *)(a1 + 312) > a2 )
    return 0;
  *(_DWORD *)(a1 + 312) = a2;
  v3 = sub_33E140(*(_QWORD *)(a1 + 1496), 0x74u, a1, *(unsigned int *)(a1 + 316));
  if ( !v3 )
  {
    if ( a2 >= *(_DWORD *)(a1 + 316) )
      return (unsigned int)-33;
    else
      return 0;
  }
  return v3;
}

