__int64 __fastcall sub_6FC0(__int64 a1)
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
  __int64 v12; // rax
  __int64 v13; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *(_BYTE *)(a1 + 305) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v1 != sub_6460 )
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
    v12 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v12;
    v5 = v12;
    goto LABEL_5;
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 345) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v6 != sub_6460 )
    {
      v6((_QWORD *)a1, 32);
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 24);
      --v7;
      if ( *(_QWORD *)(a1 + 40) >= v8 )
      {
LABEL_11:
        *(_QWORD *)(a1 + 32) = v8;
        *(_BYTE *)(v10 + v7) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
LABEL_12:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        goto LABEL_13;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 24);
      v9 = 1;
      v8 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_11;
    }
    v13 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v13;
    v10 = v13;
    goto LABEL_11;
  }
LABEL_13:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

