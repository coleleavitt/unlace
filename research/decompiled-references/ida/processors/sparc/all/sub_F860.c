__int64 __fastcall sub_F860(__int64 a1)
{
  char v1; // al
  __int64 v2; // r8
  __int64 v3; // r9
  void (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  void (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v1 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *(_BYTE *)(a1 + 305) )
  {
    if ( v1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v12 == (char *)sub_EC10 )
      {
        v13 = *(_QWORD *)(a1 + 32);
        if ( v13 )
        {
          v15 = v13 + 1;
          v14 = *(_QWORD *)(a1 + 32);
          --v13;
        }
        else
        {
          v14 = 1;
          v15 = 2;
        }
        v16 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v15 )
        {
          v18 = qvector_reserve(a1 + 24, v16, v15, 1, v10, v11);
          *(_QWORD *)(a1 + 24) = v18;
          v16 = v18;
        }
        *(_QWORD *)(a1 + 32) = v15;
        *(_BYTE *)(v16 + v13) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v14) = 0;
      }
      else
      {
        v12(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  if ( *(_BYTE *)(a1 + 345) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v4 != (char *)sub_EC10 )
    {
      v4(a1, 32);
      goto LABEL_9;
    }
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      v6 = v5 + 1;
      v7 = *(_QWORD *)(a1 + 32);
      v8 = *(_QWORD *)(a1 + 24);
      --v5;
      if ( *(_QWORD *)(a1 + 40) >= v6 )
      {
LABEL_8:
        *(_QWORD *)(a1 + 32) = v6;
        *(_BYTE *)(v8 + v5) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v7) = 0;
LABEL_9:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        goto LABEL_10;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 24);
      v7 = 1;
      v6 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_8;
    }
    v17 = qvector_reserve(a1 + 24, v8, v6, 1, v2, v3);
    *(_QWORD *)(a1 + 24) = v17;
    v8 = v17;
    goto LABEL_8;
  }
LABEL_10:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

