__int64 __fastcall sub_AED0(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD *, __int64, __int64); // rcx
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v5 = a1[79];
  v6 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL);
  if ( (*(_BYTE *)(v5 + 4) & 1) == 0 )
  {
    v6(a1, a2, 0);
    if ( (*(_BYTE *)(a1[79] + 4LL) & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v12 != sub_9F00 )
    {
      v12(a1, 32);
LABEL_13:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 168LL), 32);
      v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v17 != sub_9F00 )
      {
        v17(a1, 32);
        goto LABEL_17;
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
LABEL_16:
          a1[4] = v19;
          *(_BYTE *)(v21 + v18) = 32;
          *(_BYTE *)(a1[3] + v20) = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v21 = a1[3];
        v20 = 1;
        v19 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_16;
      }
      v25 = qvector_reserve();
      a1[3] = v25;
      v21 = v25;
      goto LABEL_16;
    }
    v13 = a1[4];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = a1[4];
      v16 = a1[3];
      --v13;
      if ( a1[5] >= v14 )
      {
LABEL_12:
        a1[4] = v14;
        *(_BYTE *)(v16 + v13) = 32;
        *(_BYTE *)(a1[3] + v15) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v16 = a1[3];
      v15 = 1;
      v14 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_12;
    }
    v26 = qvector_reserve();
    a1[3] = v26;
    v16 = v26;
    goto LABEL_12;
  }
  v6(a1, *(_QWORD *)(v5 + 168), 32);
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v7 != sub_9F00 )
  {
    v7(a1, 32);
    goto LABEL_6;
  }
  v8 = a1[4];
  if ( !v8 )
  {
    v11 = a1[3];
    v10 = 1;
    v9 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_5;
LABEL_19:
    v24 = qvector_reserve();
    a1[3] = v24;
    v11 = v24;
    goto LABEL_5;
  }
  v9 = v8 + 1;
  v10 = a1[4];
  v11 = a1[3];
  --v8;
  if ( a1[5] < v9 )
    goto LABEL_19;
LABEL_5:
  a1[4] = v9;
  *(_BYTE *)(v11 + v8) = 32;
  *(_BYTE *)(a1[3] + v10) = 0;
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a2, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
LABEL_17:
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, a3, 16);
  v22 = *a1;
  *((_DWORD *)a1 + 36) &= 0xFFFFE7FF;
  (*(void (__fastcall **)(_QWORD *, __int64))(v22 + 72))(a1, 9);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, 0);
}

