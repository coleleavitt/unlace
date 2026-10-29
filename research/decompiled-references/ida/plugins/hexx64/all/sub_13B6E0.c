_BOOL8 __fastcall sub_13B6E0(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r12
  char v11; // al
  __int64 v12; // r15
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbp
  __int64 *v18; // rdi
  bool v19; // al
  char v20; // al
  int v21; // r8d
  int v22; // r9d
  char v23; // al
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  char v34; // al
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r9d
  unsigned __int8 v38; // al
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  char v42; // al
  __int64 v43; // rcx
  int v44; // r8d
  int v45; // r9d
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // [rsp+0h] [rbp-C8h]
  bool v49; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v50; // [rsp+0h] [rbp-C8h]
  __int64 v51; // [rsp+10h] [rbp-B8h]
  int v52; // [rsp+1Ch] [rbp-ACh]
  __int64 v53; // [rsp+20h] [rbp-A8h]
  __int64 v54[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 *v55; // [rsp+40h] [rbp-88h] BYREF
  __int64 v56; // [rsp+48h] [rbp-80h]
  __int64 v57; // [rsp+50h] [rbp-78h]
  __int64 v58; // [rsp+60h] [rbp-68h] BYREF
  __int64 v59; // [rsp+68h] [rbp-60h]
  __int64 *v60; // [rsp+70h] [rbp-58h] BYREF
  __int128 v61; // [rsp+78h] [rbp-50h]
  unsigned __int64 v62; // [rsp+88h] [rbp-40h]

  v3 = a1[7];
  v62 = __readfsqword(0x28u);
  v5 = sub_13B260(a1, v3, a2);
  if ( !v5 )
    return 0;
  v9 = v5;
  if ( *(_DWORD *)(v5 + 76) == 6 || *(_DWORD *)(v5 + 352) != 1 || *(_BYTE *)(v3 + 48) != 2 )
    return 0;
  v11 = *(_BYTE *)(v3 + 32);
  if ( (unsigned __int8)(v11 - 5) <= 1u || v11 == 1 )
  {
    v12 = 0;
    v48 = v3 + 32;
    v53 = v3 + 48;
    v52 = (unsigned __int8)sub_13B3C0(v9, v3 + 48, v3 + 32, v6, v7, v8, a2, a3);
    sub_127A20((__int64)v54, (__int64)a1, v3, 1, v13, v14, a2, a3);
    goto LABEL_9;
  }
  if ( v11 != 4 )
    return 0;
  v51 = *(_QWORD *)(a1[60] + 112LL);
  sub_124680((__int64)v54, (__int64)a1, v3, 1, a2, a3);
  v12 = *(_QWORD *)(v3 + 16);
  if ( !v12 )
  {
LABEL_46:
    sub_93B40(v54);
    return 0;
  }
  while ( 1 )
  {
    sub_127A20((__int64)&v58, (__int64)a1, v12, 1, v29, v30, a2, a3);
    if ( (unsigned __int8)sub_64780(v54, &v58) || (unsigned __int8)sub_318470(&v55, (__int64)&v60) )
      goto LABEL_45;
    if ( sub_125B90((unsigned __int8 *)v12, v51, *(unsigned int **)(v3 + 40), 0, a2) )
      break;
    sub_64280(v54, &v58, a2);
    sub_316CB0((__int64 *)&v55, &v60, v31, v32);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v60);
    }
    qfree(v58);
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_46;
  }
  v48 = v12 + 64;
  v42 = *(_BYTE *)(v12 + 64);
  if ( (unsigned __int8)(v42 - 5) > 1u && v42 != 1 || *(_DWORD *)(v12 + 68) != *(_DWORD *)(v3 + 52) )
  {
LABEL_45:
    sub_93B40(&v58);
    goto LABEL_46;
  }
  sub_93B40(&v58);
  sub_93B40(v54);
  v53 = v3 + 48;
  v52 = (unsigned __int8)sub_13B3C0(v9, v3 + 48, v48, v43, v44, v45, a2, a3);
  sub_127A20((__int64)v54, (__int64)a1, v3, 1, v46, v47, a2, a3);
  if ( v3 == v12 )
    v12 = 0;
