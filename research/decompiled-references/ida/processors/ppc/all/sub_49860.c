__int64 __fastcall sub_49860(_QWORD *a1)
{
  unsigned int v1; // r12d
  _BYTE *v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

  v1 = 0;
  v2 = (char *)a1 + 265;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v3 = 0;
  do
  {
    if ( *v2 && (v2[3] & 8) != 0 )
    {
      if ( !v3 )
      {
LABEL_9:
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, v1);
        v3 = 1;
        goto LABEL_10;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v4 != sub_48150 )
      {
        v4(a1, 32);
        goto LABEL_9;
      }
      v5 = a1[4];
      if ( v5 )
      {
        v6 = v5 + 1;
        v7 = a1[4];
        v8 = a1[3];
        --v5;
        if ( a1[5] >= v6 )
        {
LABEL_8:
          a1[4] = v6;
          *(_BYTE *)(v8 + v5) = 32;
          *(_BYTE *)(a1[3] + v7) = 0;
          goto LABEL_9;
        }
      }
      else
      {
        v8 = a1[3];
        v7 = 1;
        v6 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_8;
      }
      v30 = v7;
      v26 = qvector_reserve(a1 + 3, v8, v6, 1);
      v7 = v30;
      a1[3] = v26;
      v8 = v26;
      goto LABEL_8;
    }
LABEL_10:
    ++v1;
    v2 += 40;
  }
  while ( v1 != 6 );
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  sub_48810(a1);
  v9 = a1[10];
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v10 == sub_48150 )
    {
      v11 = a1[4];
      if ( v11 )
      {
        v14 = v11 + 1;
        v13 = a1[4];
        v12 = a1[3];
        --v11;
        if ( a1[5] < v14 )
          goto LABEL_30;
      }
      else
      {
        v12 = a1[3];
        v13 = 1;
        v14 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_15;
LABEL_30:
        v27 = qvector_reserve(a1 + 3, v12, v14, 1);
        a1[3] = v27;
        v12 = v27;
      }
LABEL_15:
      a1[4] = v14;
      *(_BYTE *)(v12 + v11) = 32;
      *(_BYTE *)(a1[3] + v13) = 0;
    }
    else
    {
      v10(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
    v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v15 == sub_48150 )
    {
      v16 = a1[4];
      if ( v16 )
      {
        v17 = v16 + 1;
        v18 = a1[4];
        v19 = a1[3];
        --v16;
        if ( a1[5] >= v17 )
          goto LABEL_19;
LABEL_32:
        v28 = qvector_reserve(a1 + 3, v19, v17, 1);
        a1[3] = v28;
        v19 = v28;
      }
      else
      {
        v19 = a1[3];
        v18 = 1;
        v17 = 2;
        if ( a1[5] < 2u )
          goto LABEL_32;
      }
LABEL_19:
      a1[4] = v17;
      *(_BYTE *)(v19 + v16) = 32;
      *(_BYTE *)(a1[3] + v18) = 0;
    }
    else
    {
      v15(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v9, 4);
    if ( *(_QWORD *)(a1[79] + 336LL) )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v20 == sub_48150 )
      {
        v21 = a1[4];
        if ( v21 )
        {
          v24 = v21 + 1;
          v23 = a1[4];
          v22 = a1[3];
          --v21;
          if ( a1[5] < v24 )
            goto LABEL_35;
        }
        else
        {
          v22 = a1[3];
          v23 = 1;
          v24 = 2;
          if ( a1[5] >= 2u )
            goto LABEL_24;
LABEL_35:
          v29 = qvector_reserve(a1 + 3, v22, v24, 1);
          a1[3] = v29;
          v22 = v29;
        }
LABEL_24:
        a1[4] = v24;
        *(_BYTE *)(v22 + v21) = 32;
        *(_BYTE *)(a1[3] + v23) = 0;
      }
      else
      {
        v20(a1, 32);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 336LL), 4);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

