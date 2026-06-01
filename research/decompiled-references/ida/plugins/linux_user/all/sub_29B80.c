unsigned __int64 __fastcall sub_29B80(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  unsigned int v6; // ecx
  __int64 v8; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _QWORD *v20; // r14
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ecx
  _QWORD *v30; // r9
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128 v37; // xmm0
  int *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-90h]
  _QWORD *v46; // [rsp+8h] [rbp-90h]
  _QWORD *v47; // [rsp+8h] [rbp-90h]
  _QWORD *v48; // [rsp+8h] [rbp-90h]
  unsigned int v49; // [rsp+10h] [rbp-88h]
  _QWORD *v50; // [rsp+10h] [rbp-88h]
  unsigned int v51; // [rsp+10h] [rbp-88h]
  int v52; // [rsp+28h] [rbp-70h] BYREF
  __int64 v53; // [rsp+30h] [rbp-68h]
  int *v54; // [rsp+38h] [rbp-60h] BYREF
  int *v55; // [rsp+40h] [rbp-58h]
  __int64 v56; // [rsp+48h] [rbp-50h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v3 = a1 + 2;
  v6 = *(_DWORD *)(a2 + 88);
  v57 = __readfsqword(0x28u);
  v8 = a1[3];
  if ( !v8 )
  {
    v25 = a1 + 2;
    v52 = 0;
    v53 = 0;
    v54 = &v52;
    v55 = &v52;
    v56 = 0;
    goto LABEL_32;
  }
  v9 = a1 + 2;
  v10 = a1[3];
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_QWORD *)(v10 + 24);
      if ( *(_DWORD *)(v10 + 32) < v6 )
        break;
      v9 = (_QWORD *)v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v11 )
        goto LABEL_6;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( v3 == v9 || v6 < *((_DWORD *)v9 + 8) )
  {
    v25 = v3;
    v52 = 0;
    v53 = 0;
    v54 = &v52;
    v55 = &v52;
    v56 = 0;
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v8 + 16);
        v27 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < v6 )
          break;
        v25 = (_QWORD *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v26 )
          goto LABEL_30;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v27 );
LABEL_30:
    if ( v3 != v25 && v6 >= *((_DWORD *)v25 + 8) )
      goto LABEL_49;
LABEL_32:
    v28 = operator new(0x58u);
    v29 = *(_DWORD *)(a2 + 88);
    *(_DWORD *)(v28 + 48) = 0;
    v30 = (_QWORD *)v28;
    v28 += 48;
    *(_QWORD *)(v28 + 8) = 0;
    *(_DWORD *)(v28 - 16) = v29;
    v30[8] = v28;
    v30[9] = v28;
    v30[10] = 0;
    if ( v3 == v25 )
    {
      if ( a1[6] )
      {
        v32 = a1[5];
        v25 = nullptr;
        if ( *(_DWORD *)(v32 + 32) < v29 )
        {
LABEL_38:
          if ( v32 )
          {
LABEL_39:
            v47 = v30;
            std::_Rb_tree_insert_and_rebalance();
            ++a1[6];
            v25 = v47;
            goto LABEL_49;
          }
LABEL_62:
          if ( v30 )
            operator delete(v30, 0x58u);
LABEL_49:
          sub_26300((_QWORD *)v25[7]);
          v36 = v53;
          v25[7] = 0;
          v25[8] = v25 + 6;
          v25[9] = v25 + 6;
          v25[10] = 0;
          if ( v36 )
          {
            v37 = _mm_loadh_ps((const double *)&v54);
            *((_DWORD *)v25 + 12) = v52;
            v38 = v55;
            *(__m128 *)(v25 + 7) = v37;
            v25[9] = v38;
            *(_QWORD *)(v36 + 8) = v25 + 6;
            v53 = 0;
            v25[10] = v56;
            v54 = &v52;
            v55 = &v52;
            v56 = 0;
          }
          v9 = v3;
          sub_26300(nullptr);
          v39 = a1[3];
          v40 = *(_DWORD *)(a2 + 88);
          if ( v39 )
          {
            do
            {
              while ( 1 )
              {
                v41 = *(_QWORD *)(v39 + 16);
                v42 = *(_QWORD *)(v39 + 24);
                if ( *(_DWORD *)(v39 + 32) < v40 )
                  break;
                v9 = (_QWORD *)v39;
                v39 = *(_QWORD *)(v39 + 16);
                if ( !v41 )
                  goto LABEL_56;
              }
              v39 = *(_QWORD *)(v39 + 24);
            }
            while ( v42 );
LABEL_56:
            if ( v3 != v9 && v40 < *((_DWORD *)v9 + 8) )
              v9 = v3;
          }
          goto LABEL_8;
        }
      }
    }
    else
    {
      v31 = *((_DWORD *)v25 + 8);
      if ( v29 >= v31 )
      {
        if ( v31 >= v29 )
          goto LABEL_62;
        if ( (_QWORD *)a1[5] != v25 )
        {
          v51 = v29;
          v48 = v30;
          v44 = std::_Rb_tree_increment();
          v29 = v51;
          v30 = v48;
          v32 = v44;
          if ( v51 >= *(_DWORD *)(v44 + 32) )
            goto LABEL_66;
          if ( v25[3] )
          {
            v25 = (_QWORD *)v44;
            goto LABEL_38;
          }
        }
        if ( v25 )
          goto LABEL_39;
        goto LABEL_62;
      }
      v32 = (__int64)v25;
      if ( (_QWORD *)a1[4] == v25 )
        goto LABEL_38;
      v49 = v29;
      v46 = v30;
      v33 = std::_Rb_tree_decrement();
      v29 = v49;
      v30 = v46;
      v32 = v33;
      if ( *(_DWORD *)(v33 + 32) < v49 )
      {
        if ( *(_QWORD *)(v33 + 24) )
          v32 = (__int64)v25;
        else
          v25 = nullptr;
        goto LABEL_38;
      }
    }
