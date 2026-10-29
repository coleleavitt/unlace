__int64 __fastcall sub_14180(__int64 *a1)
{
  char v1; // dl
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  void (__fastcall *v6)(__int64 *, __int64); // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  void (__fastcall *v15)(__int64 *, __int64); // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  void (__fastcall *v23)(__int64 *, __int64); // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  void (__fastcall *v30)(__int64 *, __int64); // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // r9
  void (__fastcall *v37)(__int64 *, __int64); // rax
  __int64 v38; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax

  (*(void (__fastcall **)(__int64 *))(*a1 + 296))(a1);
  v1 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  v2 = *a1;
  if ( !v1 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v2 + 304))(a1, 1);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 3);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 4);
    goto LABEL_21;
  }
  if ( (*((_BYTE *)a1 + 308) & 8) != 0 && *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v2 + 32))(a1, 44);
    v23 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
    if ( (char *)v23 == (char *)sub_13CE0 )
    {
      v24 = a1[4];
      if ( v24 )
      {
        v25 = v24 + 1;
        v26 = a1[4];
        --v24;
      }
      else
      {
        v26 = 1;
        v25 = 2;
      }
      v27 = a1[3];
      if ( a1[5] < v25 )
      {
        v45 = qvector_reserve(a1 + 3, v27, v25, 1, v21, v22);
        a1[3] = v45;
        v27 = v45;
      }
      a1[4] = v25;
      *(_BYTE *)(v27 + v24) = 32;
      *(_BYTE *)(a1[3] + v26) = 0;
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
      v3 = *a1;
      if ( (*((_BYTE *)a1 + 348) & 8) == 0 )
        goto LABEL_29;
      goto LABEL_4;
    }
    v23(a1, 32);
    v2 = *a1;
  }
  (*(void (__fastcall **)(__int64 *, __int64))(v2 + 304))(a1, 1);
  v3 = *a1;
  if ( (*((_BYTE *)a1 + 348) & 8) == 0 )
  {
LABEL_29:
    (*(void (__fastcall **)(__int64 *, __int64))(v3 + 304))(a1, 2);
    goto LABEL_30;
  }
LABEL_4:
  if ( !*((_BYTE *)a1 + 345) )
    goto LABEL_29;
  (*(void (__fastcall **)(__int64 *, __int64))(v3 + 32))(a1, 44);
  v6 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
  if ( (char *)v6 == (char *)sub_13CE0 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = a1[4];
      --v7;
    }
    else
    {
      v9 = 1;
      v8 = 2;
    }
    v10 = a1[3];
    if ( a1[5] < v8 )
    {
      v43 = qvector_reserve(a1 + 3, v10, v8, 1, v4, v5);
      a1[3] = v43;
      v10 = v43;
    }
    a1[4] = v8;
    *(_BYTE *)(v10 + v7) = 32;
    *(_BYTE *)(a1[3] + v9) = 0;
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
    v11 = *a1;
    if ( (*((_BYTE *)a1 + 388) & 8) == 0 )
      goto LABEL_11;
    goto LABEL_31;
  }
  v6(a1, 32);
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
LABEL_30:
  v11 = *a1;
  if ( (*((_BYTE *)a1 + 388) & 8) == 0 )
  {
LABEL_11:
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 304))(a1, 3);
    goto LABEL_12;
  }
LABEL_31:
  if ( !*((_BYTE *)a1 + 385) )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64 *, __int64))(v11 + 32))(a1, 44);
  v30 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
  if ( (char *)v30 != (char *)sub_13CE0 )
  {
    v30(a1, 32);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 3);
LABEL_12:
    v12 = *a1;
    if ( (*((_BYTE *)a1 + 428) & 8) == 0 )
      goto LABEL_38;
    goto LABEL_13;
  }
  v31 = a1[4];
  if ( v31 )
  {
    v32 = v31 + 1;
    v33 = a1[4];
    --v31;
  }
  else
  {
    v33 = 1;
    v32 = 2;
  }
  v34 = a1[3];
  if ( a1[5] < v32 )
  {
    v44 = qvector_reserve(a1 + 3, v34, v32, 1, v28, v29);
    a1[3] = v44;
    v34 = v44;
  }
  a1[4] = v32;
  *(_BYTE *)(v34 + v31) = 32;
  *(_BYTE *)(a1[3] + v33) = 0;
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 3);
  v12 = *a1;
  if ( (*((_BYTE *)a1 + 428) & 8) == 0 )
    goto LABEL_38;
LABEL_13:
  if ( *((_BYTE *)a1 + 425) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v12 + 32))(a1, 44);
    v15 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
    if ( (char *)v15 == (char *)sub_13CE0 )
    {
      v16 = a1[4];
      if ( v16 )
      {
        v17 = v16 + 1;
        v18 = a1[4];
        --v16;
      }
      else
      {
        v18 = 1;
        v17 = 2;
      }
      v19 = a1[3];
      if ( a1[5] < v17 )
      {
        v46 = qvector_reserve(a1 + 3, v19, v17, 1, v13, v14);
        a1[3] = v46;
        v19 = v46;
      }
      a1[4] = v17;
      *(_BYTE *)(v19 + v16) = 32;
      *(_BYTE *)(a1[3] + v18) = 0;
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 4);
    }
    else
    {
      v15(a1, 32);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 4);
    }
    goto LABEL_39;
  }
LABEL_38:
  (*(void (__fastcall **)(__int64 *, __int64))(v12 + 304))(a1, 4);
LABEL_39:
  if ( (*((_BYTE *)a1 + 468) & 8) != 0 && *((_BYTE *)a1 + 465) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v37 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
    if ( (char *)v37 == (char *)sub_13CE0 )
    {
      v38 = a1[4];
      if ( v38 )
      {
        v39 = v38 + 1;
        v40 = a1[4];
        --v38;
      }
      else
      {
        v40 = 1;
        v39 = 2;
      }
      v41 = a1[3];
      if ( a1[5] < v39 )
      {
        v42 = qvector_reserve(a1 + 3, v41, v39, 1, v35, v36);
        a1[3] = v42;
        v41 = v42;
      }
      a1[4] = v39;
      *(_BYTE *)(v41 + v38) = 32;
      *(_BYTE *)(a1[3] + v40) = 0;
    }
    else
    {
      v37(a1, 32);
    }
  }
LABEL_21:
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 5);
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

