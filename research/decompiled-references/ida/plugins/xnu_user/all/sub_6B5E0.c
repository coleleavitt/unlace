__int64 __fastcall sub_6B5E0(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  const char *v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // rax

  a2[1] = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 48);
  if ( !(96 * v3) )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  do
  {
    v9 = src;
    if ( *(_QWORD *)(v7 + 8) )
      v9 = *(const char **)v7;
    if ( !strcmp(v9, a3) )
    {
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v12 = qvector_reserve();
        v8 = a2[1];
        *a2 = v12;
        v10 = v12;
      }
      *(_QWORD *)(v10 + 8 * v8) = v7;
      v8 = a2[1] + 1;
      a2[1] = v8;
      v4 = *(_QWORD *)(a1 + 48);
      v3 = *(_QWORD *)(a1 + 56);
    }
    v7 += 96;
  }
  while ( v7 != v4 + 96 * v3 );
  return v8;
}