LABEL_9:
  v17 = *(_QWORD *)(v3 + 16);
  if ( v12 == v17 )
    goto LABEL_14;
  while ( 1 )
  {
    v61 = 0;
    v58 = 0;
    v59 = 0;
    v60 = nullptr;
    sub_127FE0((__int64)a1, &v58, v48, 1, v15, v16, 0.0, a3);
    if ( (unsigned __int8)sub_64780(v54, &v58) )
    {
      v18 = v60;
      if ( !v60 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v20 = sub_318470(&v55, (__int64)&v60);
    v18 = v60;
    if ( v20 )
      break;
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v60);
    }
    qfree(v58);
    if ( *(_DWORD *)v17 != 4 )
      goto LABEL_29;
    v23 = *(_BYTE *)(v17 + 32);
    if ( ((unsigned __int8)(v23 - 5) <= 1u || v23 == 1) && sub_125B60((unsigned __int8 *)(v17 + 64), v48, 0, 0.0) )
    {
      a3 = 0;
      v58 = 0;
      v59 = 0;
      v60 = nullptr;
      v61 = 0;
      sub_127FE0((__int64)a1, &v58, v17 + 32, 1, v21, v22, 0.0, (__m128)0LL);
      if ( (unsigned __int8)sub_64780(v54, &v58) )
      {
        v27 = v60;
        if ( v60 )
          goto LABEL_36;
      }
      else
      {
        v33 = sub_318470(&v55, (__int64)&v60);
        v27 = v60;
        if ( !v33 )
        {
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree((__int64)v60);
          }
          qfree(v58);
          v38 = sub_13B3C0(v9, v53, v17 + 32, v35, v36, v37, 0.0, (__m128)0LL);
          v54[1] = 0;
          if ( v55 )
          {
            v50 = v38;
            v56 = 0;
            qfree((__int64)v55);
            v55 = nullptr;
            v38 = v50;
            v57 = 0;
          }
          v52 += v38;
          v48 = v17 + 32;
          goto LABEL_32;
        }
        if ( v60 )
        {
LABEL_36:
          *(_QWORD *)&v61 = 0;
          qfree((__int64)v27);
        }
      }
      qfree(v58);
    }
    v24 = *(_BYTE *)(v17 + 64);
    if ( (unsigned __int8)(v24 - 5) > 1u && v24 != 1 || !sub_125B60((unsigned __int8 *)(v17 + 32), v48, 0, 0.0) )
      goto LABEL_29;
    v58 = 0;
    v59 = 0;
    v60 = nullptr;
    v61 = 0;
    sub_127FE0((__int64)a1, &v58, v17 + 64, 1, v21, v22, 0.0, a3);
    if ( !(unsigned __int8)sub_64780(v54, &v58) )
    {
      v34 = sub_318470(&v55, (__int64)&v60);
      v28 = v60;
      if ( !v34 )
      {
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree((__int64)v60);
        }
        qfree(v58);
        v52 += (unsigned __int8)sub_13B3C0(v9, v53, v17 + 64, v39, v40, v41, 0.0, a3);
        goto LABEL_32;
      }
      if ( !v60 )
        goto LABEL_41;
LABEL_40:
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v28);
      goto LABEL_41;
    }
    v28 = v60;
    if ( v60 )
      goto LABEL_40;
LABEL_41:
    qfree(v58);
LABEL_29:
    sub_127A20((__int64)&v58, (__int64)a1, v17, 1, v21, v22, 0.0, a3);
    sub_64280(v54, &v58, 0.0);
    sub_316CB0((__int64 *)&v55, &v60, v25, v26);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v60);
    }
    qfree(v58);
LABEL_32:
    v17 = *(_QWORD *)(v17 + 16);
    if ( v12 == v17 )
      goto LABEL_14;
  }
  if ( v60 )
  {
LABEL_12:
    *(_QWORD *)&v61 = 0;
    qfree((__int64)v18);
  }
LABEL_13:
  qfree(v58);
LABEL_14:
  v19 = v52 != 0;
  if ( v55 )
  {
    v56 = 0;
    qfree((__int64)v55);
    v19 = v52 != 0;
  }
  v49 = v19;
  qfree(v54[0]);
  return v49;
}

