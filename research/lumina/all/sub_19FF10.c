__int64 __fastcall sub_19FF10(unsigned __int8 *a1, char *a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  char *v10; // rbp
  size_t v11; // r14
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  char *v17; // rbp
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // r8
  char *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rdx
  void *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  _QWORD *v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // rbp
  _QWORD *v31; // r8
  __int64 v32; // rax
  void *v33; // rdi
  void *v34; // rbp
  void *v35; // rax
  const void *v36; // rsi
  __int64 v37; // rdi
  _QWORD *v38; // r15
  __int64 v39; // rax
  _QWORD *v41; // [rsp+0h] [rbp-98h]
  _QWORD *v42; // [rsp+0h] [rbp-98h]
  void *v43; // [rsp+8h] [rbp-90h]
  _QWORD *v44; // [rsp+18h] [rbp-80h]
  _QWORD *v45; // [rsp+18h] [rbp-80h]
  void *v46; // [rsp+20h] [rbp-78h] BYREF
  __int128 v47; // [rsp+28h] [rbp-70h]
  void *v48; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v3 = a1[12];
  v50 = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return v3;
  v6 = *(_QWORD *)a1;
  *(_BYTE *)(v6 + 5384) = 0;
  if ( a2 && *a2 )
    sub_19EA50(v6, a2, 1u);
  v7 = *(_QWORD *)a1;
  v46 = nullptr;
  v47 = 0;
  sub_19E3F0(&v46, (const char *)(v7 + 5384));
  v8 = v47;
  v9 = (char *)v46;
  if ( !(_QWORD)v47 )
  {
    if ( !v46 )
      return v3;
    goto LABEL_23;
  }
  v43 = nullptr;
  v10 = (char *)v46 + 24 * v47 - 24;
  v49 = 0;
  v11 = *((_QWORD *)v10 + 1);
  if ( v11 )
  {
    v35 = sub_198760(*((_QWORD *)v10 + 1));
    v36 = *(const void **)v10;
    v43 = v35;
    *((_QWORD *)&v49 + 1) = v11;
    memcpy(v35, v36, v11);
    v8 = v47;
    *(_QWORD *)&v49 = v11;
    if ( !(_QWORD)v47 )
    {
      v14 = *(_QWORD *)a1;
      v16 = *(_QWORD *)a1 + 5648LL;
      goto LABEL_35;
    }
    v9 = (char *)v46;
  }
  *(_QWORD *)&v47 = v8 - 1;
  v12 = &v9[24 * v8 - 24];
  v13 = *(void **)v12;
  if ( *(_QWORD *)v12 )
  {
    *((_QWORD *)v12 + 1) = 0;
    j__free(v13);
  }
  v14 = *(_QWORD *)a1;
  v15 = v47;
  v16 = *(_QWORD *)a1 + 5648LL;
  if ( (_QWORD)v47 )
  {
    v17 = (char *)v46;
    v18 = 0;
    while ( 1 )
    {
      v19 = sub_19FA00(v16, (__int64)v17);
      v20 = v16 + 8;
      if ( v19 == (_QWORD *)(v16 + 8) )
        break;
      ++v18;
      v16 = v19[7];
      v17 += 24;
      if ( v18 == v15 )
      {
        v20 = v16 + 8;
        goto LABEL_27;
      }
    }
    if ( v15 == v18 )
      goto LABEL_27;
    goto LABEL_15;
  }
LABEL_35:
  v20 = v14 + 5656;
LABEL_27:
  v44 = (_QWORD *)v20;
  v48 = v43;
  v26 = sub_19FA00(v16, (__int64)&v48);
  v27 = v44;
  v28 = v26;
  if ( v26 != v44 )
  {
    v29 = (_QWORD *)v26[7];
    v30 = v29;
    if ( a3 )
    {
      sub_19E910(v29);
      v31 = v44;
      if ( !v30 )
      {
LABEL_30:
        v32 = std::_Rb_tree_rebalance_for_erase(v28, v31);
        v33 = *(void **)(v32 + 32);
        v34 = (void *)v32;
        if ( v33 )
        {
          *(_QWORD *)(v32 + 40) = 0;
          j__free(v33);
        }
        v3 = 1;
        operator delete(v34, 0x40u);
        --*(_QWORD *)(v16 + 40);
        *(_BYTE *)(*(_QWORD *)a1 + 5640LL) = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v37 = v29[3];
      v38 = v29 + 1;
      if ( (_QWORD *)v37 != v29 + 1 )
      {
        while ( !*(_QWORD *)(v37 + 40) || **(_BYTE **)(v37 + 32) != 1 )
        {
          v45 = v27;
          v39 = std::_Rb_tree_increment(v37);
          v27 = v45;
          v37 = v39;
          if ( v38 == (_QWORD *)v39 )
            goto LABEL_42;
        }
        v3 = 0;
        goto LABEL_15;
      }
LABEL_42:
      v41 = v27;
      sub_19E910(v30);
      v31 = v41;
    }
    v42 = v31;
    sub_19E650((_QWORD *)v30[2]);
    operator delete(v30, 0x30u);
    v31 = v42;
    goto LABEL_30;
  }
LABEL_15:
  if ( v43 )
    j__free(v43);
  v21 = (char *)v46;
  v9 = (char *)v46;
  if ( v46 )
  {
    v22 = v47;
    if ( (_QWORD)v47 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[24 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          j__free(v25);
          v21 = (char *)v46;
        }
        ++v23;
        v9 = v21;
      }
      while ( v22 != v23 );
    }
LABEL_23:
    *(_QWORD *)&v47 = 0;
    j__free(v9);
  }
  return v3;
}
