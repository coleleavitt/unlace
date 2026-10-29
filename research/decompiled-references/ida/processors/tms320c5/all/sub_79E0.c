__int64 __fastcall sub_79E0(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  char v6; // bp
  char v7; // al
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *, char); // rax
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( (unsigned __int8)sub_7840(a1) )
  {
    v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v1 == sub_6910 )
    {
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
          goto LABEL_6;
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
      v19 = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v19;
      v5 = v19;
      goto LABEL_5;
    }
    v1((_QWORD *)a1, 32);
  }
LABEL_6:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  if ( (*(_BYTE *)(a1 + 268) & 8) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 308) & 8) != 0 )
      goto LABEL_33;
    goto LABEL_26;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  v7 = *(_BYTE *)(a1 + 308) & 8;
  if ( !v6 )
  {
    if ( v7 )
    {
LABEL_33:
      v6 = 0;
      if ( *(_BYTE *)(a1 + 305) )
        goto LABEL_22;
LABEL_34:
      if ( *(_BYTE *)(a1 + 265) != 3 )
        goto LABEL_29;
LABEL_23:
      v6 |= sub_7740((_QWORD *)a1, a1 + 264, v6) & 1;
      if ( *(_BYTE *)(a1 + 305) != 3 )
        goto LABEL_29;
      goto LABEL_24;
    }
LABEL_26:
    v6 = 0;
    goto LABEL_27;
  }
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 305) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
      v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v8 == sub_6910 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        if ( v9 )
        {
          v10 = v9 + 1;
          v11 = *(_QWORD *)(a1 + 32);
          --v9;
        }
        else
        {
          v11 = 1;
          v10 = 2;
        }
        v12 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v10 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v20;
          v12 = v20;
        }
        *(_QWORD *)(a1 + 32) = v10;
        *(_BYTE *)(v12 + v9) = 44;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v11) = 0;
      }
      else
      {
        v8((_QWORD *)a1, 44);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9);
      v13 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v13 == sub_6910 )
      {
        v14 = *(_QWORD *)(a1 + 32);
        if ( v14 )
        {
          v15 = v14 + 1;
          v16 = *(_QWORD *)(a1 + 32);
          --v14;
        }
        else
        {
          v16 = 1;
          v15 = 2;
        }
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v15 )
        {
          v21 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v21;
          v17 = v21;
        }
        *(_QWORD *)(a1 + 32) = v15;
        *(_BYTE *)(v17 + v14) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v16) = 0;
      }
      else
      {
        v13((_QWORD *)a1, 32);
      }
LABEL_22:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
      if ( *(_BYTE *)(a1 + 265) == 3 )
        goto LABEL_23;
      goto LABEL_28;
    }
    goto LABEL_34;
  }
LABEL_27:
  if ( *(_BYTE *)(a1 + 265) == 3 )
    goto LABEL_23;
LABEL_28:
  if ( *(_BYTE *)(a1 + 305) == 3 )
LABEL_24:
    sub_7740((_QWORD *)a1, a1 + 304, v6);
LABEL_29:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  if ( *(_QWORD *)(a1 + 80) )
    sub_7940(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

