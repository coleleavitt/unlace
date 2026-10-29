void __fastcall sub_CDE60(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 **v3; // r15
  __int64 **v4; // r14
  __int64 *v5; // rbp
  __int64 *v6; // r12
  __int64 i; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax

  v3 = &a2[a3];
  v4 = a2;
  v5 = *(__int64 **)(a1 + 768);
  do
  {
    v6 = *v4;
    for ( i = (*v4)[1]; i; i = v6[1] )
    {
      v8 = *v6;
      v11 = sub_8E790(a1, *v6, i);
      if ( (*(_BYTE *)v11 & 4) == 0 )
      {
        if ( !under_debugger )
          sub_3835A0(50040);
        BUG();
      }
      *(_QWORD *)(v11 + 1920) = v6[2];
      sub_CDC00(v11, v8, v9, v10, v12, v13);
      sub_3230A0(v11, 0);
      v14 = v5[1];
      v15 = *v5;
      if ( v5[2] < (unsigned __int64)(v14 + 1) )
      {
        v16 = qvector_reserve();
        *v5 = v16;
        v15 = v16;
        v14 = v5[1];
      }
      v6 += 3;
      *(_QWORD *)(v15 + 8 * v14) = v11;
      ++v5[1];
    }
    ++v4;
  }
  while ( v4 != v3 );
}

