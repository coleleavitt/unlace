__int64 __fastcall sub_7590(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // r14
  unsigned __int8 v10; // al
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_QWORD *, char); // rax
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(_QWORD *, char); // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+10h] [rbp-48h]
  __int64 v43; // [rsp+18h] [rbp-40h]
  __int64 v44; // [rsp+18h] [rbp-40h]

  v9 = a2 + 3;
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(a1 + 168), 32);
  v10 = getinf();
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a2 + 48LL))(a2, a2 + 3, v10 - 1);
  v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v11 == sub_7510 )
  {
    v12 = a2[4];
    if ( v12 )
    {
      v15 = v12 + 1;
      v14 = a2[4];
      v13 = a2[3];
      --v12;
      if ( a2[5] >= v15 )
        goto LABEL_4;
    }
    else
    {
      v13 = a2[3];
      v14 = 1;
      v15 = 2;
      if ( a2[5] >= 2u )
      {
LABEL_4:
        a2[4] = v15;
        *(_BYTE *)(v13 + v12) = 32;
        *(_BYTE *)(a2[3] + v14) = 0;
        goto LABEL_5;
      }
    }
    v43 = v14;
    v40 = v12;
    v37 = v15;
    v33 = qvector_reserve();
    v14 = v43;
    v12 = v40;
    a2[3] = v33;
    v15 = v37;
    v13 = v33;
    goto LABEL_4;
  }
  v11(a2, 32);
LABEL_5:
  if ( !a3 )
    goto LABEL_10;
  v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v16 == sub_7510 )
  {
    v17 = a2[4];
    if ( v17 )
    {
      v18 = v17 + 1;
      v19 = a2[4];
      v20 = a2[3];
      --v17;
      if ( a2[5] >= v18 )
      {
LABEL_9:
        a2[4] = v18;
        *(_BYTE *)(v20 + v17) = 32;
        *(_BYTE *)(a2[3] + v19) = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v20 = a2[3];
      v19 = 1;
      v18 = 2;
      if ( a2[5] >= 2u )
        goto LABEL_9;
    }
    v44 = v17;
    v42 = v19;
    v39 = v18;
    v35 = qvector_reserve();
    v17 = v44;
    v19 = v42;
    a2[3] = v35;
    v18 = v39;
    v20 = v35;
    goto LABEL_9;
  }
  v16(a2, 32);
LABEL_10:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 56LL))(a2, a4, 0);
  v21 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v21 == sub_7510 )
  {
    v22 = a2[4];
    if ( v22 )
    {
      v23 = v22 + 1;
      v24 = a2[4];
      v25 = a2[3];
      --v22;
      if ( a2[5] >= v23 )
      {
LABEL_13:
        a2[4] = v23;
        *(_BYTE *)(v25 + v22) = 44;
        *(_BYTE *)(a2[3] + v24) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v25 = a2[3];
      v24 = 1;
      v23 = 2;
      if ( a2[5] >= 2u )
        goto LABEL_13;
    }
    v41 = v24;
    v38 = v23;
    v34 = qvector_reserve();
    v24 = v41;
    v23 = v38;
    a2[3] = v34;
    v25 = v34;
    goto LABEL_13;
  }
  v21(a2, 44);
LABEL_14:
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a2 + 48LL))(a2, v9, 30);
  if ( a3 )
  {
    v26 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v26 != sub_7510 )
    {
      v26(a2, 32);
      goto LABEL_19;
    }
    v27 = a2[4];
    if ( v27 )
    {
      v28 = v27 + 1;
      v29 = a2[4];
      v30 = a2[3];
      --v27;
      if ( a2[5] >= v28 )
      {
LABEL_18:
        a2[4] = v28;
        *(_BYTE *)(v30 + v27) = 32;
        *(_BYTE *)(a2[3] + v29) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v30 = a2[3];
      v29 = 1;
      v28 = 2;
      if ( a2[5] >= 2u )
        goto LABEL_18;
    }
    v36 = qvector_reserve();
    a2[3] = v36;
    v30 = v36;
    goto LABEL_18;
  }
LABEL_19:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 12);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, a5, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 12);
  v31 = *a2;
  *((_DWORD *)a2 + 36) |= 0x800u;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(v31 + 128))(a2, 0x80000000LL);
}

