__int64 __fastcall sub_3BE9C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // r12
  __int64 v6; // r14
  size_t v7; // rax
  size_t v8; // r9
  size_t v9; // r10
  __int64 v10; // rsi
  size_t v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-70h]
  size_t v19; // [rsp+8h] [rbp-70h]
  size_t v20; // [rsp+10h] [rbp-68h]
  size_t v21; // [rsp+18h] [rbp-60h]

  v3 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v5 = sub_252E20(a1, a2, a3);
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      tag_remove();
      if ( s1 )
      {
        v6 = *(_QWORD *)(a2 + 16);
        v7 = strlen(s1);
        v8 = v7;
        v9 = v7;
        if ( v6 )
        {
          --v6;
          v9 = v7 + v6;
        }
        v10 = *(_QWORD *)(a2 + 8);
        v11 = v9 + 1;
        if ( *(_QWORD *)(a2 + 24) < v9 + 1 )
        {
          v21 = v7;
          v20 = v9;
          v19 = v9 + 1;
          v16 = qvector_reserve();
          *(_QWORD *)(a2 + 8) = v16;
          v8 = v21;
          v10 = v16;
          v9 = v20;
          v11 = v19;
        }
        *(_QWORD *)(a2 + 16) = v11;
        *(_BYTE *)(v10 + v9) = 0;
        memmove((void *)(v6 + *(_QWORD *)(a2 + 8)), s1, v8);
      }
      v12 = *(_QWORD *)(a2 + 16);
      v13 = 2;
      if ( v12 )
        v13 = v12-- + 1;
      v14 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < v13 )
      {
        v18 = v13;
        v15 = qvector_reserve();
        *(_QWORD *)(a2 + 8) = v15;
        v13 = v18;
        v14 = v15;
      }
      *(_QWORD *)(a2 + 16) = v13;
      *(_BYTE *)(v14 + v12) = 10;
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v12 + 1) = 0;
      ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(v5 + 8) );
  }
  return 0;
}

