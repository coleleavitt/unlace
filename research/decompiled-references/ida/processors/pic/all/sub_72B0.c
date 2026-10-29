__int64 __fastcall sub_72B0(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // r14
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  v6 = a2 + 3;
  if ( a3 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v9 == sub_7230 )
    {
      v10 = a2[4];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = a2[4];
        v13 = a2[3];
        --v10;
        v6 = a2 + 3;
        if ( a2[5] >= v11 )
        {
LABEL_5:
          a2[4] = v11;
          *(_BYTE *)(v13 + v10) = 32;
          *(_BYTE *)(a2[3] + v12) = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v13 = a2[3];
        v12 = 1;
        v11 = 2;
        v6 = a2 + 3;
        if ( a2[5] >= 2u )
          goto LABEL_5;
      }
      v34 = v10;
      v33 = v12;
      v31 = v11;
      v29 = qvector_reserve();
      v10 = v34;
      v12 = v33;
      a2[3] = v29;
      v11 = v31;
      v13 = v29;
      goto LABEL_5;
    }
    v9(a2, 32);
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 56LL))(a2, a4, 0);
  v14 = getinf();
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a2 + 48LL))(a2, v6, v14 - 1);
  v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v15 == sub_7230 )
  {
    v16 = a2[4];
    if ( v16 )
    {
      v19 = v16 + 1;
      v18 = a2[4];
      v17 = a2[3];
      --v16;
      if ( a2[5] >= v19 )
        goto LABEL_9;
    }
    else
    {
      v17 = a2[3];
      v18 = 1;
      v19 = 2;
      if ( a2[5] >= 2u )
      {
LABEL_9:
        a2[4] = v19;
        *(_BYTE *)(v17 + v16) = 32;
        *(_BYTE *)(a2[3] + v18) = 0;
        goto LABEL_10;
      }
    }
    v32 = v18;
    v30 = v19;
    v27 = qvector_reserve();
    v18 = v32;
    v19 = v30;
    a2[3] = v27;
    v17 = v27;
    goto LABEL_9;
  }
  v15(a2, 32);
LABEL_10:
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL), 32);
  v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v20 != sub_7230 )
  {
    v20(a2, 32);
    goto LABEL_14;
  }
  v21 = a2[4];
  if ( !v21 )
  {
    v24 = a2[3];
    v23 = 1;
    v22 = 2;
    if ( a2[5] >= 2u )
      goto LABEL_13;
LABEL_18:
    v28 = qvector_reserve();
    a2[3] = v28;
    v24 = v28;
    goto LABEL_13;
  }
  v22 = v21 + 1;
  v23 = a2[4];
  v24 = a2[3];
  --v21;
  if ( a2[5] < v22 )
    goto LABEL_18;
LABEL_13:
  a2[4] = v22;
  *(_BYTE *)(v24 + v21) = 32;
  *(_BYTE *)(a2[3] + v23) = 0;
LABEL_14:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 12);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, a5, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 12);
  v25 = *a2;
  *((_DWORD *)a2 + 36) |= 0x800u;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(v25 + 128))(a2, 0x80000000LL);
}

