__int64 __fastcall sub_B430(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 27);
    getinf();
    if ( get_ea_name() <= 0 )
    {
LABEL_16:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
      return v14 - __readfsqword(0x28u);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    {
      v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v3 == sub_A720 )
      {
        v4 = a2[4];
        v5 = 2;
        if ( v4 )
          v5 = v4-- + 1;
        v6 = a2[3];
        if ( a2[5] < v5 )
        {
          v13 = qvector_reserve();
          a2[3] = v13;
          v6 = v13;
        }
        a2[4] = v5;
        *(_BYTE *)(v6 + v4) = 32;
        *(_BYTE *)(a2[3] + v4 + 1) = 0;
      }
      else
      {
        v3(a2, 32);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
    }
    v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v7 != sub_A720 )
    {
      v7(a2, 32);
      goto LABEL_15;
    }
    v8 = a2[4];
    v9 = 2;
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = a2[3];
      --v8;
      if ( a2[5] >= v9 )
        goto LABEL_14;
    }
    else
    {
      v10 = a2[3];
      if ( a2[5] >= 2u )
      {
LABEL_14:
        a2[4] = v9;
        *(_BYTE *)(v10 + v8) = 32;
        *(_BYTE *)(a2[3] + v8 + 1) = 0;
LABEL_15:
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, 0, 0);
        goto LABEL_16;
      }
    }
    v12 = qvector_reserve();
    a2[3] = v12;
    v10 = v12;
    goto LABEL_14;
  }
  return sub_A850((__int64)a2, (__int64)"end of file");
}

