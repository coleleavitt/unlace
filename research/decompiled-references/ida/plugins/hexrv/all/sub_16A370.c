__int64 __fastcall sub_16A370(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rbp
  __int64 v4; // rcx
  unsigned int v5; // r12d
  __int64 v6; // r13
  _DWORD *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  __int64 v13; // r14

  result = 0;
  if ( *(_DWORD *)(a1 + 76) == 4 )
  {
    v2 = *(unsigned int **)(a1 + 56);
    if ( *((_BYTE *)v2 + 64) == 7 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v5 = v2[18];
      if ( v5 >= *(_DWORD *)(v4 + 64) )
        sub_163630(a1);
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * v5);
      if ( *(_DWORD *)(v6 + 352) == 1 )
      {
        v7 = *(_DWORD **)(v6 + 56);
        if ( v7 )
        {
          if ( *v7 == 55 && v7[10] == *(_DWORD *)(a1 + 72) + 1 )
          {
            v8 = *v2;
            if ( (_DWORD)v8 == 42 )
              sub_11C320((char *)v2 + 32, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 6, *((_QWORD *)v2 + 3), v2[9]);
            else
              *v2 = sub_329720(v8);
            v12 = *(_DWORD *)(a1 + 72) + 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL) = v12;
            v13 = *(_QWORD *)(v6 + 16);
            sub_65820(*(_QWORD *)(a1 + 64), v6, *(_QWORD *)(a1 + 8), v9, v10, v11);
            **(_QWORD **)(a1 + 368) = __ROL8__(**(_QWORD **)(a1 + 368), 32);
            sub_A3E60(v6);
            sub_A3E60(v13);
            sub_62C20(*(_QWORD *)(a1 + 64), 1u, (__int64)"UNOPTIMIZED_IF_THEN. MOVED BLOCK %d BEFORE %d", v5, v12);
            return 1;
          }
        }
      }
    }
  }
  return result;
}

