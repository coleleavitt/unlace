__int64 __fastcall sub_67B0(_QWORD *a1, __int64 a2)
{
  char v3; // al
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = *(_BYTE *)(a2 + 32);
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      sub_6680(a1, a2, 0);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    }
    else
    {
      sub_6680(a1, a2, 0);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v10 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v10 != sub_6460 )
    {
      v10(a1, 32);
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
               a1,
               *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
               33);
    }
    v11 = a1[4];
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = a1[4];
      v14 = a1[3];
      --v11;
      if ( a1[5] >= v12 )
      {
LABEL_15:
        a1[4] = v12;
        *(_BYTE *)(v14 + v11) = 32;
        *(_BYTE *)(a1[3] + v13) = 0;
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
                 33);
      }
    }
    else
    {
      v14 = a1[3];
      v13 = 1;
      v12 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_15;
    }
    v15 = qvector_reserve();
    a1[3] = v15;
    v14 = v15;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
  sub_6680(a1, a2, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  if ( (*(_BYTE *)(a1[79] + 4LL) & 2) == 0 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v4 == sub_6460 )
    {
      v5 = a1[4];
      if ( v5 )
      {
        v7 = v5 + 1;
        v6 = a1[4];
        --v5;
      }
      else
      {
        v6 = 1;
        v7 = 2;
      }
      v8 = a1[3];
      if ( a1[5] < v7 )
      {
        v16 = qvector_reserve();
        a1[3] = v16;
        v8 = v16;
      }
      a1[4] = v7;
      *(_BYTE *)(v8 + v5) = 32;
      *(_BYTE *)(a1[3] + v6) = 0;
    }
    else
    {
      v4(a1, 32);
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
    a1,
    *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
    33);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
}

