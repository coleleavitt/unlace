__int64 __fastcall sub_13C80(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 i; // rbx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  const void *v10; // r14
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx

  if ( !*(_DWORD *)(a1 + 984) )
    return 0xFFFFFFFFLL;
  v3 = a2[1];
  if ( v3 )
  {
    v4 = *a2;
    for ( i = 0; i != v3; ++i )
    {
      v6 = v4 + 32 * i;
      if ( *(_QWORD *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 16) = 0;
        qfree();
        v4 = *a2;
      }
    }
  }
  else
  {
    v4 = *a2;
  }
  v7 = a2[2] == 0;
  v8 = v4;
  a2[1] = 0;
  if ( v7 )
  {
    v12 = qvector_reserve();
    v13 = a2[1];
    *a2 = v12;
    v8 = v12 + 32 * v13;
  }
  *(_QWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  ++a2[1];
  if ( v8 + 8 != a1 + 952 )
  {
    v9 = *(_QWORD *)(a1 + 960);
    if ( v9 < 2 )
    {
      *(_QWORD *)(v8 + 16) = 0;
    }
    else
    {
      v10 = *(const void **)(a1 + 952);
      v11 = *(void **)(v8 + 8);
      if ( *(_QWORD *)(v8 + 24) < v9 )
      {
        v11 = (void *)qvector_reserve();
        *(_QWORD *)(v8 + 8) = v11;
      }
      *(_QWORD *)(v8 + 16) = v9;
      memmove(v11, v10, v9 - 1);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + v9 - 1) = 0;
    }
  }
  *(_DWORD *)v8 = *(_DWORD *)(a1 + 984);
  return 1;
}

