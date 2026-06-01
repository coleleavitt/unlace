__int64 __fastcall sub_16450(__int64 a1, const char *a2)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ebp
  __int64 v9; // rbx

  if ( !a2 )
    return -1;
  v2 = *(_DWORD *)(a1 + 1024) - 1;
  if ( v2 < 0 )
  {
LABEL_7:
    v6 = *(_QWORD *)(a1 + 1072);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 1088);
      v8 = 0;
      v9 = 0;
      while ( strcmp(*(const char **)(v7 + 8 * v9), a2) )
      {
        v9 = ++v8;
        if ( v8 >= v6 )
          return -1;
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 1064) + 8 * v9);
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 1040);
    v4 = 8LL * (unsigned int)v2;
    while ( strcmp(*(const char **)(v3 + v4), a2) )
    {
      --v2;
      v4 -= 8;
      if ( v2 == -1 )
        goto LABEL_7;
    }
    return *(_QWORD *)(*(_QWORD *)(a1 + 1016) + v4);
  }
}

