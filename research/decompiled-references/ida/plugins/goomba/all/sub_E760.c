unsigned __int64 __fastcall sub_E760(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // r15d
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  char v15; // r14
  _QWORD *v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // r8
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _BOOL8 v27; // rdi
  char v28; // r14
  unsigned __int8 *v29; // rax
  __int64 v30; // rdx
  char v31; // al
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  void *v37; // [rsp+8h] [rbp-68h]
  _QWORD *v38; // [rsp+8h] [rbp-68h]
  unsigned __int64 v39; // [rsp+8h] [rbp-68h]
  void *v40; // [rsp+8h] [rbp-68h]
  void *v41; // [rsp+10h] [rbp-60h]
  __int64 v42; // [rsp+18h] [rbp-58h] BYREF
  __int128 v43; // [rsp+20h] [rbp-50h]
  unsigned __int64 v44; // [rsp+30h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v43 = 0;
  v42 = 0;
  v4 = a2 - 1;
  if ( a2 - 1 < 0 )
  {
LABEL_44:
    v31 = sub_E560();
LABEL_45:
    v3 &= ~(-1LL << (8 * v31));
    goto LABEL_46;
  }
  v6 = 0;
  v7 = a1 + v4;
  v8 = 0;
  a1 = 0;
  v3 = (unsigned __int64)(a3 + 1);
  while ( 1 )
  {
    v9 = (_QWORD *)a3[2];
    v10 = v8 + 1;
    if ( !v9 )
      goto LABEL_10;
    v11 = (_QWORD *)v3;
    do
    {
      while ( 1 )
      {
        v12 = v9[2];
        v13 = v9[3];
        if ( v9[4] < v7 )
          break;
        v11 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v12 )
          goto LABEL_8;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v13 );
LABEL_8:
    v10 = v8 + 1;
    if ( (_QWORD *)v3 == v11 || v7 < v11[4] )
    {
LABEL_10:
      v14 = 1103515245 * dword_4E5B8 + 12345;
      v15 = 109 * v14 + 57;
      if ( v14 <= 0x59999998 )
        v15 = byte_449E0[(1103515245 * v14 + 12345) % 5];
      dword_4E5B8 = 1103515245 * v14 + 12345;
      if ( v6 < v10 )
      {
        v42 = qvector_reserve(&v42, a1, v10, 1);
        v8 = v43;
        a1 = v42;
      }
      *(_BYTE *)(a1 + v8) = v15;
      v16 = (_QWORD *)v3;
      v8 = v43 + 1;
      v17 = (_QWORD *)a3[2];
      *(_QWORD *)&v43 = v43 + 1;
      if ( !v17 )
        goto LABEL_54;
      do
      {
        while ( 1 )
        {
          v18 = v17[2];
          v19 = v17[3];
          if ( v17[4] < v7 )
            break;
          v16 = v17;
          v17 = (_QWORD *)v17[2];
          if ( !v18 )
            goto LABEL_19;
        }
        v17 = (_QWORD *)v17[3];
      }
      while ( v19 );
LABEL_19:
      if ( (_QWORD *)v3 == v16 )
      {
LABEL_54:
        v33 = operator new(0x30u);
        *(_QWORD *)(v33 + 32) = v7;
        v22 = (void *)v33;
        *(_BYTE *)(v33 + 40) = 0;
        if ( a3[5] )
        {
          v24 = a3[4];
          v16 = nullptr;
          if ( *(_QWORD *)(v24 + 32) < v7 )
            goto LABEL_26;
        }
      }
      else
      {
        if ( v7 >= v16[4] )
        {
LABEL_32:
          *((_BYTE *)v16 + 40) = v15;
          goto LABEL_36;
        }
        v20 = operator new(0x30u);
        *(_QWORD *)(v20 + 32) = v7;
        v22 = (void *)v20;
        *(_BYTE *)(v20 + 40) = 0;
        v23 = v16[4];
        if ( v7 >= v23 )
        {
          v39 = v16[4];
          if ( v23 >= v7 )
            goto LABEL_52;
          if ( (_QWORD *)a3[4] == v16 )
          {
            v24 = (unsigned __int64)v16;
            if ( v16 )
            {
LABEL_60:
              v36 = *(_QWORD *)(v24 + 32);
LABEL_61:
              v27 = v7 < v36;
              goto LABEL_30;
            }
LABEL_52:
            if ( v22 )
              operator delete(v22, 0x30u);
            goto LABEL_31;
          }
          v41 = (void *)v20;
          v35 = std::_Rb_tree_increment(v16);
          v22 = v41;
          v24 = v35;
          if ( v7 < *(_QWORD *)(v35 + 32) )
          {
            v36 = v39;
            if ( !v16[3] )
            {
              v24 = (unsigned __int64)v16;
              if ( v16 )
                goto LABEL_61;
              goto LABEL_52;
            }
            v16 = (_QWORD *)v35;
            goto LABEL_26;
          }
        }
        else
        {
          v24 = (unsigned __int64)v16;
          if ( (_QWORD *)a3[3] == v16 )
            goto LABEL_26;
          v37 = (void *)v20;
          v25 = std::_Rb_tree_decrement(v16, v23, v16, v21, v20);
          v22 = v37;
          v24 = v25;
          if ( *(_QWORD *)(v25 + 32) < v7 )
          {
            if ( *(_QWORD *)(v25 + 24) )
              v24 = (unsigned __int64)v16;
            else
              v16 = nullptr;
LABEL_26:
            if ( v24 )
            {
              if ( v16 || v24 == v3 )
              {
                v27 = 1;
LABEL_30:
                v38 = v22;
                std::_Rb_tree_insert_and_rebalance(v27, v22, v24, v3);
                ++a3[5];
                v16 = v38;
LABEL_31:
                v8 = v43;
                goto LABEL_32;
              }
              goto LABEL_60;
            }
            goto LABEL_52;
          }
        }
      }
      v40 = v22;
      v34 = sub_E600((__int64)a3, v7, v24, v26, (__int64)v22);
      v22 = v40;
      v16 = v34;
      goto LABEL_26;
    }
    v28 = *((_BYTE *)v11 + 40);
    if ( v6 < v10 )
    {
      v42 = qvector_reserve(&v42, a1, v10, 1);
      v8 = v43;
      a1 = v42;
    }
    *(_BYTE *)(a1 + v8) = v28;
    v8 = v43 + 1;
    *(_QWORD *)&v43 = v43 + 1;
LABEL_36:
    --v4;
    a1 = v42;
    --v7;
    if ( v4 == -1 )
      break;
    v6 = *((_QWORD *)&v43 + 1);
  }
  if ( v42 == v42 + v8 )
    goto LABEL_44;
  v29 = (unsigned __int8 *)v42;
  v3 = 0;
  do
  {
    v30 = *v29++;
    v3 = v30 | (v3 << 8);
  }
  while ( v29 != (unsigned __int8 *)(v42 + v8) );
  v31 = v8;
  if ( (unsigned int)(v8 - 1) <= 1 || (_DWORD)v8 == 4 )
    goto LABEL_45;
  if ( (_DWORD)v8 != 8 )
    goto LABEL_44;
LABEL_46:
  if ( a1 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(a1);
  }
  return v3;
}

