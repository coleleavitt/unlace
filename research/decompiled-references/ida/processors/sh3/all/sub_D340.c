__int64 __fastcall sub_D340(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  void (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 func; // rax
  __int64 v24; // rdx
  void *v25; // rsi
  __int64 v26; // rdx
  int flags; // eax
  unsigned int v28; // eax
  __int64 word; // rax
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _OWORD v36[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+20h] [rbp-38h]
  unsigned __int64 v38; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v38 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64))(v1 + 296))(a1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( (*(_BYTE *)(a1 + 308) & 8) != 0 && *(_BYTE *)(a1 + 305) )
  {
    if ( (*(_BYTE *)(a1 + 268) & 8) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v10 == (char *)sub_CC10 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( v11 )
        {
          v12 = v11 + 1;
          v13 = *(_QWORD *)(a1 + 32);
          --v11;
        }
        else
        {
          v13 = 1;
          v12 = 2;
        }
        v14 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v12 )
        {
          v35 = qvector_reserve(a1 + 24, v14, v12, 1, v8, v9);
          *(_QWORD *)(a1 + 24) = v35;
          v14 = v35;
        }
        *(_QWORD *)(a1 + 32) = v12;
        *(_BYTE *)(v14 + v11) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) = 0;
      }
      else
      {
        v10(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
    if ( *(_BYTE *)(a1 + 345) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v17 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v17 == (char *)sub_CC10 )
      {
        v18 = *(_QWORD *)(a1 + 32);
        if ( v18 )
        {
          v19 = v18 + 1;
          v20 = *(_QWORD *)(a1 + 32);
          --v18;
        }
        else
        {
          v20 = 1;
          v19 = 2;
        }
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v19 )
        {
          v34 = qvector_reserve(a1 + 24, v21, v19, 1, v15, v16);
          *(_QWORD *)(a1 + 24) = v34;
          v21 = v34;
        }
        *(_QWORD *)(a1 + 32) = v19;
        *(_BYTE *)(v21 + v18) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v20) = 0;
      }
      else
      {
        v17(a1, 32);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  v3 = *(_QWORD *)(a1 + 616);
  if ( (*(_BYTE *)(v3 + 256) & 1) == 0 )
    goto LABEL_6;
  v4 = sub_9450(v3, *(_QWORD *)(a1 + 240));
  v5 = v4;
  if ( !v4 )
  {
    v3 = *(_QWORD *)(a1 + 616);
LABEL_6:
    v6 = sub_9480(v3, *(_QWORD *)(a1 + 240));
    if ( v6 )
    {
      v22 = *(_QWORD *)(a1 + 240);
      memset(v36, 0, 24);
      func = get_func(v22);
      if ( func )
        v24 = (((int)get_func_chunknum(func, v6) >= 0) << 6) | 3u;
      else
        v24 = 3;
      v25 = (void *)v6;
      if ( get_ea_name(v36, v6, v24, 0) > 0 )
      {
        v25 = &unk_118EC;
        sub_CD40(a1, (__int64)&unk_118EC, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), *(_QWORD *)&v36[0]);
      }
      if ( *(_QWORD *)&v36[0] )
      {
        *((_QWORD *)&v36[0] + 1) = 0;
        qfree(*(_QWORD *)&v36[0], v25, v26, 0.0);
      }
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
  }
  flags = get_flags_ex(v4, 4);
  v37 = 0;
  memset(v36, 0, sizeof(v36));
  if ( (flags & 0x600) == 0x400 )
  {
    v28 = flags & 0xF0000000;
    if ( v28 )
    {
      if ( v28 == 0x10000000 )
      {
        word = (__int16)get_word(v5);
      }
      else
      {
        if ( v28 != 0x20000000 )
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
        word = (int)get_dword(v5);
      }
    }
    else
    {
      word = (char)get_byte(v5);
    }
    *((_QWORD *)&v36[0] + 1) = word;
    v30 = *(_QWORD *)(a1 + 16);
    v31 = *(_QWORD *)(a1 + 632);
    *(_QWORD *)(a1 + 16) = v5;
    BYTE4(v36[0]) = 8;
    sub_CD40(a1, (__int64)&unk_118E3, *(_QWORD *)(v31 + 48));
    v32 = sub_F240(*(_QWORD *)(a1 + 616), DWORD2(v36[0]));
    v33 = *(_QWORD *)a1;
    if ( v32 && *(_QWORD *)(v32 + 16) > 1u )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v33 + 56))(a1, *(_QWORD *)(v32 + 8), 34);
    else
      (*(void (__fastcall **)(__int64, _OWORD *, __int64))(v33 + 24))(a1, v36, 64);
    *(_QWORD *)(a1 + 16) = v30;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

