__int64 __fastcall sub_D7110(_QWORD *a1, int *a2, unsigned int a3)
{
  unsigned int v4; // r14d
  int v5; // ebx
  __int64 v6; // rax

  if ( *a2 <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = *a1 + 56LL * v5;
      if ( *(_DWORD *)(v6 + 24) >= a3 )
        break;
      if ( ++v5 >= *a2 )
        return v4;
    }
    ++v5;
    v4 |= sub_D6EC0(*(_DWORD **)(v6 + 16), a3);
  }
  while ( v5 < *a2 );
  return v4;
}
