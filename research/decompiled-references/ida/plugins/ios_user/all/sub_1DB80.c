__int64 __fastcall sub_1DB80(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rax
  const char *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  const char *v9; // rsi
  _QWORD *v10; // r14
  const char *v11; // rdi
  int v12; // eax
  _QWORD *v13; // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  const char *v16; // rbx
  _QWORD *v17; // r13
  _QWORD *v18; // rbp
  const char *v19; // rsi
  _QWORD *v20; // r15
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  const char *v24; // rsi
  const char *v25; // rdi
  const char *v26; // rbx
  _QWORD *v27; // r15
  _QWORD *v28; // r12
  const char *v29; // rsi
  _QWORD *v30; // rbp
  const char *v31; // rdi
  int v32; // eax
  _QWORD *v33; // rcx
  unsigned int v34; // ebx
  const char *v35; // rsi
  const char *v36; // rdi
  unsigned int v37; // ebx
  _QWORD *v40; // [rsp+10h] [rbp-F8h]
  unsigned int v41; // [rsp+10h] [rbp-F8h]
  unsigned int v42; // [rsp+18h] [rbp-F0h]
  _QWORD *v43; // [rsp+20h] [rbp-E8h]
  __int64 v47; // [rsp+40h] [rbp-C8h]
  __int64 v48; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C8h]
  int v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h]
  __int128 v52; // [rsp+70h] [rbp-98h]
  int v53; // [rsp+80h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-78h]
  int v56; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int128 v58; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v4 = *(int *)(a1 + 1176);
  v52 = 0;
  v55 = 0;
  v58 = 0;
  v50 = -2;
  v5 = "x0";
  v51 = -1;
  v53 = -2;
  v54 = -1;
  v56 = -2;
  v57 = -1;
  if ( *(int *)(qword_8FB50 + 144 * v4 + 128) <= 4 )
    v5 = "r0";
  v47 = qvector_reserve();
  *(_WORD *)v47 = *(_WORD *)v5;
  *(_BYTE *)(v47 + 2) = 0;
  v6 = (_QWORD *)(a1 + 1248);
  if ( !*(_QWORD *)(a1 + 1256) )
    goto LABEL_16;
  v40 = (_QWORD *)(a1 + 1248);
  v7 = (_QWORD *)(a1 + 1248);
  v8 = *(_QWORD **)(a1 + 1256);
  do
  {
    if ( v8[5] )
    {
      v11 = (const char *)v8[4];
      v10 = v8;
      v9 = (const char *)v47;
    }
    else
    {
      v9 = (const char *)v47;
      v10 = v8;
      v11 = s;
    }
    v12 = strcmp(v11, v9);
    v13 = (_QWORD *)v8[2];
    v8 = (_QWORD *)v8[3];
    if ( v12 >= 0 )
    {
      v7 = v10;
      v8 = v13;
    }
  }
  while ( v8 );
  v6 = v40;
  v41 = -1;
  if ( v6 != v7 )
  {
    if ( v7[5] )
    {
      v14 = (const char *)v7[4];
      v15 = (const char *)v47;
    }
    else
    {
      v15 = (const char *)v47;
      v14 = s;
    }
    if ( strcmp(v15, v14) < 0 )
    {
LABEL_16:
      v41 = -1;
      goto LABEL_17;
    }
    v41 = *((_DWORD *)v7 + 14);
  }
LABEL_17:
  if ( v47 )
    qfree();
  v16 = "r1";
  if ( *(int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 128) > 4 )
    v16 = "x1";
  v48 = qvector_reserve();
  *(_WORD *)v48 = *(_WORD *)v16;
  *(_BYTE *)(v48 + 2) = 0;
  if ( !*(_QWORD *)(a1 + 1256) )
    goto LABEL_34;
  v17 = v6;
  v18 = *(_QWORD **)(a1 + 1256);
  do
  {
    if ( v18[5] )
    {
      v21 = (const char *)v18[4];
      v20 = v18;
      v19 = (const char *)v48;
    }
    else
    {
      v19 = (const char *)v48;
      v20 = v18;
      v21 = s;
    }
    v22 = strcmp(v21, v19);
    v23 = (_QWORD *)v18[2];
    v18 = (_QWORD *)v18[3];
    if ( v22 >= 0 )
    {
      v17 = v20;
      v18 = v23;
    }
  }
  while ( v18 );
  v42 = -1;
  if ( v6 != v17 )
  {
    if ( v17[5] )
    {
      v24 = (const char *)v17[4];
      v25 = (const char *)v48;
    }
    else
    {
      v25 = (const char *)v48;
      v24 = s;
    }
    if ( strcmp(v25, v24) < 0 )
    {
LABEL_34:
      v42 = -1;
      goto LABEL_35;
    }
    v42 = *((_DWORD *)v17 + 14);
  }
LABEL_35:
  if ( v48 )
    qfree();
  v26 = "r2";
  if ( *(int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 128) > 4 )
    v26 = "x2";
  v49 = qvector_reserve();
  *(_WORD *)v49 = *(_WORD *)v26;
  *(_BYTE *)(v49 + 2) = 0;
  if ( !*(_QWORD *)(a1 + 1256) )
    goto LABEL_52;
  v43 = v6;
  v27 = v6;
  v28 = *(_QWORD **)(a1 + 1256);
  do
  {
    if ( v28[5] )
    {
      v31 = (const char *)v28[4];
      v30 = v28;
      v29 = (const char *)v49;
    }
    else
    {
      v29 = (const char *)v49;
      v30 = v28;
      v31 = s;
    }
    v32 = strcmp(v31, v29);
    v33 = (_QWORD *)v28[2];
    v28 = (_QWORD *)v28[3];
    if ( v32 >= 0 )
    {
      v27 = v30;
      v28 = v33;
    }
  }
  while ( v28 );
  v34 = -1;
  if ( v43 != v27 )
  {
    if ( v27[5] )
    {
      v35 = (const char *)v27[4];
      v36 = (const char *)v49;
    }
    else
    {
      v36 = (const char *)v49;
      v35 = s;
    }
    if ( strcmp(v36, v35) < 0 )
    {
LABEL_52:
      v34 = -1;
      goto LABEL_53;
    }
    v34 = *((_DWORD *)v27 + 14);
  }
LABEL_53:
  if ( v49 )
    qfree();
  if ( (unsigned __int8)sub_46CE0(a1, *(unsigned int *)(a1 + 1364), &v50, v41)
    && (unsigned __int8)sub_46CE0(a1, *(unsigned int *)(a1 + 1364), &v53, v42)
    && (v37 = sub_46CE0(a1, *(unsigned int *)(a1 + 1364), &v56, v34), (_BYTE)v37) )
  {
    *a2 = v51;
    *a3 = v54;
    *a4 = v57;
  }
  else
  {
    v37 = 0;
  }
  if ( v56 >= -1 && v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v53 >= -1 && v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( v50 >= -1 && v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return v37;
}

