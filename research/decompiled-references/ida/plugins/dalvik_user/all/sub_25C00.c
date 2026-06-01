__int64 __fastcall sub_25C00(_QWORD *a1, void **a2, unsigned __int64 a3)
{
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rbx
  void *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  char *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  const void *v25; // r12
  void *v26; // rdi
  _QWORD *v27; // [rsp+8h] [rbp-70h]
  unsigned __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-60h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v6 = a1 + 60;
  qmutex_lock();
  v7 = (_QWORD *)a1[61];
  v28 = a3;
  v29 = 0;
  v31 = 0;
  if ( !v7 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      v8 = v7[2];
      v9 = v7[3];
      if ( v7[4] < a3 )
        break;
      v6 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !v8 )
        goto LABEL_7;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( v9 );
LABEL_7:
  if ( a1 + 60 == v6 || a3 < v6[4] )
  {
LABEL_9:
    v30 = 0;
    v27 = sub_25A50(a1 + 59, v6, (__int64)&v28);
    v6 = v27;
    if ( v30 )
      qfree();
    v10 = a1[2];
    v28 = 0;
    v29 = 0;
    v11 = sub_4EA10(v10, &v28, a3);
    v12 = v29;
    if ( !v11 )
      goto LABEL_12;
    v22 = (_QWORD *)a1[16];
    if ( !v22 )
      goto LABEL_12;
    v23 = a1 + 15;
    do
    {
      if ( v22[4] >= v29 )
      {
        v23 = v22;
        v22 = (_QWORD *)v22[2];
      }
      else
      {
        v22 = (_QWORD *)v22[3];
      }
    }
    while ( v22 );
    if ( a1 + 15 == v23 || v29 < v23[4] )
    {
LABEL_12:
      v27[5] = v29;
      v13 = std::_Rb_tree_rebalance_for_erase();
      v14 = (void *)v13;
      if ( *(_QWORD *)(v13 + 48) )
      {
        *(_QWORD *)(v13 + 56) = 0;
        qfree();
      }
      v15 = v14;
      v16 = 0;
      operator delete(v15, 0x48u);
      --a1[64];
      goto LABEL_23;
    }
    v17 = a1[5] + 72LL * *((int *)v23 + 10);
    if ( v27 + 6 != (_QWORD *)(v17 + 16) )
    {
      v18 = *(_QWORD *)(v17 + 24);
      if ( v18 > 1 )
      {
        v25 = *(const void **)(v17 + 16);
        v26 = (void *)v27[6];
        if ( v27[8] < v18 )
        {
          v26 = (void *)qvector_reserve();
          v27[6] = v26;
        }
        v27[7] = v18;
        memmove(v26, v25, v18 - 1);
        *(_BYTE *)(v27[6] + v18 - 1) = 0;
        v12 = v29;
      }
      else
      {
        v27[7] = 0;
      }
    }
    v27[5] = v12;
  }
  a2[1] = nullptr;
  v19 = v6[7];
  if ( v19 > 1 )
  {
    v21 = (char *)*a2;
    if ( (unsigned __int64)a2[2] < v19 )
    {
      v24 = qvector_reserve();
      *a2 = (void *)v24;
      v21 = (char *)v24;
    }
    a2[1] = (void *)v19;
    v21[v19 - 1] = 0;
    memcpy(*a2, (const void *)v6[6], v19 - 1);
  }
  v16 = 1;
LABEL_23:
  qmutex_unlock();
  return v16;
}

