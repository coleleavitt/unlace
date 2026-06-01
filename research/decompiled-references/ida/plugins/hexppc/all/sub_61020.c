__int64 __fastcall sub_61020(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rdx
  int v7; // ebp
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r11
  int i; // ecx

  v3 = 0;
  v4 = a1[1];
  while ( a1[1] >> 6 != v3 )
  {
    ++v3;
    if ( *(_QWORD *)(*a1 + 8 * v3 - 8) )
    {
      v6 = a2 + a3;
      if ( v4 + 1 <= v6 )
        LODWORD(v6) = v4 + 1;
      v7 = v6;
      v8 = sub_60F20(a1, 0);
      if ( v9 >= v8 )
        v8 = v9;
      for ( i = v8; v7 - 1 - i >= 0; ++i )
      {
        if ( i >= 0 && (unsigned int)i < v4 && (*(_QWORD *)(v10 + 8LL * (i >> 6)) & (1LL << i)) != 0 )
          return 1;
      }
      return 0;
    }
  }
  return 0;
}

