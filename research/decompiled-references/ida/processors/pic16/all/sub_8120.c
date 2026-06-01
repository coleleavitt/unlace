__int64 __fastcall sub_8120(_QWORD *a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  char *v6; // r13
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *, char); // rax
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-48h]

  if ( !sub_80B0(a1[77], (__int64)(a1 + 28), a1[90]) )
    goto LABEL_6;
  v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v1 == sub_7510 )
  {
    v2 = a1[4];
    if ( v2 )
    {
      v3 = v2 + 1;
      v4 = a1[4];
      v5 = a1[3];
      --v2;
      if ( a1[5] >= v3 )
      {
LABEL_5:
        a1[4] = v3;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(a1[3] + v4) = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v5 = a1[3];
      v4 = 1;
      v3 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_5;
    }
    v16 = qvector_reserve();
    a1[3] = v16;
    v5 = v16;
    goto LABEL_5;
  }
  v1(a1, 32);
LABEL_6:
  if ( *((_DWORD *)a1 + 63) )
    sub_8030(a1);
  else
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 280LL))(a1, 9, 0);
  v6 = (char *)a1 + 345;
  v7 = 1;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v13 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v13 != sub_7510 )
      {
        v13(a1, 32);
        goto LABEL_12;
      }
      v11 = a1[4];
      if ( v11 )
      {
        v8 = v11 + 1;
        v9 = a1[4];
        v10 = a1[3];
        --v11;
        if ( a1[5] < v8 )
          goto LABEL_16;
      }
      else
      {
        v10 = a1[3];
        v9 = 1;
        v8 = 2;
        if ( a1[5] < 2u )
        {
LABEL_16:
          v17 = v8;
          v14 = qvector_reserve();
          v8 = v17;
          a1[3] = v14;
          v10 = v14;
        }
      }
      a1[4] = v8;
      *(_BYTE *)(v10 + v11) = 32;
      *(_BYTE *)(a1[3] + v9) = 0;
LABEL_12:
      v6 += 40;
      v12 = v7++;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, v12);
    }
    while ( *(v6 - 40) );
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

