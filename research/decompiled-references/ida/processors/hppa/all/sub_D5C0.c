__int64 __fastcall sub_D5C0(_QWORD *a1, double a2)
{
  __int64 (__fastcall *v2)(_QWORD *, char); // rax
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v2 == sub_B860 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      v6 = v3 + 1;
      v5 = a1[4];
      v4 = a1[3];
      --v3;
      if ( a1[5] >= v6 )
        goto LABEL_4;
    }
    else
    {
      v4 = a1[3];
      v5 = 1;
      v6 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_4:
        a1[4] = v6;
        *(_BYTE *)(v4 + v3) = 32;
        *(_BYTE *)(a1[3] + v5) = 0;
        goto LABEL_5;
      }
    }
    v13 = qvector_reserve();
    a1[3] = v13;
    v4 = v13;
    goto LABEL_4;
  }
  v2(a1, 32);
LABEL_5:
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v7 == sub_B860 )
  {
    v8 = a1[4];
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = a1[4];
      v11 = a1[3];
      --v8;
      if ( a1[5] >= v9 )
      {
LABEL_8:
        a1[4] = v9;
        *(_BYTE *)(v11 + v8) = 32;
        *(_BYTE *)(a1[3] + v10) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = a1[3];
      v10 = 1;
      v9 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_8;
    }
    v14 = qvector_reserve();
    a1[3] = v14;
    v11 = v14;
    goto LABEL_8;
  }
  v7(a1, 32);
LABEL_9:
  if ( (get_flags_ex() & 0xC000) == 0 )
    return sub_B8E0((__int64)a1, (__int64)"%0*a", 8, a2);
  get_ea_name();
  (*(void (__fastcall **)(_QWORD *, int *, _QWORD))(*a1 + 56LL))(a1, &dword_1157C, 0);
  return v15 - __readfsqword(0x28u);
}

