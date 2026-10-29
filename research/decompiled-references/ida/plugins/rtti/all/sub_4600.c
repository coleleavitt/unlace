__int64 __fastcall sub_4600(__int64 a1, _BYTE *a2, int a3, const void *a4, const char *a5)
{
  char v5; // al
  const char *v6; // r13
  size_t v10; // rax
  size_t v11; // r14
  __int64 v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  _BYTE *v15; // rsi
  size_t v16; // r15
  size_t v17; // rax
  __int64 v18; // rbp
  size_t v19; // r13
  size_t v20; // r14
  _BYTE *v21; // rsi
  __int64 v23; // rax
  _BYTE *v24; // rdi
  size_t v25; // r15
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+0h] [rbp-40h]

  if ( !a2 )
    return 0;
  if ( *a2 != 46 )
    return 0;
  v5 = a2[1];
  if ( !v5 )
    return 0;
  v6 = a2 + 1;
  if ( a3 == 1 )
  {
    if ( v5 == 63 )
    {
      v5 = a2[2];
      v6 = a2 + 2;
    }
    if ( (unsigned __int8)(v5 - 80) <= 3u )
    {
      v5 = v6[1];
      if ( v5 == 69 )
      {
        v5 = v6[2];
        v6 += 2;
      }
      else
      {
        ++v6;
      }
    }
    if ( v5 == 66 )
      v5 = *++v6;
    if ( v5 == 65 )
      v5 = *++v6;
    if ( (unsigned __int8)(v5 - 84) > 5u || v5 == 87 )
      return 0;
    ++v6;
  }
  if ( a4 && (v10 = strlen((const char *)a4), (v11 = v10) != 0) )
  {
    v24 = *(_BYTE **)a1;
    v25 = v10 + 1;
    if ( *(_QWORD *)(a1 + 16) < v10 + 1 )
    {
      v28 = qvector_reserve();
      *(_QWORD *)a1 = v28;
      v24 = (_BYTE *)v28;
    }
    *(_QWORD *)(a1 + 8) = v25;
    memmove(v24, a4, v11);
    *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
    v26 = strlen(v6);
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v26;
    if ( v12 )
    {
      --v12;
      v14 = v26 + v12;
    }
    else
    {
      v14 = v26;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 0;
    v13 = strlen(v6);
    v14 = v13;
  }
  v15 = *(_BYTE **)a1;
  v16 = v14 + 1;
  if ( *(_QWORD *)(a1 + 16) < v14 + 1 )
  {
    v29 = v14;
    v23 = qvector_reserve();
    v14 = v29;
    *(_QWORD *)a1 = v23;
    v15 = (_BYTE *)v23;
  }
  *(_QWORD *)(a1 + 8) = v16;
  v15[v14] = 0;
  memmove((void *)(v12 + *(_QWORD *)a1), v6, v13);
  v17 = strlen(a5);
  v18 = *(_QWORD *)(a1 + 8);
  v19 = v17;
  v20 = v17;
  if ( v18 )
  {
    --v18;
    v20 = v17 + v18;
  }
  v21 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v20 + 1 )
  {
    v27 = qvector_reserve();
    *(_QWORD *)a1 = v27;
    v21 = (_BYTE *)v27;
  }
  *(_QWORD *)(a1 + 8) = v20 + 1;
  v21[v20] = 0;
  memmove((void *)(v18 + *(_QWORD *)a1), a5, v19);
  return sub_101D0(a1, 0x10000000);
}
