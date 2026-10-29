__int64 __fastcall sub_38E40(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 result; // rax
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  const char *v14; // rsi
  __int64 v15; // rax

  v6 = *a1;
  if ( a4[1] <= 1u )
    (*(void (**)(void))(v6 + 296))();
  else
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))(v6 + 288))(a1, *a4, 16, 0);
  v7 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
  if ( *(_QWORD *)(a3 + 8) > 1u )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v9 != sub_38AB0 )
    {
      v9(a1, 32);
      goto LABEL_10;
    }
    v10 = a1[4];
    if ( v10 )
    {
      v11 = v10 + 1;
      v12 = a1[4];
      v13 = a1[3];
      --v10;
      if ( a1[5] >= v11 )
      {
LABEL_9:
        a1[4] = v11;
        *(_BYTE *)(v13 + v10) = 32;
        *(_BYTE *)(a1[3] + v12) = 0;
LABEL_10:
        v14 = &s1;
        if ( *(_QWORD *)(a3 + 8) )
          v14 = *(const char **)a3;
        return (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v14, 33);
      }
    }
    else
    {
      v13 = a1[3];
      v12 = 1;
      v11 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_9;
    }
    v15 = qvector_reserve();
    a1[3] = v15;
    v13 = v15;
    goto LABEL_9;
  }
  return result;
}

