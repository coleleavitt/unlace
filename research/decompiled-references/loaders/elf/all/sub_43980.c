__int64 __fastcall sub_43980(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v9; // r13
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // ax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // [rsp+10h] [rbp-58h]
  unsigned __int8 v28; // [rsp+1Fh] [rbp-49h]
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 496) = sub_38FF0;
  a1[22] = (int)get_segm_qty();
  v3 = *(_BYTE *)(a2 + 616);
  v4 = a2 + 504;
  setinf_flag(3, 32, v3);
  v5 = *(unsigned __int16 *)(a2 + 522);
  v28 = *(_BYTE *)(a2 + 617);
  if ( (_WORD)v5 == 70 )
  {
    if ( *(_BYTE *)(a2 + 617) )
      goto LABEL_6;
    goto LABEL_16;
  }
  if ( (_WORD)v5 == 53 )
  {
    if ( v28 )
      goto LABEL_6;
LABEL_16:
    v7 = 16;
    goto LABEL_7;
  }
  if ( (unsigned __int16)v5 <= 0x3Eu )
  {
    if ( (unsigned __int16)v5 > 0x14u )
    {
      v6 = 0x4004000000200000LL;
      if ( _bittest64(&v6, v5) )
        goto LABEL_6;
    }
LABEL_39:
    if ( !v28 )
    {
      v7 = 32;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if ( (_WORD)v5 != 0x9026 )
    goto LABEL_39;
LABEL_6:
  v28 = 1;
  v7 = 64;
LABEL_7:
  v27 = a1 + 30;
  v9 = a2 + 552;
  while ( 1 )
  {
    if ( v7 == 32 )
    {
      setinf_flag(3, 4, 0);
      setinf_flag(3, 2, 1);
    }
    else if ( v7 == 64 )
    {
      setinf_flag(3, 4, 1);
    }
    else
    {
      setinf_flag(3, 2, 0);
    }
    v10 = sub_3FDC0((__int64)a1, a2, v4, v3);
    v11 = a1[30];
    v29[0] = v10;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v11 + 160LL))(v11, v9, v10);
    v13 = *(_QWORD *)(a2 + 472);
    v14 = *(unsigned __int16 *)(a2 + 522);
    v29[0] = v12;
    v15 = sub_101F0(0x45u, v13, v14, v29, v27, a1, a2);
    if ( !v15 || *(unsigned __int16 *)(a2 + 522) == v15 )
      break;
    *(_WORD *)(a2 + 522) = v15;
  }
  if ( v29[0] )
  {
    if ( !(unsigned __int8)set_processor_type(v29[0], 1) )
      goto LABEL_41;
    if ( v7 == 32 )
    {
      setinf_flag(3, 4, 0);
      setinf_flag(3, 2, 1);
    }
    else if ( v7 == 64 )
    {
      setinf_flag(3, 4, 1);
    }
    else
    {
      setinf_flag(3, 2, 0);
    }
    setinf_flag(3, 32, *(unsigned __int8 *)(a2 + 616));
  }
  else
  {
    if ( *(_DWORD *)(a1[1] + 4LL) == -1 )
      sub_EB70((__int64)"Undefined or unknown machine type %d.\n", *(unsigned __int16 *)(a2 + 522));
    if ( (int)sub_343A0(
                0,
                (__int64)"HIDECANCEL\n"
                         "Undefined or unknown machine type %d.\n"
                         "Do you still want load it into the database?\n"
                         "\n"
                         "Please note that most likely it will fail because IDA\n"
                         "doesn't know about particularities of this machine.",
                *(unsigned __int16 *)(a2 + 522)) <= 0 )
LABEL_41:
      sub_EB70(0);
  }
  setinf_flag(3, 4, v28);
  v20 = *(_WORD *)(a2 + 520);
  if ( v20 == 3 || *(_BYTE *)(a2 + 248) && *(_QWORD *)(a2 + 120) && v20 == 1 )
  {
    v22 = getinf(3, 4, v16, v17, v18, v19);
    setinf(3, v22 | 8u, v23, v24, v25, v26);
  }
  if ( *(_DWORD *)(a2 + 524) != 1
    && (int)sub_343A0(1u, (__int64)"HIDECANCEL\n%s. Continue?", "Unsupported ELF version") <= 0 )
  {
    goto LABEL_41;
  }
  sub_2E220(a1 + 29, a2, (__int64)(a1 + 17));
  return *(unsigned __int16 *)(a2 + 522);
}
