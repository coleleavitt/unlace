__int64 __fastcall sub_6FA0(_QWORD *a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rsi
  __int16 v21; // dx
  char v22; // al
  __int64 (__fastcall *v23)(_QWORD *, char); // rax
  __int64 v24; // r12
  __int64 v25; // r14
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(_QWORD *, char); // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(_QWORD *, char); // rax
  __int64 v34; // rbp
  __int64 v35; // r13
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax

  if ( (a1[32] & 2) == 0 )
    goto LABEL_10;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "nop", 5);
  v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v1 != sub_68D0 )
  {
    v1(a1, 32);
    goto LABEL_6;
  }
  v2 = a1[4];
  if ( !v2 )
  {
    v5 = a1[3];
    v4 = 1;
    v3 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_5;
LABEL_53:
    v40 = qvector_reserve();
    a1[3] = v40;
    v5 = v40;
    goto LABEL_5;
  }
  v3 = v2 + 1;
  v4 = a1[4];
  v5 = a1[3];
  --v2;
  if ( a1[5] < v3 )
    goto LABEL_53;
LABEL_5:
  a1[4] = v3;
  *(_BYTE *)(v5 + v2) = 32;
  *(_BYTE *)(a1[3] + v4) = 0;
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
  v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v6 == sub_68D0 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = a1[4];
      v10 = a1[3];
      --v7;
      if ( a1[5] >= v8 )
      {
LABEL_9:
        a1[4] = v8;
        *(_BYTE *)(v10 + v7) = 32;
        *(_BYTE *)(a1[3] + v9) = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v10 = a1[3];
      v9 = 1;
      v8 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_9;
    }
    v39 = qvector_reserve();
    a1[3] = v39;
    v10 = v39;
    goto LABEL_9;
  }
  v6(a1, 32);
LABEL_10:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  if ( !*((_BYTE *)a1 + 305) )
    goto LABEL_16;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v11 != sub_68D0 )
  {
    v11(a1, 32);
    goto LABEL_15;
  }
  v12 = a1[4];
  if ( !v12 )
  {
    v15 = a1[3];
    v14 = 1;
    v13 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_14;
LABEL_55:
    v41 = qvector_reserve();
    a1[3] = v41;
    v15 = v41;
    goto LABEL_14;
  }
  v13 = v12 + 1;
  v14 = a1[4];
  v15 = a1[3];
  --v12;
  if ( a1[5] < v13 )
    goto LABEL_55;
LABEL_14:
  a1[4] = v13;
  *(_BYTE *)(v15 + v12) = 32;
  *(_BYTE *)(a1[3] + v14) = 0;
LABEL_15:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 1);
LABEL_16:
  if ( !*((_BYTE *)a1 + 345) )
    goto LABEL_22;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v16 != sub_68D0 )
  {
    v16(a1, 32);
    goto LABEL_21;
  }
  v17 = a1[4];
  if ( !v17 )
  {
    v20 = a1[3];
    v19 = 1;
    v18 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_20;
LABEL_57:
    v42 = qvector_reserve();
    a1[3] = v42;
    v20 = v42;
    goto LABEL_20;
  }
  v18 = v17 + 1;
  v19 = a1[4];
  v20 = a1[3];
  --v17;
  if ( a1[5] < v18 )
    goto LABEL_57;
LABEL_20:
  a1[4] = v18;
  *(_BYTE *)(v20 + v17) = 32;
  *(_BYTE *)(a1[3] + v19) = 0;
LABEL_21:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 2);
LABEL_22:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  v21 = *((_WORD *)a1 + 124);
  v22 = *((_BYTE *)a1 + 256);
  if ( (unsigned __int16)(v21 - 59) > 1u
    && (v22 & 1) != 0
    && (v21 != 29 && v21 != 76 || (a1[90] & 0xF000000LL) != 0xB000000) )
  {
    if ( *((_BYTE *)a1 + 265) )
    {
      v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v23 == sub_68D0 )
      {
        v24 = a1[4];
        if ( v24 )
        {
          v26 = v24 + 1;
          v25 = a1[4];
          --v24;
        }
        else
        {
          v25 = 1;
          v26 = 2;
        }
        v27 = a1[3];
        if ( a1[5] < v26 )
        {
          v45 = qvector_reserve();
          a1[3] = v45;
          v27 = v45;
        }
        a1[4] = v26;
        *(_BYTE *)(v27 + v24) = 32;
        *(_BYTE *)(a1[3] + v25) = 0;
      }
      else
      {
        v23(a1, 32);
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
    v28 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v28 == sub_68D0 )
    {
      v29 = a1[4];
      if ( v29 )
      {
        v30 = v29 + 1;
        v31 = a1[4];
        --v29;
      }
      else
      {
        v31 = 1;
        v30 = 2;
      }
      v32 = a1[3];
      if ( a1[5] < v30 )
      {
        v44 = qvector_reserve();
        a1[3] = v44;
        v32 = v44;
      }
      a1[4] = v30;
      *(_BYTE *)(v32 + v29) = 32;
      *(_BYTE *)(a1[3] + v31) = 0;
    }
    else
    {
      v28(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "nop", 5);
    v22 = *((_BYTE *)a1 + 256);
  }
  if ( (v22 & 4) != 0 )
  {
    if ( *((_BYTE *)a1 + 265) )
    {
      v33 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v33 == sub_68D0 )
      {
        v34 = a1[4];
        if ( v34 )
        {
          v36 = v34 + 1;
          v35 = a1[4];
          --v34;
        }
        else
        {
          v35 = 1;
          v36 = 2;
        }
        v37 = a1[3];
        if ( a1[5] < v36 )
        {
          v43 = qvector_reserve();
          a1[3] = v43;
          v37 = v43;
        }
        a1[4] = v36;
        *(_BYTE *)(v37 + v34) = 32;
        *(_BYTE *)(a1[3] + v35) = 0;
      }
      else
      {
        v33(a1, 32);
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 124);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 92);
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

