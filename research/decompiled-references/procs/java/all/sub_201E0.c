__int64 __fastcall sub_201E0(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx
  int v4; // ebp
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  _WORD *v10; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 != 60 )
    return 0;
  v4 = 0;
  *(_DWORD *)(a1 + 16) = v1 - 1;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  sub_1F840(a1);
LABEL_4:
  v5 = sub_20130(a1);
  if ( !(_BYTE)v5 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( v6 )
      break;
    ++v4;
LABEL_7:
    if ( !v4 )
      goto LABEL_4;
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 <= 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 24) = v7;
      if ( !v7 )
        return 0;
      ++*(_DWORD *)(a1 + 20);
    }
    v8 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v7 - 2;
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, ", ", 0);
    v5 = sub_20130(a1);
    if ( !(_BYTE)v5 )
      return 0;
  }
  v10 = *(_WORD **)(a1 + 8);
  ++v4;
  if ( *v10 != 62 )
    goto LABEL_7;
  *(_DWORD *)(a1 + 16) = v6 - 1;
  *(_QWORD *)(a1 + 8) = v10 + 1;
  sub_1F840(a1);
  return v5;
}
