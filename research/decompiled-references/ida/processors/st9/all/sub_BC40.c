__int64 __fastcall sub_BC40(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_QWORD *, char); // rax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *(_BYTE *)(a1 + 305) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v1 != sub_AD30 )
    {
      v1((_QWORD *)a1, 32);
      goto LABEL_6;
    }
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = v2 + 1;
      v4 = *(_QWORD *)(a1 + 32);
      v5 = *(_QWORD *)(a1 + 24);
      --v2;
      if ( *(_QWORD *)(a1 + 40) >= v3 )
      {
LABEL_5:
        *(_QWORD *)(a1 + 32) = v3;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v4) = 0;
LABEL_6:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
        goto LABEL_7;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
      v4 = 1;
      v3 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_5;
    }
    v29 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v29;
    v5 = v29;
    goto LABEL_5;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 345) )
    goto LABEL_13;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
  v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v6 != sub_AD30 )
  {
    v6((_QWORD *)a1, 32);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v9 = 1;
    v8 = 2;
    if ( *(_QWORD *)(a1 + 40) >= 2u )
      goto LABEL_11;
LABEL_37:
    v30 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v30;
    v10 = v30;
    goto LABEL_11;
  }
  v8 = v7 + 1;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  --v7;
  if ( *(_QWORD *)(a1 + 40) < v8 )
    goto LABEL_37;
LABEL_11:
  *(_QWORD *)(a1 + 32) = v8;
  *(_BYTE *)(v10 + v7) = 32;
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
LABEL_12:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
LABEL_13:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 616) + 4664LL) )
  {
    v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v11 != sub_AD30 )
    {
      v11((_QWORD *)a1, 32);
LABEL_18:
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL),
        4);
      v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v16 != sub_AD30 )
      {
        v16((_QWORD *)a1, 32);
LABEL_22:
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1 + 616) + 4664LL),
          4);
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 632) + 336LL) )
        {
LABEL_28:
          *(_QWORD *)(*(_QWORD *)(a1 + 616) + 4664LL) = 0;
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
        }
        v21 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v21 != sub_AD30 )
        {
          v21((_QWORD *)a1, 32);
          goto LABEL_27;
        }
        v22 = *(_QWORD *)(a1 + 32);
        if ( v22 )
        {
          v25 = v22 + 1;
          v24 = *(_QWORD *)(a1 + 32);
          v23 = *(_QWORD *)(a1 + 24);
          --v22;
          if ( *(_QWORD *)(a1 + 40) >= v25 )
            goto LABEL_26;
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 24);
          v24 = 1;
          v25 = 2;
          if ( *(_QWORD *)(a1 + 40) >= 2u )
          {
LABEL_26:
            *(_QWORD *)(a1 + 32) = v25;
            *(_BYTE *)(v23 + v22) = 32;
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v24) = 0;
LABEL_27:
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a1 + 632) + 336LL),
              4);
            goto LABEL_28;
          }
        }
        v31 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v31;
        v23 = v31;
        goto LABEL_26;
      }
      v17 = *(_QWORD *)(a1 + 32);
      if ( v17 )
      {
        v18 = v17 + 1;
        v19 = *(_QWORD *)(a1 + 32);
        v20 = *(_QWORD *)(a1 + 24);
        --v17;
        if ( *(_QWORD *)(a1 + 40) >= v18 )
        {
LABEL_21:
          *(_QWORD *)(a1 + 32) = v18;
          *(_BYTE *)(v20 + v17) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v19) = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 24);
        v19 = 1;
        v18 = 2;
        if ( *(_QWORD *)(a1 + 40) >= 2u )
          goto LABEL_21;
      }
      v28 = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v28;
      v20 = v28;
      goto LABEL_21;
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      v15 = v12 + 1;
      v14 = *(_QWORD *)(a1 + 32);
      v13 = *(_QWORD *)(a1 + 24);
      --v12;
      if ( *(_QWORD *)(a1 + 40) >= v15 )
        goto LABEL_17;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 24);
      v14 = 1;
      v15 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
      {
LABEL_17:
        *(_QWORD *)(a1 + 32) = v15;
        *(_BYTE *)(v13 + v12) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v14) = 0;
        goto LABEL_18;
      }
    }
    v27 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v27;
    v13 = v27;
    goto LABEL_17;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

