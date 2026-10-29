__int64 __fastcall sub_1C3200(int *a1, __int64 *a2, int a3, __int64 a4, int a5, char a6)
{
  int *v6; // r10
  int v8; // eax
  bool v9; // cc
  unsigned __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rdx
  bool v13; // r8
  int i; // esi
  int v15; // eax
  int v16; // ebx
  int *v17; // rcx
  int v18; // r12d
  unsigned __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  unsigned int v31; // ebx
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // edx
  int v37; // eax
  __int64 v38; // rax
  int v39; // [rsp+8h] [rbp-F0h]
  __int64 *v40; // [rsp+10h] [rbp-E8h]
  int v41; // [rsp+24h] [rbp-D4h]
  unsigned __int16 v42; // [rsp+2Ah] [rbp-CEh]
  int v43; // [rsp+2Ch] [rbp-CCh]
  __int64 *v44; // [rsp+30h] [rbp-C8h]
  __int64 *v45; // [rsp+30h] [rbp-C8h]
  int *v46; // [rsp+38h] [rbp-C0h]
  int *v47; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+40h] [rbp-B8h]
  __int64 v49; // [rsp+40h] [rbp-B8h]
  char v51; // [rsp+51h] [rbp-A7h]
  bool v52; // [rsp+53h] [rbp-A5h]
  bool v53; // [rsp+53h] [rbp-A5h]
  int v55; // [rsp+60h] [rbp-98h] BYREF
  __int64 v56; // [rsp+68h] [rbp-90h]
  int *v57; // [rsp+70h] [rbp-88h]
  int v58; // [rsp+78h] [rbp-80h]
  __int64 v59; // [rsp+7Ch] [rbp-7Ch]
  int v60; // [rsp+90h] [rbp-68h] BYREF
  __int64 v61; // [rsp+98h] [rbp-60h]
  __int64 v62; // [rsp+A0h] [rbp-58h]
  int v63; // [rsp+A8h] [rbp-50h]
  __int64 v64; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v65; // [rsp+B8h] [rbp-40h]

  v6 = a1;
  v65 = __readfsqword(0x28u);
  v55 = 0;
  v57 = a1;
  v51 = a6 & 1;
  v56 = 0;
  v58 = a3;
  v59 = 0;
  v43 = 0;
  while ( 2 )
  {
    v8 = *v6;
    if ( *v6 == 2 )
    {
      v6 = (int *)(**((_QWORD **)v6 + 1) + 24LL * (int)v59);
      v42 = *((_WORD *)v6 + 9);
      v39 = *((unsigned __int16 *)v6 + 8);
      v8 = *v6;
      v9 = *v6 <= 5;
      if ( *v6 != 5 )
        goto LABEL_5;
LABEL_55:
      v10 = **((_QWORD **)v6 + 1);
      goto LABEL_9;
    }
    v39 = 0;
    v42 = v58;
    if ( v8 == 4 )
    {
      v39 = v59;
      if ( (_DWORD)v59 )
      {
        v37 = *((unsigned __int16 *)v6 + 5);
        v39 = (unsigned __int16)(v58 / 2);
      }
      else
      {
        v37 = *((unsigned __int16 *)v6 + 4);
      }
      LODWORD(v56) = v37;
      v6 = &v55;
      v55 = 3;
      v42 = v58 / 2;
      goto LABEL_65;
    }
    v9 = v8 <= 5;
    if ( v8 == 5 )
      goto LABEL_55;
LABEL_5:
    if ( !v9 )
    {
      if ( v8 != 6 )
        goto LABEL_8;
LABEL_61:
      v10 = *((_QWORD *)v6 + 1);
      goto LABEL_9;
    }
    if ( v8 == 1 )
      goto LABEL_61;
    if ( v8 == 3 )
    {
LABEL_65:
      v10 = *((unsigned __int16 *)v6 + 4);
      goto LABEL_9;
    }
LABEL_8:
    v10 = -1;
LABEL_9:
    v11 = v42;
    v60 = 0;
    v12 = a4;
    v61 = 0;
    v63 = a5;
    v13 = v42 != 0;
    v62 = a4;
    v64 = 0;
    v41 = v39 - v43;
    for ( i = 0; ; i = (unsigned __int16)v16 + v18 )
    {
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 == 2 )
      {
        v17 = (int *)(**(_QWORD **)(v12 + 8) + 24LL * (int)v64);
        LOWORD(v16) = *((_WORD *)v17 + 9);
        v18 = *((unsigned __int16 *)v17 + 8);
        v15 = *v17;
      }
      else
      {
        LOWORD(v16) = v63;
        v17 = (int *)v12;
        v18 = 0;
        if ( v15 == 4 )
        {
          v18 = v64;
          if ( (_DWORD)v64 )
          {
            v34 = *(unsigned __int16 *)(v12 + 10);
            v18 = (unsigned __int16)(v63 / 2);
          }
          else
          {
            v34 = *(unsigned __int16 *)(v12 + 8);
          }
          LODWORD(v61) = v34;
          v17 = &v60;
          v60 = 3;
          v16 = v63 / 2;
          if ( *v6 != 3 )
            goto LABEL_36;
LABEL_49:
          v20 = *((unsigned __int16 *)v17 + 4);
          v19 = v20;
          goto LABEL_18;
        }
      }
      if ( *v6 != v15 )
        goto LABEL_36;
      if ( v15 == 5 )
      {
        v20 = **((_QWORD **)v17 + 1);
        v19 = v20;
        goto LABEL_18;
      }
      if ( v15 > 5 )
      {
        if ( v15 == 6 )
        {
LABEL_51:
          v20 = *((_QWORD *)v17 + 1);
          v19 = v20;
          goto LABEL_18;
        }
      }
      else
      {
        if ( v15 == 1 )
          goto LABEL_51;
        if ( v15 == 3 )
          goto LABEL_49;
      }
      v19 = -1;
      v20 = -1;
LABEL_18:
      if ( (_WORD)v16 && v13 && v42 - 1LL + v10 >= v19 && v19 + (unsigned __int16)v16 - 1 >= v10 )
      {
        if ( v10 == v20 && v51 && v18 - i == v41 && v39 != v43 )
        {
          v21 = a2[1];
          v22 = *a2;
          v23 = v21 + 1;
          if ( a2[2] < (unsigned __int64)(v21 + 1) )
          {
            v49 = v11;
            v47 = v6;
            v53 = v13;
            v45 = a2;
            v38 = qvector_reserve();
            a2 = v45;
            v22 = v38;
            v11 = v49;
            v6 = v47;
            v13 = v53;
            *v45 = v38;
            v21 = v45[1];
            v23 = v21 + 1;
          }
          a2[1] = v23;
          v24 = v22 + 24 * v21;
          *(_DWORD *)(v24 + 16) = v43;
          *(_DWORD *)v24 = v41;
          *(_QWORD *)(v24 + 8) = -1;
          *(_DWORD *)(v24 + 20) = v18 + v43 - v39;
        }
        v25 = v20;
        v26 = *a2;
        if ( (__int64)v10 >= v20 )
          v25 = v10;
        v27 = v20 + (unsigned __int16)v16;
        if ( v27 > (__int64)(v11 + v10) )
          LODWORD(v27) = v11 + v10;
        v28 = a2[1];
        v29 = v28 + 1;
        if ( a2[2] < (unsigned __int64)(v28 + 1) )
        {
          v48 = v11;
          v46 = v6;
          v52 = v13;
          v44 = a2;
          v35 = qvector_reserve();
          a2 = v44;
          v26 = v35;
          v11 = v48;
          v6 = v46;
          v13 = v52;
          *v44 = v35;
          v28 = v44[1];
          v29 = v28 + 1;
        }
        a2[1] = v29;
        v30 = (_DWORD *)(v26 + 24 * v28);
        *v30 = v27 - v25;
        v30[4] = v25 + v39 - v10;
        v30[5] = v18 + v25 - v20;
        v12 = v62;
      }
LABEL_36:
      if ( *(_DWORD *)v12 != 2 )
        break;
      v33 = v64 + 1;
      if ( (unsigned __int64)((int)v64 + 1) >= *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) )
        goto LABEL_38;
LABEL_43:
      v64 = v33;
    }
    if ( *(_DWORD *)v12 == 4 && !(_DWORD)v64 )
    {
      v33 = 1;
      goto LABEL_43;
    }
LABEL_38:
    v40 = a2;
    cleanup_argloc();
    v6 = v57;
    a2 = v40;
    if ( *v57 == 2 )
    {
      v36 = v59 + 1;
      if ( (unsigned __int64)((int)v59 + 1) < *(_QWORD *)(*((_QWORD *)v57 + 1) + 8LL) )
        goto LABEL_57;
    }
    else if ( *v57 == 4 && !(_DWORD)v59 )
    {
      v36 = 1;
LABEL_57:
      v59 = v36;
      v43 = v42 + v39;
      continue;
    }
    break;
  }
  sub_1C3100(v40);
  v31 = *((_DWORD *)v40 + 2);
  cleanup_argloc();
  return v31;
}

