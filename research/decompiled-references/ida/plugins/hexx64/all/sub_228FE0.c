__int64 __fastcall sub_228FE0(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4, double a5)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rdi

  if ( a4 <= 0 )
    return 0xFFFFFFFFLL;
  if ( !a1[1] )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = (_DWORD *)(v8 + *a1);
    if ( (unsigned int)(*v10 - 3) > 1 )
    {
      if ( (unsigned int)sub_1C36B0((__int64)v10, *(_QWORD *)(a2 + 96), a3, a4, v10[22], nullptr, a5, nullptr) )
        break;
    }
    ++v9;
    v8 += 104;
    if ( v9 >= a1[1] )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v9;
}

