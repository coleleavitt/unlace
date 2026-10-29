__int64 __fastcall sub_9DD0(_QWORD *a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __int64 result; // rax
  __int64 v15; // rax

  v7 = sub_B230(a4, a5);
  if ( v7 )
  {
    v8 = v7;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 33);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a3, 0);
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v9 != sub_9B90 )
    {
      v9(a1, 46);
      goto LABEL_6;
    }
    v10 = a1[4];
    if ( v10 )
    {
      v13 = v10 + 1;
      v12 = a1[4];
      v11 = a1[3];
      --v10;
      if ( a1[5] >= v13 )
        goto LABEL_5;
    }
    else
    {
      v11 = a1[3];
      v12 = 1;
      v13 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_5:
        a1[4] = v13;
        *(_BYTE *)(v11 + v10) = 46;
        *(_BYTE *)(a1[3] + v12) = 0;
LABEL_6:
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(v8 + 8), 0);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 33);
        result = a1[77];
        *(_QWORD *)(result + 5600) = *(_QWORD *)(v8 + 16);
        return result;
      }
    }
    v15 = qvector_reserve(a1 + 3, v11, v13, 1);
    a1[3] = v15;
    v11 = v15;
    goto LABEL_5;
  }
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
           a1,
           *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (int)(a2 + a5)),
           33);
}

