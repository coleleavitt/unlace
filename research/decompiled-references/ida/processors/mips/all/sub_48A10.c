unsigned __int64 __fastcall sub_48A10(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v7; // r13
  __int16 v8; // di
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  bool v20; // al
  __int64 v21; // r13
  __int64 v22; // r14
  unsigned __int16 v23; // ax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool v28; // al
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rsi
  __int16 v33; // ax
  __int64 v34; // rdx
  bool v35; // al
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // [rsp+8h] [rbp-C0h]
  __int64 v42; // [rsp+10h] [rbp-B8h]
  __int64 v43; // [rsp+18h] [rbp-B0h]
  __int64 v44; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+28h] [rbp-A0h]
  __int64 v46; // [rsp+40h] [rbp-88h] BYREF
  __int128 v47; // [rsp+48h] [rbp-80h]
  char v48; // [rsp+58h] [rbp-70h]
  __int64 v49; // [rsp+60h] [rbp-68h] BYREF
  __int128 v50; // [rsp+68h] [rbp-60h]
  char v51; // [rsp+78h] [rbp-50h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a3[1] != 1 )
    return v52 - __readfsqword(0x28u);
  v4 = *a3;
  v45 = 0;
  v7 = *(_QWORD *)(v4 + 8);
  v44 = 0;
  v44 = qvector_reserve(&v44, 0, 1, 8);
  *(_QWORD *)(v44 + 8 * v45) = v7;
  v8 = *(_WORD *)(v4 + 16);
  v9 = v45 + 1;
  *(_QWORD *)&v45 = v45 + 1;
  if ( ((v8 - 31) & 0xFFFD) != 0 )
    goto LABEL_4;
  v19 = *(_QWORD *)(v4 + 8);
  v48 = 0;
  v46 = 0;
  v47 = 0;
  v20 = sub_47600(a1, &v46, v19);
  v21 = v46;
  if ( !v20 )
    goto LABEL_39;
  v22 = v46;
  v41 = v46 + 24 * v47;
  if ( !(24LL * (_QWORD)v47) )
  {
LABEL_48:
    if ( v21 )
      qfree(v21);
    v9 = v45;
LABEL_4:
    v10 = (__int64 *)v44;
    v11 = (__int64 *)(v44 + 8 * v9);
    if ( v11 != (__int64 *)v44 )
    {
      do
      {
        v12 = a2[1];
        v13 = *v10;
        v14 = (_QWORD *)(*a2 + 8 * v12);
        if ( (_QWORD *)*a2 == v14 )
          goto LABEL_14;
        v15 = (_QWORD *)*a2;
        while ( v13 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_14;
        }
        if ( v14 == v15 )
        {
LABEL_14:
          v16 = v12 + 1;
          if ( a2[2] < v16 )
          {
            v17 = qvector_reserve(a2, *a2, v16, 8);
            v18 = a2[1];
            *a2 = v17;
            v14 = (_QWORD *)(v17 + 8 * v18);
          }
          *v14 = v13;
          ++a2[1];
        }
        ++v10;
      }
      while ( v11 != v10 );
      v10 = (__int64 *)v44;
    }
    if ( v10 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v10);
    }
    return v52 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v23 = *(_WORD *)(v22 + 16);
    if ( v23 == 135 )
      goto LABEL_44;
    if ( v23 > 0x87u )
    {
      if ( (unsigned __int16)(v23 - 204) > 1u )
        goto LABEL_39;
LABEL_44:
      v38 = v45;
      v39 = *(_QWORD *)(v22 + 8);
      v40 = v44;
      if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
      {
        v44 = qvector_reserve(&v44, v44, v45 + 1, 8);
        v40 = v44;
        v38 = v45;
      }
      *(_QWORD *)(v40 + 8 * v38) = v39;
      *(_QWORD *)&v45 = v45 + 1;
      goto LABEL_47;
    }
    if ( v23 != 21 )
      goto LABEL_39;
    v24 = v45;
    v25 = *(_QWORD *)(v22 + 8);
    v26 = v44;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v44 = qvector_reserve(&v44, v44, v45 + 1, 8);
      v26 = v44;
      v24 = v45;
    }
    *(_QWORD *)(v26 + 8 * v24) = v25;
    *(_QWORD *)&v45 = v45 + 1;
    v27 = *(_QWORD *)(v22 + 8);
    v51 = 0;
    v49 = 0;
    v50 = 0;
    v28 = sub_47600(a1, &v49, v27);
    v29 = v49;
    if ( !v28 || (_QWORD)v50 != 1 )
      break;
    v30 = v45;
    v31 = *(_QWORD *)(v49 + 8);
    v32 = v44;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v43 = *(_QWORD *)(v49 + 8);
      v44 = qvector_reserve(&v44, v44, v45 + 1, 8);
      v32 = v44;
      v31 = v43;
      v30 = v45;
    }
    *(_QWORD *)(v32 + 8 * v30) = v31;
    v33 = *(_WORD *)(v29 + 16);
    *(_QWORD *)&v45 = v45 + 1;
    if ( v33 != 204 )
    {
      if ( v33 != 21 )
        break;
      v34 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)&v50 = 1;
      v35 = sub_47600(a1, &v49, v34);
      v29 = v49;
      if ( !v35 || (_QWORD)v50 != 1 )
        break;
      v36 = v45;
      v37 = *(_QWORD *)(v49 + 8);
      if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
      {
        v42 = *(_QWORD *)(v49 + 8);
        v44 = qvector_reserve(&v44, v44, v45 + 1, 8);
        v37 = v42;
        v36 = v45;
      }
      *(_QWORD *)(v44 + 8 * v36) = v37;
      *(_QWORD *)&v45 = v45 + 1;
      if ( *(_WORD *)(v29 + 16) != 204 )
        break;
    }
    if ( v29 )
      qfree(v29);
LABEL_47:
    v22 += 24;
    if ( v22 == v41 )
      goto LABEL_48;
  }
  if ( v29 )
    qfree(v29);
LABEL_39:
  if ( v21 )
    qfree(v21);
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  return v52 - __readfsqword(0x28u);
}

