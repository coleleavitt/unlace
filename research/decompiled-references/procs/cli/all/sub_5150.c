__int64 __fastcall sub_5150(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *, char); // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  result = *(unsigned __int8 *)(a1[77] + 10396LL);
  if ( !(_BYTE)result )
    return 1;
  v3 = a1[4];
  if ( v3 )
  {
    if ( (unsigned __int64)(v3 - 1 + a2) <= 0x7FF )
      return result;
    v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v6 == sub_4B60 )
    {
      v5 = v3 + 1;
      v4 = a1[4];
      --v3;
LABEL_11:
      v7 = a1[3];
      if ( a1[5] < v5 )
      {
        v18 = qvector_reserve(a1 + 3, v7, v5, 1);
        a1[3] = v18;
        v7 = v18;
      }
      a1[4] = v5;
      *(_BYTE *)(v7 + v3) = 32;
      *(_BYTE *)(a1[3] + v4) = 0;
      goto LABEL_14;
    }
  }
  else
  {
    if ( (unsigned __int64)a2 <= 0x7FF )
      return result;
    v4 = 1;
    v5 = 2;
    v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v6 == sub_4B60 )
      goto LABEL_11;
  }
  v6(a1, 32);
LABEL_14:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 92);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v8 == sub_4B60 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = a1[4];
      --v9;
    }
    else
    {
      v11 = 1;
      v10 = 2;
    }
    v12 = a1[3];
    if ( a1[5] < v10 )
    {
      v20 = qvector_reserve(a1 + 3, v12, v10, 1);
      a1[3] = v20;
      v12 = v20;
    }
    a1[4] = v10;
    *(_BYTE *)(v12 + v9) = 32;
    *(_BYTE *)(a1[3] + v11) = 0;
  }
  else
  {
    v8(a1, 32);
  }
  v13 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v13 == sub_4B60 )
  {
    v14 = a1[4];
    if ( v14 )
    {
      v15 = v14 + 1;
      v16 = a1[4];
      --v14;
    }
    else
    {
      v16 = 1;
      v15 = 2;
    }
    v17 = a1[3];
    if ( a1[5] < v15 )
    {
      v19 = qvector_reserve(a1 + 3, v17, v15, 1);
      a1[3] = v19;
      v17 = v19;
    }
    a1[4] = v15;
    *(_BYTE *)(v17 + v14) = 32;
    *(_BYTE *)(a1[3] + v16) = 0;
    return 0;
  }
  else
  {
    v13(a1, 32);
    return 0;
  }
}
