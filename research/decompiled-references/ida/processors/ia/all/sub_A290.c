__int64 __fastcall sub_A290(_QWORD *a1)
{
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // al
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rax

  v2 = getinf(41);
  v3 = getinf(40);
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 48LL))(a1, a1 + 3, v2 - v3);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 0);
  v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v4 == sub_9B90 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      v8 = v5 + 1;
      v7 = a1[4];
      v6 = a1[3];
      --v5;
      if ( a1[5] >= v8 )
        goto LABEL_4;
    }
    else
    {
      v6 = a1[3];
      v7 = 1;
      v8 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_4:
        a1[4] = v8;
        *(_BYTE *)(v6 + v5) = 32;
        result = a1[3];
        *(_BYTE *)(result + v7) = 0;
        return result;
      }
    }
    v10 = qvector_reserve(a1 + 3, v6, v8, 1);
    a1[3] = v10;
    v6 = v10;
    goto LABEL_4;
  }
  return v4(a1, 32);
}

