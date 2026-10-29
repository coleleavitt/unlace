__int64 __fastcall sub_FA4C0(__int64 a1, char a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // r13d
  __int64 v15; // r15
  _DWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  _DWORD *v23; // rdi
  int v24; // eax
  __int64 i; // rax
  __int64 v26; // rsi
  int v27; // edx
  _DWORD *v28; // rdi
  int *v29; // r13
  __int64 v30; // r14
  int v31; // r15d
  int *v32; // r14
  void *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  int *v37; // rax
  unsigned int v38; // [rsp+8h] [rbp-B0h]
  char v39; // [rsp+Ch] [rbp-ACh]
  __int64 v40; // [rsp+10h] [rbp-A8h] BYREF
  int v41; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD *v42; // [rsp+20h] [rbp-98h]
  int *v43; // [rsp+28h] [rbp-90h]
  int *v44; // [rsp+30h] [rbp-88h]
  __int64 v45; // [rsp+38h] [rbp-80h]
  __int64 v46; // [rsp+40h] [rbp-78h] BYREF
  __int128 v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  __int128 v49; // [rsp+60h] [rbp-58h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v7 = a2 & 7;
  if ( (_DWORD)v7 )
    sub_14A660(a1, v7, a3, a4);
  sub_1EBDA0(a1, (__int64 **)v7);
  v8 = a2 & 1;
  sub_190300(a1, (const __m128i *)v7);
  v12 = *(unsigned int *)(a1 + 64);
  if ( (int)v12 <= 0 )
  {
    if ( (a2 & 8) != 0 )
      sub_149220(*(__int64 **)(a1 + 784), v7, v9, v10, v12, v11);
    sub_190300(a1, (const __m128i *)v7);
    v38 = 0;
    goto LABEL_36;
  }
  v38 = 0;
  v13 = 0;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v13);
      v16 = *(_DWORD **)(v15 + 56);
      if ( v16 )
      {
        if ( (unsigned int)(*v16 - 56) <= 1 && !(unsigned __int8)sub_F7B20(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v13)) )
        {
          ++v38;
          if ( *(_BYTE *)(*(_QWORD *)(v15 + 56) + 64LL) != 8 && (unsigned int)sub_F4760(v15, v8 | 4u) != 1 )
            break;
        }
      }
      *(_DWORD *)(v15 + 24) |= 0x800u;
      if ( *(_DWORD *)(a1 + 64) <= (int)++v13 )
        goto LABEL_12;
    }
    ++v14;
    ++v13;
  }
  while ( *(_DWORD *)(a1 + 64) > (int)v13 );
LABEL_12:
  if ( (a2 & 8) != 0 )
    sub_149220(*(__int64 **)(a1 + 784), a2 & 8, v9, v10, v12, v11);
  v17 = v8 | 6;
  sub_190300(a1, (const __m128i *)(a2 & 8));
  if ( v14 <= 0 )
  {
LABEL_36:
    sub_66FA0(a1, 1);
    for ( i = 0; *(_DWORD *)(a1 + 64) > (int)i; ++i )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i);
      v27 = *(_DWORD *)(v26 + 24);
      if ( (v27 & 0x800) == 0 )
      {
        if ( (v27 & 2) == 0 || (v28 = *(_DWORD **)(v26 + 56)) != nullptr && (unsigned int)(*v28 - 56) <= 1 )
        {
          if ( !under_debugger )
            sub_383060(0xC3C2u, a5);
          goto LABEL_75;
        }
        BYTE1(v27) |= 8u;
        *(_DWORD *)(v26 + 24) = v27;
      }
    }
    *(_DWORD *)a1 |= 0x1000u;
    sub_33E140(*(_QWORD *)(a1 + 1496), 0x12u, a1);
    return v38;
  }
  if ( (a2 & 0x10) == 0 )
    return (unsigned int)-1;
  a5 = 0.0;
  v18 = *(_QWORD *)(a1 + 784);
  v41 = 0;
  v42 = nullptr;
  v43 = &v41;
  v44 = &v41;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  v49 = 0;
  sub_6DDE0(v18, &v46);
  v19 = *(_DWORD *)(a1 + 64) - 1;
  v20 = v19;
  if ( v19 < 0 )
  {
LABEL_30:
    while ( v45 )
    {
      v29 = v43;
      if ( v43 == &v41 )
      {
        v37 = &v41;
LABEL_71:
        sub_3311F0((_QWORD *)a1, v37[8], 7u);
        if ( (v17 & 4) != 0 )
        {
          v17 &= ~4u;
          continue;
        }
        if ( !under_debugger )
          sub_383060(0xC3C1u, 0.0);
LABEL_75:
        BUG();
      }
      v39 = 0;
      while ( 1 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v29[8]);
        v31 = sub_F4760(v30, v17);
        if ( !v31 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(v30 + 56) + 24LL);
          goto LABEL_56;
        }
        v32 = (int *)std::_Rb_tree_increment();
        if ( v31 == 1 )
        {
          v33 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v33, 0x28u);
          --v45;
          v39 = 1;
        }
        if ( v32 == &v41 )
          break;
        v29 = v32;
      }
      if ( !v39 )
      {
        v37 = v43;
        goto LABEL_71;
      }
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
    sub_F5F90(v42);
    goto LABEL_36;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v20 >= (unsigned __int64)v47
        || (v21 = *(int *)(v46 + 4 * v20), (int)v21 < 0)
        || *(_DWORD *)(a1 + 64) <= (int)v21 )
      {
        if ( !under_debugger )
          sub_383060(0xC3C0u, 0.0);
        goto LABEL_75;
      }
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v21);
      v23 = *(_DWORD **)(v22 + 56);
      if ( v23 )
      {
        if ( (unsigned int)(*v23 - 56) <= 1 && !(unsigned __int8)sub_120560((__int64)v23, nullptr) )
          break;
      }
      *(_DWORD *)(v22 + 24) |= 0x800u;
LABEL_19:
      if ( (--v20 & 0x80000000) != 0LL )
        goto LABEL_30;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v22 + 56) + 64LL) == 8 )
      goto LABEL_19;
    v24 = sub_F4760(v22, v17);
    if ( !v24 )
      break;
    if ( v24 == 1 )
      goto LABEL_19;
    sub_C3BC0(&v40, (int *)(v22 + 72));
    if ( (--v20 & 0x80000000) != 0LL )
      goto LABEL_30;
  }
  v34 = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 24LL);
LABEL_56:
  v35 = v48;
  *(_QWORD *)(a1 + 488) = v34;
  if ( v35 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v35);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  sub_F5F90(v42);
  return (unsigned int)-1;
}

