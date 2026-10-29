__int64 __fastcall sub_7BE0(_QWORD *a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( sub_7B00(a1[77], (__int64)(a1 + 28), a1[90]) )
  {
    v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v1 == sub_7230 )
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
      v18 = qvector_reserve();
      a1[3] = v18;
      v5 = v18;
      goto LABEL_5;
    }
    v1(a1, 32);
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  if ( !*((_BYTE *)a1 + 305) )
  {
    if ( *((_BYTE *)a1 + 265) != 2 || a1[35] != 4063 )
      goto LABEL_22;
LABEL_25:
    get_func();
    tinfo_get_func_frame();
    clear_tinfo_t();
    goto LABEL_22;
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v6 == sub_7230 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = a1[4];
      v10 = a1[3];
      --v7;
      if ( a1[5] >= v8 )
      {
LABEL_10:
        a1[4] = v8;
        *(_BYTE *)(v10 + v7) = 32;
        *(_BYTE *)(a1[3] + v9) = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v10 = a1[3];
      v9 = 1;
      v8 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_10;
    }
    v17 = qvector_reserve();
    a1[3] = v17;
    v10 = v17;
    goto LABEL_10;
  }
  v6(a1, 32);
LABEL_11:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 1);
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v11 == sub_7230 )
    {
      v12 = a1[4];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a1[4];
        --v12;
      }
      else
      {
        v14 = 1;
        v13 = 2;
      }
      v15 = a1[3];
      if ( a1[5] < v13 )
      {
        v19 = qvector_reserve();
        a1[3] = v19;
        v15 = v19;
      }
      a1[4] = v13;
      *(_BYTE *)(v15 + v12) = 32;
      *(_BYTE *)(a1[3] + v14) = 0;
    }
    else
    {
      v11(a1, 32);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, 2);
  }
  if ( *((_BYTE *)a1 + 265) == 2 && a1[35] == 4063 || *((_BYTE *)a1 + 305) == 2 && a1[40] == 4063 )
    goto LABEL_25;
LABEL_22:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

