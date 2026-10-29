__int64 __fastcall sub_7B20(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 27);
    getinf();
    if ( get_ea_name() <= 0 )
    {
LABEL_10:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
      return v10 - __readfsqword(0x28u);
    }
    v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v3 != sub_6F30 )
    {
      v3(a2, 32);
      goto LABEL_7;
    }
    v4 = a2[4];
    v5 = 2;
    if ( v4 )
    {
      v5 = v4 + 1;
      v6 = a2[3];
      --v4;
      if ( a2[5] >= v5 )
        goto LABEL_6;
    }
    else
    {
      v6 = a2[3];
      if ( a2[5] >= 2u )
      {
LABEL_6:
        a2[4] = v5;
        *(_BYTE *)(v6 + v4) = 32;
        *(_BYTE *)(a2[3] + v4 + 1) = 0;
LABEL_7:
        v7 = *(_QWORD *)(a1 + 24);
        if ( (*(_BYTE *)(v7 + 5) & 2) != 0 )
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(v7 + 48), 0);
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, 0, 0);
        goto LABEL_10;
      }
    }
    v9 = qvector_reserve();
    a2[3] = v9;
    v6 = v9;
    goto LABEL_6;
  }
  return sub_7060((__int64)a2, (__int64)"end of file");
}

