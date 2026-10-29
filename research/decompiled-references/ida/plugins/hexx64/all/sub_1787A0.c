char __fastcall sub_1787A0(
        _QWORD *a1,
        __int64 *a2,
        _DWORD *a3,
        __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  char result; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, int); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  int v27; // eax
  int v28; // eax
  __int64 v29; // [rsp-8h] [rbp-80h]
  char v30; // [rsp+1Fh] [rbp-59h]
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v31[3] = __readfsqword(0x28u);
  *a3 = 0;
  if ( (unsigned __int8)sub_64880(a4) && !a4[3] || !a10 )
    return 1;
  if ( a6 == -1 )
  {
    if ( !a8 )
      goto LABEL_23;
    if ( a5 == -1 )
LABEL_34:
      sub_1733C0(a7);
LABEL_13:
    v19 = 0;
    goto LABEL_14;
  }
  v31[0] = 0;
  v31[1] = 0;
  v30 = sub_6FC30((__int64)a1, v31, a5, a6, a7);
  qfree(v31[0]);
  if ( !v30 )
    return 1;
  if ( !a8 )
    goto LABEL_20;
  v19 = a9;
  if ( a6 != a5 )
    goto LABEL_13;
LABEL_14:
  v20 = a1[5];
  if ( a5 >= *(_DWORD *)(v20 + 64) )
    goto LABEL_34;
  v21 = sub_173040(a2, (unsigned __int64 **)a4, *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8LL * a5), a8, v19, a10, a11);
  *a3 = v21;
  if ( v21 || (unsigned __int8)sub_64880(a4) && !a4[3] || a6 == a5 )
    return 1;
  if ( a6 == -1 )
    goto LABEL_23;
LABEL_20:
  v22 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104LL);
  if ( v22 == sub_134310 )
    v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)a6) + 352LL);
  else
    v23 = v22((__int64)a1, a6);
  if ( v23 != 1 )
    goto LABEL_23;
  v26 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120LL);
  if ( v26 == sub_172890 )
  {
    v24 = a1[5];
    v15 = *(_QWORD *)(v24 + 528);
    v27 = **(_DWORD **)(*(_QWORD *)(v15 + 8LL * (int)a6) + 344LL);
  }
  else
  {
    v27 = v26((__int64)a1, a6, 0);
    v24 = a1[5];
  }
  if ( a5 != v27 )
    goto LABEL_24;
  if ( a6 >= *(_DWORD *)(v24 + 64) )
    goto LABEL_34;
  v28 = sub_173040(a2, (unsigned __int64 **)a4, *(_QWORD *)(*(_QWORD *)(v24 + 528) + 8LL * a6), 0, a9, a10, a11);
  *a3 = v28;
  v15 = v29;
  if ( v28 )
    return 1;
LABEL_23:
  v24 = a1[5];
LABEL_24:
  v25 = *(_QWORD *)(v24 + 1504);
  sub_64640(a4, (__int64 *)(v25 + 104), v24, v15, v16, v17);
  sub_317C60(a4 + 2, v25 + 120);
  result = sub_64880(a4);
  if ( result )
    return a4[3] == 0;
  return result;
}

