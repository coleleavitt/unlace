__int64 __fastcall sub_163D80(__int64 a1, const char *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5, __int64 **a6, double a7)
{
  unsigned int v12; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  const char *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // [rsp+0h] [rbp-68h] BYREF
  const char *v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  *a3 = 0;
  v24 = __readfsqword(0x28u);
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a6 )
    *a6 = nullptr;
  v20 = nullptr;
  v21 = 20;
  v22 = 0x100000000LL;
  v23 = 0;
  if ( (unsigned int)sub_FEBD0(a1, (__int64)a2) )
    goto LABEL_8;
  v14 = (_QWORD *)sub_D1E10(160, (__int64)a2);
  v19 = v14;
  if ( !v14 )
    goto LABEL_8;
  *v14 = 0;
  v12 = sub_142D90(
          a1,
          (__int64)a2,
          (unsigned int (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))sub_10B610,
          (__int64)&v19,
          a6,
          a7);
  *v19 = HIDWORD(v22);
  if ( (_BYTE)v12 != 4 )
  {
    sub_C91C0((__int64)v20, (__int64)a2);
    if ( v12 )
    {
      sub_CA0B0(v19 + 1, (__int64)a2);
      return v12;
    }
    v15 = v19;
    if ( (unsigned int)v21 <= HIDWORD(v22) )
      goto LABEL_14;
    v18 = 8LL * HIDWORD(v22);
    v15 = (_QWORD *)sub_D2640((__int64)v19, v18);
    if ( v15 )
    {
      v19 = v15;
LABEL_14:
      *a3 = v15 + 1;
      if ( a5 )
        *a5 = v22;
      if ( a4 )
        *a4 = HIDWORD(v21);
      return v12;
    }
    sub_CA0B0(v19 + 1, v18);
LABEL_8:
    *(_DWORD *)(a1 + 80) = 7;
    return 7;
  }
  sub_CA0B0(v19 + 1, (__int64)a2);
  v16 = v20;
  if ( v20 )
  {
    if ( a6 )
    {
      sub_C91C0((__int64)*a6, (__int64)a2);
      a2 = v20;
      v17 = sub_105970("%s", v20);
      v16 = v20;
      *a6 = v17;
    }
    sub_C91C0((__int64)v16, (__int64)a2);
  }
  v12 = v23;
  *(_DWORD *)(a1 + 80) = v23;
  return v12;
}
