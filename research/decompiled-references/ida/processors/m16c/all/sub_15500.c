__int64 __fastcall sub_15500(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v6; // r10
  _QWORD *v7; // r15
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-58h]
  unsigned __int64 v33; // [rsp+0h] [rbp-58h]
  unsigned __int64 v34; // [rsp+0h] [rbp-58h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+10h] [rbp-48h]

  v6 = a4;
  v7 = a2 + 3;
  if ( a3 )
  {
    v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v11 == sub_153C0 )
    {
      v12 = a2[4];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a2[4];
        v15 = a2[3];
        --v12;
        v7 = a2 + 3;
        if ( a2[5] >= v13 )
        {
LABEL_5:
          a2[4] = v13;
          *(_BYTE *)(v15 + v12) = 32;
          *(_BYTE *)(a2[3] + v14) = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v15 = a2[3];
        v14 = 1;
        v13 = 2;
        v7 = a2 + 3;
        if ( a2[5] >= 2u )
          goto LABEL_5;
      }
      v40 = v12;
      v38 = v14;
      v34 = v13;
      v31 = qvector_reserve();
      v6 = a4;
      v12 = v40;
      v14 = v38;
      v13 = v34;
      a2[3] = v31;
      v15 = v31;
      goto LABEL_5;
    }
    v11(a2, 32);
    v6 = a4;
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 56LL))(a2, v6, 0);
  v16 = getinf();
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a2 + 48LL))(a2, v7, v16 - 1);
  v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v17 == sub_153C0 )
  {
    v18 = a2[4];
    if ( v18 )
    {
      v21 = v18 + 1;
      v20 = a2[4];
      v19 = a2[3];
      --v18;
      if ( a2[5] >= v21 )
        goto LABEL_9;
    }
    else
    {
      v19 = a2[3];
      v20 = 1;
      v21 = 2;
      if ( a2[5] >= 2u )
      {
LABEL_9:
        a2[4] = v21;
        *(_BYTE *)(v19 + v18) = 32;
        *(_BYTE *)(a2[3] + v20) = 0;
        goto LABEL_10;
      }
    }
    v39 = v20;
    v36 = v18;
    v32 = v21;
    v29 = qvector_reserve();
    v20 = v39;
    v18 = v36;
    a2[3] = v29;
    v21 = v32;
    v19 = v29;
    goto LABEL_9;
  }
  v17(a2, 32);
LABEL_10:
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL), 32);
  v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
  if ( v22 != sub_153C0 )
  {
    v22(a2, 32);
    goto LABEL_14;
  }
  v23 = a2[4];
  if ( !v23 )
  {
    v26 = a2[3];
    v25 = 1;
    v24 = 2;
    if ( a2[5] >= 2u )
      goto LABEL_13;
LABEL_21:
    v37 = v25;
    v33 = v24;
    v30 = qvector_reserve();
    v25 = v37;
    v24 = v33;
    a2[3] = v30;
    v26 = v30;
    goto LABEL_13;
  }
  v24 = v23 + 1;
  v25 = a2[4];
  v26 = a2[3];
  --v23;
  if ( a2[5] < v24 )
    goto LABEL_21;
LABEL_13:
  a2[4] = v24;
  *(_BYTE *)(v26 + v23) = 32;
  *(_BYTE *)(a2[3] + v25) = 0;
LABEL_14:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 12);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, a5, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 12);
  if ( a6 && *a6 )
    sub_15440((__int64)a2, (__int64)&word_1BE06, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), a6);
  v27 = *a2;
  *((_DWORD *)a2 + 36) &= 0xFFFFE7FF;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(v27 + 128))(a2, 0x80000000LL);
}

