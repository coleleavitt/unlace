__int64 __fastcall sub_65090(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  int *v4; // rax
  int *i; // rcx
  int v6; // edx
  int v7; // eax

  if ( *(_BYTE *)a2 == 7 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == a1[14] )
    {
      *(_DWORD *)(a2 + 8) = a1[15];
    }
    else if ( v7 >= a1[11] && v7 <= a1[12] )
    {
      *(_DWORD *)(a2 + 8) = a1[13] + v7;
    }
  }
  else if ( *(_BYTE *)a2 == 12 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(int **)(v3 + 24);
    for ( i = &v4[*(_QWORD *)(v3 + 32)]; i != v4; ++v4 )
    {
      v6 = *v4;
      if ( *v4 == a1[14] )
      {
        *v4 = a1[15];
      }
      else if ( v6 >= a1[11] && v6 <= a1[12] )
      {
        *v4 = a1[13] + v6;
      }
    }
  }
  return 0;
}

