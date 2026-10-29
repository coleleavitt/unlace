__int64 __fastcall sub_150AC0(int a1, __int64 a2)
{
  int *v3; // rbx
  unsigned int v4; // eax
  int v5; // eax

  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(int **)(a2 + 8);
  v4 = *v3;
  if ( *v3 == 9 )
  {
    if ( *((_BYTE *)v3 + 32) != 4 )
      return 0;
    v3 = *((int **)v3 + 5);
    v4 = *v3;
  }
  if ( v4 == 29 )
  {
    *v3 = 39;
    sub_11C550((__int64)(v3 + 12), a1, 0, v3[9], *((_QWORD *)v3 + 3), 0);
    return 1;
  }
  v5 = sub_329720(v4);
  if ( v5 )
  {
    *v3 = v5;
    return 1;
  }
  return 0;
}

