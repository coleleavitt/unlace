unsigned __int64 __fastcall sub_43FD0(__int64 a1, __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  size_t v18; // r15
  __int64 v19; // r13
  size_t v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // [rsp+8h] [rbp-80h]
  _BYTE *src; // [rsp+30h] [rbp-58h]
  __int64 n; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 56) )
    goto LABEL_2;
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
  {
    v16 = v13 + 1;
    v15 = *(_QWORD *)(a1 + 40);
    v14 = *(_QWORD *)(a1 + 32);
    --v13;
    if ( *(_QWORD *)(a1 + 48) >= v16 )
      goto LABEL_18;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32);
    v15 = 1;
    v16 = 2;
    if ( *(_QWORD *)(a1 + 48) >= 2u )
      goto LABEL_18;
  }
  v22 = qvector_reserve();
  *(_QWORD *)(a1 + 32) = v22;
  v14 = v22;
LABEL_18:
  *(_QWORD *)(a1 + 40) = v16;
  *(_BYTE *)(v14 + v13) = 34;
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + v15) = 0;
  v17 = *(_QWORD *)(a2 + 8);
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v17 != 1 )
    {
      v19 = *(_QWORD *)(a1 + 40);
      v20 = v17 - 1;
      if ( v19 )
      {
        --v19;
        v20 = v18 + v19;
        v17 += v19;
      }
      v21 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v17 )
      {
        v24 = v20;
        v23 = qvector_reserve();
        v20 = v24;
        *(_QWORD *)(a1 + 32) = v23;
        v21 = v23;
      }
      *(_QWORD *)(a1 + 40) = v17;
      *(_BYTE *)(v21 + v20) = 0;
      memcpy((void *)(v19 + *(_QWORD *)(a1 + 32)), *(const void **)a2, v18);
    }
  }
  sub_43D60((__int64 *)(a1 + 32), "\",");
LABEL_2:
  n = 0;
  src = nullptr;
  if ( convert_encoding() > 0 )
  {
    src = (_BYTE *)qvector_reserve();
    n = 1;
    *src = 0;
    memmove(src, nullptr, 0);
  }
  v4 = n;
  v5 = 4;
  if ( n )
  {
    v5 = n + 3;
    v4 = n - 1;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  if ( v7 >= v6 + v5 )
    goto LABEL_12;
  do
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v7;
    v9 = qrealloc();
    v8 = v9;
    if ( !v9 )
      sub_43DF0((__int64)"JDWP encoder");
    *(_QWORD *)a1 = v9;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 16);
  }
  while ( v7 < v6 + v5 );
  while ( v7 < v6 + 4 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v7;
    v10 = qrealloc();
    v8 = v10;
    if ( !v10 )
      sub_43DF0((__int64)"JDWP encoder");
    *(_QWORD *)a1 = v10;
    v7 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 8);
LABEL_12:
    ;
  }
  *(_DWORD *)(v8 + v6) = _byteswap_ulong(v4);
  v11 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v11 + 4;
  memcpy((void *)(*(_QWORD *)a1 + v11 + 4), src, v4);
  *(_QWORD *)(a1 + 8) += v4;
  if ( src )
    qfree();
  return v27 - __readfsqword(0x28u);
}

