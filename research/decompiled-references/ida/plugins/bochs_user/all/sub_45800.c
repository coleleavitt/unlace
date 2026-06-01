__int64 __fastcall sub_45800(unsigned __int8 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r12d
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+18h] [rbp-2D0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-2C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-2C0h]
  __int64 v26; // [rsp+38h] [rbp-2B0h]
  _QWORD v27[83]; // [rsp+50h] [rbp-298h] BYREF

  v27[75] = __readfsqword(0x28u);
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 6) + 40LL))(*((_QWORD *)a1 + 6));
  v10 = *((_QWORD *)a1 + 604);
  v11 = *(_QWORD *)(a2 + 36);
  v12 = v9;
  if ( v9 == 1 )
  {
    if ( (unsigned int)sub_26EC0(v10, v11, (__int64)&v24, 20, 1) )
      goto LABEL_6;
    HIDWORD(v25) = *(_QWORD *)(*((_QWORD *)a1 + 7) + 8248LL);
    if ( a5 )
      *a5 = (unsigned int)v24;
    if ( !sub_44120((__int64)a1, *(_QWORD *)(a2 + 36), (__int64)&v24, 0x14u)
      || !sub_44120((__int64)a1, HIDWORD(v25), a3, a4) )
    {
      goto LABEL_6;
    }
  }
  else
  {
    if ( (unsigned int)sub_26EC0(v10, v11, (__int64)&v24, 40, 1) )
      goto LABEL_6;
    v26 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 8248LL);
    if ( a5 )
      *a5 = v24;
    if ( !sub_44120((__int64)a1, *(_QWORD *)(a2 + 36), (__int64)&v24, 0x28u)
      || (unsigned int)sub_25E30(*((_QWORD *)a1 + 604), "rcx", *(_QWORD *)(a3 + 8))
      || (unsigned int)sub_25E30(*((_QWORD *)a1 + 604), "rdx", *(_QWORD *)(a3 + 16)) )
    {
      goto LABEL_6;
    }
  }
  if ( (unsigned int)sub_25E30(*((_QWORD *)a1 + 604), "eip", *(_QWORD *)(a2 + 132) + 2LL) )
  {
LABEL_6:
    sub_45250((__int64)a1);
    return *a1 ^ 1u;
  }
  v14 = *((_QWORD *)a1 + 7);
  v15 = *((_QWORD *)a1 + 604);
  v16 = *(_DWORD *)(v14 + 8204);
  if ( v16 == 2 )
  {
    v20 = *(_QWORD *)(v14 + 8240);
    BYTE6(v25) = 118;
    WORD2(v25) = 27;
    v24 = v20;
    if ( !(unsigned int)sub_26A90(v15, (__int64)&v24)
      && !(unsigned int)sub_25D80(*((_QWORD *)a1 + 604))
      && !(unsigned int)sub_27640(*((_QWORD *)a1 + 604), v27) )
    {
      sub_26B80(*((_QWORD *)a1 + 604), (__int64)&v24);
      goto LABEL_38;
    }
    goto LABEL_6;
  }
  if ( (unsigned int)sub_25D60(v15, 0) || (unsigned int)sub_27640(*((_QWORD *)a1 + 604), v27) )
    goto LABEL_6;
  if ( v12 == 1 )
  {
    *((_QWORD *)a1 + 692) = -1;
    goto LABEL_20;
  }
LABEL_38:
  sub_45250((__int64)a1);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)a1 + 6) + 72LL))(
          *((_QWORD *)a1 + 6),
          8,
          *((_QWORD *)a1 + 692),
          &v23) )
    return *a1 ^ 1u;
  v21 = *((_QWORD *)a1 + 604);
  v25 = 0x70000000000000LL;
  v24 = v23;
  if ( (unsigned int)sub_26A90(v21, (__int64)&v24) )
    return *a1 ^ 1u;
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0;
  if ( v16 == 2 )
    return 1;
LABEL_20:
  sub_45250((__int64)a1);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)a1 + 6) + 72LL))(
          *((_QWORD *)a1 + 6),
          24,
          *((_QWORD *)a1 + 684),
          &v24) )
    return *a1 ^ 1u;
  v17 = v24;
  a1[6598] = 112;
  *((_WORD *)a1 + 3298) = 0;
  v18 = *((_QWORD *)a1 + 604);
  *((_QWORD *)a1 + 823) = v17 + 2;
  if ( (unsigned int)sub_26A90(v18, (__int64)(a1 + 6584)) )
    return *a1 ^ 1u;
  v19 = *((_QWORD *)a1 + 684);
  *a1 = 0;
  *((_QWORD *)a1 + 823) = v19 + 2;
  *((_QWORD *)a1 + 2) = 0;
  return 1;
}

