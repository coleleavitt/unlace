unsigned __int64 __fastcall sub_333D40(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned int i; // r14d
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  result = sub_605E0((_QWORD *)(a1 + 224), 0);
  for ( i = result; i != *(_DWORD *)(a1 + 232); i = result )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, i);
    if ( v6 > 0 )
    {
      v7 = a2[1];
      v8 = *a2;
      if ( a2[2] < (unsigned __int64)(v7 + 1) )
      {
        v9 = qvector_reserve();
        *a2 = v9;
        v8 = v9;
        v7 = a2[1];
      }
      *(_DWORD *)(v8 + 4 * v7) = i;
      ++a2[1];
    }
    v5 = 1;
    if ( v6 > 0 )
      v5 = v6;
    result = sub_605E0((_QWORD *)(a1 + 224), i + v5);
  }
  return result;
}

