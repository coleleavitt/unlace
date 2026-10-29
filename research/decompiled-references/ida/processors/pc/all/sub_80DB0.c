unsigned __int64 __fastcall sub_80DB0(_QWORD *a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // r12
  bool v3; // zf
  __int64 v4; // rbp
  void (__fastcall *v5)(_QWORD *, const char *, _QWORD); // rax
  const char *v6; // rsi
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  char v13; // dl
  __int64 v14; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v19; // [rsp+408h] [rbp-40h]

  v1 = -32769;
  v2 = 0x8000;
  v3 = a1[34] == 32;
  v19 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v1 = 0xFFFFFFFF7FFFFFFFLL;
    v2 = 0x80000000LL;
  }
  v4 = a1[39];
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 28);
  v5 = *(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL);
  if ( a1[34] == 32 )
  {
    v17 = "VxD";
    if ( a1[39] >> 16 == 1 )
      v17 = "VMM";
    v5(a1, v17, 0);
  }
  else
  {
    v5(a1, "WDM", 0);
  }
  v6 = "Call";
  if ( (v4 & v2) != 0 )
    v6 = "Jmp";
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v6, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 28);
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v7 != sub_7D640 )
  {
    v7(a1, 32);
    goto LABEL_11;
  }
  v8 = a1[4];
  if ( v8 )
  {
    v11 = v8 + 1;
    v10 = a1[4];
    v9 = a1[3];
    --v8;
    if ( a1[5] >= v11 )
      goto LABEL_10;
LABEL_16:
    v16 = qvector_reserve();
    a1[3] = v16;
    v9 = v16;
    goto LABEL_10;
  }
  v9 = a1[3];
  v10 = 1;
  v11 = 2;
  if ( a1[5] < 2u )
    goto LABEL_16;
LABEL_10:
  a1[4] = v11;
  *(_BYTE *)(v9 + v8) = 32;
  *(_BYTE *)(a1[3] + v10) = 0;
LABEL_11:
  v12 = v1 & v4;
  v13 = sub_61860(a1[77], a1 + 28, (__int64)&v18);
  v14 = *a1;
  if ( v13 && BYTE6(v18) )
  {
    (*(void (__fastcall **)(_QWORD *, char *, __int64))(v14 + 56))(a1, (char *)&v18 + 6, 34);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(v14 + 64))(a1, 13);
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*a1 + 104LL))(a1, v12, 16);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 13);
  }
  return v19 - __readfsqword(0x28u);
}
