__int64 sub_AB20()
{
  int *v0; // r14
  __int64 i; // rsi
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+10h] [rbp-58h]
  __int128 v11; // [rsp+18h] [rbp-50h]

  v11 = 0;
  v10 = qvector_reserve();
  v0 = (int *)&unk_23DB0;
  for ( i = v10; ; i = v10 )
  {
    v2 = v11;
    v3 = *v0;
    if ( *((_QWORD *)&v11 + 1) < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve();
      i = v10;
      v2 = v11;
    }
    v4 = i + 80 * v2;
    *(_QWORD *)v4 = 0;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 72) = -1;
    *(_OWORD *)(v4 + 8) = 0;
    *(_OWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 56) = 0;
    *(_QWORD *)&v11 = v11 + 1;
    sub_56F0((__int64 *)v4, &unk_23D91, 6u);
    ++v0;
    **(_BYTE **)v4 = v3;
    if ( &unk_23DC0 == (_UNKNOWN *)v0 )
      break;
  }
  v5 = v10;
  v6 = bin_search();
  if ( v10 )
  {
    if ( (_QWORD)v11 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 80 * v7);
        if ( v8[6] )
        {
          v8[7] = 0;
          qfree();
        }
        if ( v8[3] )
        {
          v8[4] = 0;
          qfree();
        }
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        ++v7;
        v5 = v10;
      }
      while ( (_QWORD)v11 != v7 );
    }
    qfree();
  }
  return v6;
}
