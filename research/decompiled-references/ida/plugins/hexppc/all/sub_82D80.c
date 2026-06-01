__int64 __fastcall sub_82D80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  int v3; // ebp
  int v4; // r14d
  _QWORD *v5; // rax
  _QWORD *v6; // rdx

  v2 = (unsigned int)unpack_dd();
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) - **(_QWORD **)a1 < v2 )
    return 0;
  v3 = v2;
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)qalloc_or_throw();
      v5[2] = -1;
      v5[3] = -4294967226LL;
      v5[4] = 0xFFFFFFFFLL;
      v5[5] = 0;
      *v5 = a2;
      v6 = *(_QWORD **)(a2 + 8);
      v5[1] = v6;
      *v6 = v5;
      ++*(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = v5;
      if ( !(unsigned __int8)sub_817D0(a1, (__int64)(v5 + 2)) )
        break;
      if ( ++v4 == v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}

