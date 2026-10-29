__int64 __fastcall sub_4133F0(unsigned __int64 *a1, __int64 a2, __int64 a3, int a4, int a5, char a6, __m128i a7)
{
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v9 = *(_QWORD *)(a3 + 72);
  v10 = *(_QWORD *)(v9 + 32);
  if ( a5 >= v10 )
    return (unsigned int)-1;
  v11 = *(_QWORD *)(v9 + 24);
  v13 = a5 + 1;
  v14 = v11 + 80LL * a5;
  v15 = *(unsigned int *)(v14 + 4);
  if ( (int)v15 < a4 )
  {
    if ( (_DWORD)v15 == a4 / 2 )
    {
      v16 = (int)v13;
      if ( (int)v13 < v10 )
      {
        v13 = a5 + 2;
        v17 = v11 + 80 * v16;
        if ( (_DWORD)v15 == *(_DWORD *)(v17 + 4) )
        {
          if ( a6 )
          {
            v14 = v11 + 80 * v16;
            v17 = v11 + 80LL * a5;
          }
          sub_11CDA0(a2);
          *(_DWORD *)(a2 + 4) = a4;
          v20 = j__qalloc_or_throw(32, v15, v18, v19);
          *(_QWORD *)v20 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v20 + 8) = 0;
          *(_QWORD *)(v20 + 16) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v20 + 24) = 0;
          *(_QWORD *)(a2 + 8) = v20;
          *(_BYTE *)a2 = 14;
          sub_125180((unsigned __int8 *)v20, (unsigned __int8 *)v14);
          sub_125180((unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 16LL), (unsigned __int8 *)v17);
          return v13;
        }
      }
    }
    return (unsigned int)-1;
  }
  sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)(v11 + 80LL * a5));
  if ( a4 < *(_DWORD *)(v14 + 4) )
    sub_1273B0(a2, a1, *(_QWORD *)(a3 + 24), a4, a7);
  return v13;
}

