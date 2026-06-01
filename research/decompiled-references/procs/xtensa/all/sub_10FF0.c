__int64 __fastcall sub_10FF0(__int64 a1)
{
  char v1; // al
  __int64 (__fastcall *v2)(_QWORD *, char); // rax
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( *(_WORD *)(a1 + 250) == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a1 + 280LL))(a1, 8, ".n");
  }
  else if ( *(_DWORD *)(a1 + 252) )
  {
    sub_10930(a1);
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  }
  v1 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *(_BYTE *)(a1 + 305) )
  {
    if ( v1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v2 == sub_10240 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        if ( v3 )
        {
          v5 = v3 + 1;
          v4 = *(_QWORD *)(a1 + 32);
          --v3;
        }
        else
        {
          v4 = 1;
          v5 = 2;
        }
        v6 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v5 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v20;
          v6 = v20;
        }
        *(_QWORD *)(a1 + 32) = v5;
        *(_BYTE *)(v6 + v3) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v4) = 0;
      }
      else
      {
        v2((_QWORD *)a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  if ( *(_BYTE *)(a1 + 345) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v7 != sub_10240 )
    {
      v7((_QWORD *)a1, 32);
      goto LABEL_18;
    }
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = *(_QWORD *)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 24);
      --v8;
      if ( *(_QWORD *)(a1 + 40) >= v9 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 32) = v9;
        *(_BYTE *)(v11 + v8) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10) = 0;
LABEL_18:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        goto LABEL_19;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 24);
      v10 = 1;
      v9 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_17;
    }
    v18 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v18;
    v11 = v18;
    goto LABEL_17;
  }
LABEL_19:
  if ( *(_BYTE *)(a1 + 385) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v12 != sub_10240 )
    {
      v12((_QWORD *)a1, 32);
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = *(_QWORD *)(a1 + 32);
      v16 = *(_QWORD *)(a1 + 24);
      --v13;
      if ( *(_QWORD *)(a1 + 40) >= v14 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 32) = v14;
        *(_BYTE *)(v16 + v13) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v15) = 0;
LABEL_24:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 3);
        goto LABEL_25;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 24);
      v15 = 1;
      v14 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_23;
    }
    v19 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v19;
    v16 = v19;
    goto LABEL_23;
  }
LABEL_25:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}
