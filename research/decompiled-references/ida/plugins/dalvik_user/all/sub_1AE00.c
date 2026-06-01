__int64 __fastcall sub_1AE00(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  __int64 v5; // rbp
  _QWORD *v6; // rax
  int *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  int *v11; // r9
  unsigned int v12; // esi
  _DWORD *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  const char *v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // rbp
  __int64 v19; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r14
  size_t v24; // rax
  size_t v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rbp
  void *v31; // rdi
  size_t v32; // rdx
  __int64 v33; // rax
  int *v35; // [rsp+10h] [rbp-A8h]
  int *v36; // [rsp+10h] [rbp-A8h]
  size_t v37; // [rsp+10h] [rbp-A8h]
  int *v39; // [rsp+20h] [rbp-98h]
  int *v40; // [rsp+20h] [rbp-98h]
  unsigned int v42; // [rsp+30h] [rbp-88h]
  int v43; // [rsp+34h] [rbp-84h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  char v45[8]; // [rsp+40h] [rbp-78h] BYREF
  int v46; // [rsp+48h] [rbp-70h] BYREF
  void *v47; // [rsp+50h] [rbp-68h]
  int *v48; // [rsp+58h] [rbp-60h]
  int *v49; // [rsp+60h] [rbp-58h]
  __int64 v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v46 = 0;
  v47 = nullptr;
  v48 = &v46;
  v49 = &v46;
  v50 = 0;
  if ( netnode_supfirst() != -1 )
  {
    while ( 1 )
    {
      v5 = node2ea();
      if ( (int)netnode_supval() <= 15 || v42 == -1 )
        goto LABEL_25;
      v6 = v47;
      v7 = &v46;
      if ( !v47 )
        break;
      do
      {
        while ( 1 )
        {
          v8 = v6[2];
          v9 = v6[3];
          if ( *((_DWORD *)v6 + 8) < v42 )
            break;
          v7 = (int *)v6;
          v6 = (_QWORD *)v6[2];
          if ( !v8 )
            goto LABEL_9;
        }
        v6 = (_QWORD *)v6[3];
      }
      while ( v9 );
LABEL_9:
      if ( v7 == &v46 || v42 < v7[8] )
        break;
LABEL_20:
      v16 = nptr;
      if ( *((_QWORD *)v7 + 6) )
        v16 = *((const char **)v7 + 5);
      if ( !strcmp(v16, (const char *)a3) && (a4 == -1 || v43 == a4) )
      {
        v21 = a2[1];
        v22 = *a2;
        if ( a2[2] < (unsigned __int64)(v21 + 1) )
        {
          v28 = qvector_reserve();
          *a2 = v28;
          v21 = a2[1];
          v22 = v28;
        }
        v23 = v22 + 48 * v21;
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        ++a2[1];
        if ( a3 && (v24 = strlen((const char *)a3), (v25 = v24) != 0) )
        {
          v31 = *(void **)v23;
          v32 = v24 + 1;
          if ( *(_QWORD *)(v23 + 16) < v24 + 1 )
          {
            v37 = v24 + 1;
            v33 = qvector_reserve();
            *(_QWORD *)v23 = v33;
            v32 = v37;
            v31 = (void *)v33;
          }
          *(_QWORD *)(v23 + 8) = v32;
          memmove(v31, a3, v25);
          *(_BYTE *)(*(_QWORD *)v23 + v25) = 0;
        }
        else
        {
          *(_QWORD *)(v23 + 8) = 0;
        }
        *(_QWORD *)(v23 + 32) = v5;
        *(_DWORD *)(v23 + 24) = v43;
        *(_QWORD *)(v23 + 40) = v44;
        if ( a4 != -1 )
          goto LABEL_26;
      }
LABEL_25:
      if ( netnode_supnext() == -1 )
        goto LABEL_26;
    }
    v10 = operator new(0x40u);
    *(_DWORD *)(v10 + 32) = v42;
    v11 = (int *)v10;
    *(_QWORD *)(v10 + 40) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    if ( v7 == &v46 )
    {
      if ( v50 )
      {
        v13 = v49;
        v7 = nullptr;
        if ( v49[8] < v42 )
        {
LABEL_17:
          if ( v13 )
          {
LABEL_18:
            v35 = v11;
            std::_Rb_tree_insert_and_rebalance();
            ++v50;
            v7 = v35;
            goto LABEL_19;
          }
LABEL_43:
          if ( v11 )
            operator delete(v11, 0x40u);
LABEL_19:
          v15 = sub_34440(a1 + 1608, v5);
          if ( !(unsigned __int8)sub_34480(a1 + 1608, v7 + 10, v15, v42) )
          {
            v29 = std::_Rb_tree_rebalance_for_erase();
            v30 = (void *)v29;
            if ( *(_QWORD *)(v29 + 40) )
            {
              *(_QWORD *)(v29 + 48) = 0;
              qfree();
            }
            operator delete(v30, 0x40u);
            --v50;
            goto LABEL_25;
          }
          goto LABEL_20;
        }
      }
    }
    else
    {
      v12 = v7[8];
      if ( v42 >= v12 )
      {
        if ( v12 >= v42 )
          goto LABEL_43;
        if ( v7 != v49 )
        {
          v40 = (int *)v10;
          v26 = std::_Rb_tree_increment();
          v11 = v40;
          v13 = (_DWORD *)v26;
          if ( v42 >= *(_DWORD *)(v26 + 32) )
            goto LABEL_47;
          if ( *((_QWORD *)v7 + 3) )
          {
            v7 = (int *)v26;
            goto LABEL_17;
          }
        }
        if ( v7 )
          goto LABEL_18;
        goto LABEL_43;
      }
      v13 = v7;
      if ( v7 == v48 )
        goto LABEL_17;
      v39 = (int *)v10;
      v14 = std::_Rb_tree_decrement();
      v11 = v39;
      v13 = (_DWORD *)v14;
      if ( *(_DWORD *)(v14 + 32) < v42 )
      {
        if ( *(_QWORD *)(v14 + 24) )
          v13 = v7;
        else
          v7 = nullptr;
        goto LABEL_17;
      }
    }
LABEL_47:
    v36 = v11;
    v27 = sub_16DC0((__int64)v45, v42);
    v11 = v36;
    v7 = (int *)v27;
    goto LABEL_17;
  }
LABEL_26:
  v17 = v47;
  LOBYTE(a1) = a2[1] != 0;
  if ( v47 )
  {
    do
    {
      v18 = v17;
      sub_17DF0((_QWORD *)v17[3]);
      v19 = v17[5];
      v17 = (_QWORD *)v17[2];
      if ( v19 )
      {
        v18[6] = 0;
        qfree();
      }
      operator delete(v18, 0x40u);
    }
    while ( v17 );
  }
  return (unsigned int)a1;
}

