__int64 __fastcall sub_3CE530(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 *v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax

  v7 = sub_3CAC50(*(_QWORD *)a1, a4, a5);
  v8 = *(int *)(a1 + 16);
  if ( v8 >= v7 && v6 >= v8 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( a2 == -1 )
      v10 = -1;
    else
      v10 = a2 & 7 | (unsigned __int64)(8 * a3);
    v11 = v9[1];
    v12 = *v9;
    if ( v9[2] < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve();
      *v9 = v14;
      v12 = v14;
      v11 = v9[1];
    }
    *(_QWORD *)(v12 + 8 * v11) = v10;
    ++v9[1];
  }
  return 1;
}

