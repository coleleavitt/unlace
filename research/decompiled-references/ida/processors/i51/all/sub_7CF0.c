__int64 __fastcall sub_7CF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  void (__fastcall *v9)(__int64 *, __int64, __int64); // rax
  __int64 (__fastcall *v10)(__int64 *, char); // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64 *, char); // rax
  __int64 v16; // r12
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64 *, char); // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

  v9 = *(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 56);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) == 0 )
  {
    v9(a2, a3, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 0x20) != 0 )
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 58);
    v15 = *(__int64 (__fastcall **)(__int64 *, char))(*a2 + 96);
    if ( v15 != sub_6F30 )
    {
      v15(a2, 32);
LABEL_13:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 56))(a2, a4, 32);
      v20 = *(__int64 (__fastcall **)(__int64 *, char))(*a2 + 96);
      if ( v20 != sub_6F30 )
      {
        v20(a2, 32);
        goto LABEL_17;
      }
      v21 = a2[4];
      if ( v21 )
      {
        v22 = v21 + 1;
        v23 = a2[4];
        v24 = a2[3];
        --v21;
        if ( a2[5] >= v22 )
        {
LABEL_16:
          a2[4] = v22;
          *(_BYTE *)(v24 + v21) = 32;
          *(_BYTE *)(a2[3] + v23) = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v24 = a2[3];
        v23 = 1;
        v22 = 2;
        if ( (unsigned __int64)a2[5] >= 2 )
          goto LABEL_16;
      }
      v28 = qvector_reserve();
      a2[3] = v28;
      v24 = v28;
      goto LABEL_16;
    }
    v16 = a2[4];
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = a2[4];
      v19 = a2[3];
      --v16;
      if ( a2[5] >= v17 )
      {
LABEL_12:
        a2[4] = v17;
        *(_BYTE *)(v19 + v16) = 32;
        *(_BYTE *)(a2[3] + v18) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v19 = a2[3];
      v18 = 1;
      v17 = 2;
      if ( (unsigned __int64)a2[5] >= 2 )
        goto LABEL_12;
    }
    v30 = v18;
    v29 = qvector_reserve();
    v18 = v30;
    a2[3] = v29;
    v19 = v29;
    goto LABEL_12;
  }
  v9(a2, a4, 32);
  v10 = *(__int64 (__fastcall **)(__int64 *, char))(*a2 + 96);
  if ( v10 != sub_6F30 )
  {
    v10(a2, 32);
    goto LABEL_6;
  }
  v11 = a2[4];
  if ( !v11 )
  {
    v14 = a2[3];
    v13 = 1;
    v12 = 2;
    if ( (unsigned __int64)a2[5] >= 2 )
      goto LABEL_5;
LABEL_19:
    v27 = qvector_reserve();
    a2[3] = v27;
    v14 = v27;
    goto LABEL_5;
  }
  v12 = v11 + 1;
  v13 = a2[4];
  v14 = a2[3];
  --v11;
  if ( a2[5] < v12 )
    goto LABEL_19;
LABEL_5:
  a2[4] = v12;
  *(_BYTE *)(v14 + v11) = 32;
  *(_BYTE *)(a2[3] + v13) = 0;
LABEL_6:
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 56))(a2, a3, 0);
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 44);
LABEL_17:
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 112))(a2, a5, 16);
  v25 = *a2;
  *((_DWORD *)a2 + 36) &= 0xFFFFE7FF;
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v25 + 128))(a2, 0x80000000LL);
}

