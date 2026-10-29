__int64 __fastcall sub_14830(_QWORD *a1)
{
  __int64 v1; // r13
  _BYTE *v2; // r12
  unsigned int i; // ebp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+0h] [rbp-48h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  v1 = a1[77];
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  if ( *((_BYTE *)a1 + 265) )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  v2 = (char *)a1 + 305;
  for ( i = 1; i != 4; ++i )
  {
    if ( *v2 == 1 )
    {
      if ( v2[31] )
        goto LABEL_6;
    }
    else if ( !*v2 )
    {
      goto LABEL_6;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v22 != sub_137C0 )
    {
      v22(a1, 32);
      goto LABEL_30;
    }
    v23 = a1[4];
    if ( v23 )
    {
      v24 = v23 + 1;
      v25 = a1[4];
      v26 = a1[3];
      --v23;
      if ( a1[5] < v24 )
        goto LABEL_32;
    }
    else
    {
      v26 = a1[3];
      v25 = 1;
      v24 = 2;
      if ( a1[5] < 2u )
      {
LABEL_32:
        v32 = v25;
        v31 = v24;
        v27 = qvector_reserve(a1 + 3, v26, v24, 1);
        v25 = v32;
        v24 = v31;
        a1[3] = v27;
        v26 = v27;
      }
    }
    a1[4] = v24;
    *(_BYTE *)(v26 + v23) = 32;
    *(_BYTE *)(a1[3] + v25) = 0;
LABEL_30:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, i);
LABEL_6:
    v2 += 40;
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  v4 = netnode_altval(*(_QWORD *)(v1 + 120), a1[30], 833);
  if ( v4 != -1 || (v4 = netnode_altval(*(_QWORD *)(v1 + 120), a1[30], 868), v4 != -1) )
    a1[19] = v4 & 0xFFFFFFFFFFFFFFFELL;
  v5 = a1[10];
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v6 == sub_137C0 )
    {
      v7 = a1[4];
      if ( v7 )
      {
        v10 = v7 + 1;
        v9 = a1[4];
        v8 = a1[3];
        --v7;
        if ( a1[5] < v10 )
          goto LABEL_34;
      }
      else
      {
        v8 = a1[3];
        v9 = 1;
        v10 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_13;
LABEL_34:
        v28 = qvector_reserve(a1 + 3, v8, v10, 1);
        a1[3] = v28;
        v8 = v28;
      }
LABEL_13:
      a1[4] = v10;
      *(_BYTE *)(v8 + v7) = 32;
      *(_BYTE *)(a1[3] + v9) = 0;
    }
    else
    {
      v6(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
    v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v11 == sub_137C0 )
    {
      v12 = a1[4];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a1[4];
        v15 = a1[3];
        --v12;
        if ( a1[5] >= v13 )
          goto LABEL_17;
LABEL_36:
        v29 = qvector_reserve(a1 + 3, v15, v13, 1);
        a1[3] = v29;
        v15 = v29;
      }
      else
      {
        v15 = a1[3];
        v14 = 1;
        v13 = 2;
        if ( a1[5] < 2u )
          goto LABEL_36;
      }
LABEL_17:
      a1[4] = v13;
      *(_BYTE *)(v15 + v12) = 32;
      *(_BYTE *)(a1[3] + v14) = 0;
    }
    else
    {
      v11(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v5, 4);
    if ( *(_QWORD *)(a1[79] + 336LL) )
    {
      v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v16 == sub_137C0 )
      {
        v17 = a1[4];
        if ( v17 )
        {
          v20 = v17 + 1;
          v19 = a1[4];
          v18 = a1[3];
          --v17;
          if ( a1[5] < v20 )
            goto LABEL_41;
        }
        else
        {
          v18 = a1[3];
          v19 = 1;
          v20 = 2;
          if ( a1[5] >= 2u )
            goto LABEL_22;
LABEL_41:
          v30 = qvector_reserve(a1 + 3, v18, v20, 1);
          a1[3] = v30;
          v18 = v30;
        }
LABEL_22:
        a1[4] = v20;
        *(_BYTE *)(v18 + v17) = 32;
        *(_BYTE *)(a1[3] + v19) = 0;
      }
      else
      {
        v16(a1, 32);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 336LL), 4);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