LABEL_66:
    v50 = v30;
    v43 = sub_25F00((__int64)(a1 + 1), v29);
    v30 = v50;
    v25 = (_QWORD *)v43;
    goto LABEL_38;
  }
LABEL_8:
  v13 = (_QWORD *)v9[7];
  if ( !v13 )
    goto LABEL_46;
  v14 = *(_QWORD *)(a2 + 56);
  v15 = v9 + 6;
  do
  {
    while ( 1 )
    {
      v16 = v13[2];
      v17 = v13[3];
      if ( v13[4] < v14 )
        break;
      v15 = v13;
      v13 = (_QWORD *)v13[2];
      if ( !v16 )
        goto LABEL_13;
    }
    v13 = (_QWORD *)v13[3];
  }
  while ( v17 );
LABEL_13:
  if ( v9 + 6 == v15 )
  {
LABEL_46:
    v45 = (__int64)(v9 + 5);
    v35 = operator new(0x30u);
    v19 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v35 + 40) = 0;
    v20 = (_QWORD *)v35;
    *(_QWORD *)(v35 + 32) = v19;
    if ( v9[10] )
    {
      v22 = (_QWORD *)v9[9];
      v15 = nullptr;
      if ( v22[4] < v19 )
      {
LABEL_20:
        if ( v22 )
        {
LABEL_21:
          v15 = v20;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(v45 + 40);
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
LABEL_48:
    v15 = sub_25E40(v45, v19);
    goto LABEL_20;
  }
  if ( v14 >= v15[4] )
    goto LABEL_22;
  v45 = (__int64)(v9 + 5);
  v18 = operator new(0x30u);
  v19 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v18 + 40) = 0;
  v20 = (_QWORD *)v18;
  *(_QWORD *)(v18 + 32) = v19;
  v21 = v15[4];
  if ( v19 < v21 )
  {
    v22 = v15;
    if ( (_QWORD *)v9[8] == v15 )
      goto LABEL_20;
    v23 = std::_Rb_tree_decrement();
    v22 = (_QWORD *)v23;
    if ( *(_QWORD *)(v23 + 32) < v19 )
    {
      if ( *(_QWORD *)(v23 + 24) )
        v22 = v15;
      else
        v15 = nullptr;
      goto LABEL_20;
    }
    goto LABEL_48;
  }
  if ( v21 < v19 )
  {
    if ( (_QWORD *)v9[9] == v15 )
    {
      if ( v15 )
        goto LABEL_21;
    }
    else
    {
      v34 = std::_Rb_tree_increment();
      v22 = (_QWORD *)v34;
      if ( v19 >= *(_QWORD *)(v34 + 32) )
        goto LABEL_48;
      if ( v15[3] )
      {
        v15 = (_QWORD *)v34;
        goto LABEL_20;
      }
      if ( v15 )
        goto LABEL_21;
    }
  }
LABEL_24:
  if ( v20 )
    operator delete(v20, 0x30u);
LABEL_22:
  *((_DWORD *)v15 + 10) = a3;
  return v57 - __readfsqword(0x28u);
}

