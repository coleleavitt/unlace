__int64 __fastcall sub_C2F0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // r14d
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned int *v24; // rax
  double v25; // xmm4_8
  double v26; // xmm5_8
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // [rsp+Ch] [rbp-4Ch]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned int *v36; // [rsp+18h] [rbp-40h]
  unsigned int *v37; // [rsp+18h] [rbp-40h]

  if ( !a3 )
    return 0;
  v16 = a3;
  v17 = qlsize(a2);
  if ( v17 < v16 )
    return 0;
  if ( (unsigned int)v17 - a3 < a4 )
  {
    a4 = (unsigned int)v17 - a3;
    sub_53E0((__int64)"Size of debug dir is wrong");
  }
  if ( a4 <= 0x1B )
    return 0;
  v18 = a4 / 0x1C;
  v34 = qcalloc(v18, 28);
  if ( !v34 )
  {
    sub_53E0((__int64)"No memory for DBG-entry");
    return 0;
  }
  qlseek(a2, v16, 0, v19);
  v20 = v34;
  v21 = v34;
  lread(a2, v34, 28 * v18);
  sub_5240((__int64)"HIDECANCEL\nLoading debug information");
  v22 = 0;
  while ( *(_DWORD *)(v20 + 12) != 8 )
  {
    ++v22;
    v20 += 28;
    if ( v22 >= v18 )
      goto LABEL_12;
  }
  v28 = sub_54B0(a2, v20);
  if ( !v28 )
  {
    v12 = 0;
LABEL_29:
    qfree(v34);
    qfree(0);
    qfree(*(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = 0;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, v31, v32);
    return v12;
  }
  *(_QWORD *)(a1 + 120) = v28;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(v20 + 16) >> 3;
  sub_5800((__int64)"OMAP FROM SOURCE is found, using it...\n");
LABEL_12:
  v23 = 0;
  v12 = 0;
  do
  {
    if ( *(_DWORD *)(v21 + 16) && (unsigned int)(*(_DWORD *)(v21 + 12) - 1) <= 2 )
    {
      v24 = (unsigned int *)sub_54B0(a2, v21);
      if ( !v24 )
        goto LABEL_29;
      v27 = *(_DWORD *)(v21 + 12);
      if ( v27 == 1 )
      {
        v37 = v24;
        sub_80A0(a1, v24, *(unsigned int *)(v21 + 16));
        v24 = v37;
      }
      else
      {
        if ( v27 != 2 )
        {
LABEL_16:
          qfree(v24);
          goto LABEL_17;
        }
        v36 = v24;
        sub_C290(a1, (__int64)v24, *(unsigned int *)(v21 + 16), 1, a5, a6, a7, a8, v25, v26, a11, a12);
        v24 = v36;
      }
      v12 = 1;
      goto LABEL_16;
    }
LABEL_17:
    ++v23;
    v21 += 28;
  }
  while ( v23 < v18 );
  qfree(*(_QWORD *)(a1 + 120));
  *(_QWORD *)(a1 + 120) = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, v29, v30);
  qfree(v35);
  if ( !(_BYTE)v12 && v33 )
  {
    sub_53E0((__int64)"Sorry, the DBG file doesn't contain debug information which is supported by IDA");
    return 0;
  }
  return v12;
}
