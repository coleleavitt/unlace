__int64 __fastcall sub_224760(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rdi

  if ( a4 <= 0 )
    return 0xFFFFFFFFLL;
  if ( !a1[1] )
    return 0xFFFFFFFFLL;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = (_DWORD *)(v7 + *a1);
    if ( (unsigned int)(*v9 - 3) > 1 )
    {
      if ( (unsigned int)sub_1BF2F0((__int64)v9, *(_QWORD *)(a2 + 96), a3, a4, (unsigned int)v9[22], nullptr, nullptr) )
        break;
    }
    ++v8;
    v7 += 104;
    if ( v8 >= a1[1] )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v8;
}

