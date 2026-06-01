__int64 __fastcall sub_4B5A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  char v15; // cl
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rcx
  int *v27; // rbx
  int *v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  void *v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rdi
  __m128i v50; // xmm0
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+10h] [rbp-A8h]
  __int64 v56; // [rsp+20h] [rbp-98h] BYREF
  __m128i v57; // [rsp+28h] [rbp-90h] BYREF
  char v58; // [rsp+38h] [rbp-80h]
  _BYTE v59[56]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 64);
  v5 = *(_QWORD *)(a2 + 56);
  v60 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 72) < (unsigned __int64)(v4 + 1) )
  {
    v52 = qvector_reserve(a2 + 56, v5, v4 + 1, 4);
    *(_QWORD *)(a2 + 56) = v52;
    v5 = v52;
    v4 = *(_QWORD *)(a2 + 64);
  }
  *(_DWORD *)(v5 + 4 * v4) = a3;
  v7 = 1;
  v8 = *(_QWORD *)(a2 + 64) + 1LL;
  *(_QWORD *)(a2 + 64) = v8;
  v53 = a2 + 152;
  while ( 2 )
  {
    v9 = v8 - 1;
    do
    {
      if ( v9 == -1 )
      {
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
      v10 = *(_QWORD *)(a2 + 104);
      v11 = *(int *)(*(_QWORD *)(a2 + 56) + 4 * v9);
      *(_QWORD *)(a2 + 64) = v9;
      v12 = v11 + 63;
      *(_DWORD *)(a2 + 256) = v11;
      if ( v11 >= 0 )
        v12 = v11;
      v13 = (_QWORD *)(v10 + 8 * (v12 >> 6));
      v14 = v11 % 64;
      if ( v14 < 0 )
      {
        v16 = v13 - 1;
        v15 = v14 + 64;
      }
      else
      {
        v15 = v14;
        v16 = v13;
      }
      --v9;
    }
    while ( (*v16 & (1LL << v15)) != 0 );
    if ( v14 < 0 )
      --v13;
    *v13 |= 1LL << v15;
    v17 = sub_4CAD0(*(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 256));
    *(_QWORD *)(a2 + 240) = v17;
    if ( !v17 )
    {
      sub_64B50(
        (unsigned int)&v56,
        *(_QWORD *)(a2 + 16),
        (unsigned int)"scaffold block %d not found",
        *(_DWORD *)(a2 + 256),
        v20,
        v21);
      goto LABEL_42;
    }
    *(_DWORD *)(a2 + 260) = *(_QWORD *)(a2 + 40);
    if ( v7 )
      sub_FDC0((_QWORD *)(a2 + 192), (int *)(a2 + 260), v18, v19, v20);
    v22 = *(_QWORD *)(a2 + 160);
    v23 = *(int *)(a2 + 256);
    if ( v22 )
    {
      v24 = a2 + 152;
      do
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(v22 + 16);
          v26 = *(_QWORD *)(v22 + 24);
          if ( (int)v23 > *(_DWORD *)(v22 + 32) )
            break;
          v24 = v22;
          v22 = *(_QWORD *)(v22 + 16);
          if ( !v25 )
            goto LABEL_21;
        }
        v22 = *(_QWORD *)(v22 + 24);
      }
      while ( v26 );
LABEL_21:
      if ( v24 != v53 && (int)v23 >= *(_DWORD *)(v24 + 32) )
      {
        v27 = *(int **)(v24 + 40);
        v28 = &v27[10 * *(_QWORD *)(v24 + 48)];
        while ( v28 != v27 )
        {
          v29 = *v27;
          v30 = v27[4];
          v27 += 10;
          sub_4C000(*(_QWORD *)(a2 + 32) + 16 * v30 + 56 * v29 + 24, *(unsigned int *)(a2 + 260));
        }
        v31 = std::_Rb_tree_rebalance_for_erase(v24, v53);
        v32 = *(_QWORD *)(v31 + 40);
        v33 = (void *)v31;
        if ( v32 )
        {
          *(_QWORD *)(v31 + 48) = 0;
          qfree(v32);
        }
        operator delete(v33, 0x40u);
        --*(_QWORD *)(a2 + 184);
        v23 = *(int *)(a2 + 256);
      }
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v23) = *(_DWORD *)(a2 + 260);
    sub_4C520(v59, *(_QWORD *)(a2 + 240));
    v34 = *(_QWORD *)(a2 + 40);
    v35 = *(_QWORD *)(a2 + 48);
    if ( v35 < v34 + 1 )
    {
      v36 = qvector_reserve(a2 + 32, 0, v34 + 1, 56);
      v42 = *(_QWORD *)(a2 + 40);
      v43 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v35;
      v44 = *(_QWORD *)(a2 + 32);
      v54 = v43;
      v45 = v42 - 1;
      if ( v45 >= 0 )
      {
        v46 = v36;
        do
        {
          v47 = v46;
          v46 += 56;
          sub_4C570(v47, v44);
          v48 = v44;
          v44 += 56;
          sub_4C1A0(v48);
        }
        while ( v45-- != 0 );
        v44 = *(_QWORD *)(a2 + 32);
      }
      qfree(v44);
      *(_QWORD *)(a2 + 32) = v36;
      *(_QWORD *)(a2 + 48) = v54;
      v34 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v36 = *(_QWORD *)(a2 + 32);
    }
    sub_4C570(v36 + 56 * v34, v59);
    ++*(_QWORD *)(a2 + 40);
    sub_4C1A0(v59);
    v40 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 248) = v40 + 56LL * *(_QWORD *)(a2 + 40) - 56;
    v41 = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 8LL);
    if ( v41 == 2 )
    {
      sub_4AC10((__int64)&v56, a2, v40, v37, v38, v39);
      if ( v58 )
        goto LABEL_42;
      goto LABEL_34;
    }
    if ( v41 == 3 )
    {
      sub_4AF00((__int64)&v56, a2, v40, v37, v38, v39);
      if ( v58 )
        goto LABEL_42;
LABEL_34:
      v8 = *(_QWORD *)(a2 + 64);
      v7 = 0;
      continue;
    }
    break;
  }
  if ( v41 != 1 )
    goto LABEL_34;
  sub_4AAB0((__int64)&v56, a2, v40, v37, v38, v39);
  if ( !v58 )
    goto LABEL_34;
LABEL_42:
  *(_QWORD *)a1 = v56;
  v50 = _mm_loadu_si128(&v57);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v50;
  return a1;
}

