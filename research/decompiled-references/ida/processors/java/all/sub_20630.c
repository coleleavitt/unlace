__int64 __fastcall sub_20630(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx
  int v4; // ebp
  int v5; // eax
  __int64 v6; // rdi
  _WORD *v7; // rdx
  __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 != 40 )
    return 0;
  v4 = 0;
  *(_DWORD *)(a1 + 16) = v1 - 1;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  sub_1F840(a1);
  v5 = *(_DWORD *)(a1 + 16);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v7 = *(_WORD **)(a1 + 8);
    if ( *v7 == 41 )
      break;
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 <= 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
        *(_QWORD *)(a1 + 24) = v8;
        if ( !v8 )
          return 0;
        ++*(_DWORD *)(a1 + 20);
      }
      v6 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = v8 - 2;
      (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, ", ", 0);
    }
    if ( (unsigned __int8)sub_20500(a1) )
    {
      v5 = *(_DWORD *)(a1 + 16);
      ++v4;
      if ( v5 )
        continue;
    }
    return 0;
  }
  *(_DWORD *)(a1 + 16) = v5 - 1;
  *(_QWORD *)(a1 + 8) = v7 + 1;
  sub_1F840(a1);
  return 1;
}

