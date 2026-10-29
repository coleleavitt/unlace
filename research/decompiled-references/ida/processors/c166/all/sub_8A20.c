__int64 __fastcall sub_8A20(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 (__fastcall *v2)(_QWORD *, char); // rax
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v1 = a1[77];
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  *(_QWORD *)(v1 + 264) = -1;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v2 != sub_7CC0 )
    {
      v2(a1, 32);
      goto LABEL_6;
    }
    v3 = a1[4];
    if ( v3 )
    {
      v4 = v3 + 1;
      v5 = a1[4];
      v6 = a1[3];
      --v3;
      if ( a1[5] >= v4 )
      {
LABEL_5:
        a1[4] = v4;
        *(_BYTE *)(v6 + v3) = 32;
        *(_BYTE *)(a1[3] + v5) = 0;
LABEL_6:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 1);
        goto LABEL_7;
      }
    }
    else
    {
      v6 = a1[3];
      v5 = 1;
      v4 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_5;
    }
    v25 = qvector_reserve();
    a1[3] = v25;
    v6 = v25;
    goto LABEL_5;
  }
LABEL_7:
  if ( !*((_BYTE *)a1 + 345) )
    goto LABEL_13;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v7 != sub_7CC0 )
  {
    v7(a1, 32);
    goto LABEL_12;
  }
  v8 = a1[4];
  if ( !v8 )
  {
    v11 = a1[3];
    v10 = 1;
    v9 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_11;
LABEL_31:
    v26 = qvector_reserve();
    a1[3] = v26;
    v11 = v26;
    goto LABEL_11;
  }
  v9 = v8 + 1;
  v10 = a1[4];
  v11 = a1[3];
  --v8;
  if ( a1[5] < v9 )
    goto LABEL_31;
LABEL_11:
  a1[4] = v9;
  *(_BYTE *)(v11 + v8) = 32;
  *(_BYTE *)(a1[3] + v10) = 0;
LABEL_12:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 2);
LABEL_13:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  if ( *(_QWORD *)(v1 + 264) != -1 )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v12 != sub_7CC0 )
    {
      v12(a1, 32);
LABEL_18:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
      v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v17 != sub_7CC0 )
      {
        v17(a1, 32);
        goto LABEL_22;
      }
      v18 = a1[4];
      if ( v18 )
      {
        v19 = v18 + 1;
        v20 = a1[4];
        v21 = a1[3];
        --v18;
        if ( a1[5] >= v19 )
        {
LABEL_21:
          a1[4] = v19;
          *(_BYTE *)(v21 + v18) = 32;
          *(_BYTE *)(a1[3] + v20) = 0;
LABEL_22:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(v1 + 264), 16);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
          return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
        }
      }
      else
      {
        v21 = a1[3];
        v20 = 1;
        v19 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_21;
      }
      v24 = qvector_reserve();
      a1[3] = v24;
      v21 = v24;
      goto LABEL_21;
    }
    v13 = a1[4];
    if ( v13 )
    {
      v16 = v13 + 1;
      v15 = a1[4];
      v14 = a1[3];
      --v13;
      if ( a1[5] >= v16 )
        goto LABEL_17;
    }
    else
    {
      v14 = a1[3];
      v15 = 1;
      v16 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_17:
        a1[4] = v16;
        *(_BYTE *)(v14 + v13) = 32;
        *(_BYTE *)(a1[3] + v15) = 0;
        goto LABEL_18;
      }
    }
    v23 = qvector_reserve();
    a1[3] = v23;
    v14 = v23;
    goto LABEL_17;
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

