__int64 __fastcall sub_86C0(_QWORD *a1)
{
  __int64 v1; // r13
  char v2; // al
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int16 v14; // ax
  char v15; // r13
  __int64 v17; // rax
  __int64 (__fastcall *v18)(_QWORD *, char); // rax
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v1 = a1[77];
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v18 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v18 == sub_8290 )
      {
        v19 = a1[4];
        if ( v19 )
        {
          v21 = v19 + 1;
          v20 = a1[4];
          --v19;
        }
        else
        {
          v20 = 1;
          v21 = 2;
        }
        v22 = a1[3];
        if ( a1[5] < v21 )
        {
          v25 = qvector_reserve();
          a1[3] = v25;
          v22 = v25;
        }
        a1[4] = v21;
        *(_BYTE *)(v22 + v19) = 32;
        *(_BYTE *)(a1[3] + v20) = 0;
      }
      else
      {
        v18(a1, 32);
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 1);
  }
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v3 != sub_8290 )
    {
      v3(a1, 32);
      goto LABEL_9;
    }
    v4 = a1[4];
    if ( v4 )
    {
      v5 = v4 + 1;
      v6 = a1[4];
      v7 = a1[3];
      --v4;
      if ( a1[5] >= v5 )
      {
LABEL_8:
        a1[4] = v5;
        *(_BYTE *)(v7 + v4) = 32;
        *(_BYTE *)(a1[3] + v6) = 0;
LABEL_9:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 2);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = a1[3];
      v6 = 1;
      v5 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_8;
    }
    v24 = qvector_reserve();
    a1[3] = v24;
    v7 = v24;
    goto LABEL_8;
  }
LABEL_10:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  v8 = netnode_altval();
  if ( v8 == -1 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
  v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v9 != sub_8290 )
  {
    v9(a1, 32);
    goto LABEL_15;
  }
  v10 = a1[4];
  if ( v10 )
  {
    v13 = v10 + 1;
    v12 = a1[4];
    v11 = a1[3];
    --v10;
    if ( a1[5] >= v13 )
      goto LABEL_14;
LABEL_23:
    v17 = qvector_reserve();
    a1[3] = v17;
    v11 = v17;
    goto LABEL_14;
  }
  v11 = a1[3];
  v12 = 1;
  v13 = 2;
  if ( a1[5] < 2u )
    goto LABEL_23;
LABEL_14:
  a1[4] = v13;
  *(_BYTE *)(v11 + v10) = 32;
  *(_BYTE *)(a1[3] + v12) = 0;
LABEL_15:
  v14 = *((_WORD *)a1 + 124);
  if ( v14 == 116 )
  {
    v23 = *(_QWORD *)(v1 + 200);
    if ( v8 < v23 || v23 == -1 || (v15 = is_loaded()) == 0 )
      v15 = 0;
    else
      get_qword();
  }
  else
  {
    v15 = v14 == 108;
  }
  if ( get_ea_name() <= 0 )
  {
    if ( (get_flags_ex() & 0xC000) == 0 )
    {
      sub_8310((__int64)a1, (__int64)"%08a", 0.0);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
    }
    get_ea_name();
  }
  else if ( v15 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 38);
    *((_DWORD *)a1 + 36) |= 0x20000u;
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, 0, 0);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

