unsigned __int64 __fastcall sub_12610(_QWORD *a1)
{
  void (__fastcall **v1)(_QWORD *, __int64, __int64); // rax
  __int64 v2; // rax
  __int64 v3; // rbp
  void (__fastcall **v4)(_QWORD *, __int64, __int64); // rax
  int v5; // eax
  unsigned __int16 v7; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int16 v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int16 v9; // [rsp+12h] [rbp-26h] BYREF
  unsigned __int16 v10; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int16 v11; // [rsp+16h] [rbp-22h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v1 = (void (__fastcall **)(_QWORD *, __int64, __int64))*a1;
  v12 = __readfsqword(0x28u);
  v2 = ((__int64 (__fastcall *)(_QWORD *))v1[9])(a1);
  v3 = *(_QWORD *)v2 + 120LL * *(int *)(v2 + 24);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, 2, v3 + 32);
  v7 = 0;
  v4 = (void (__fastcall **)(_QWORD *, __int64, __int64))*a1;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  v9 = 0;
  (*v4)(a1, 33, (__int64)&v8);
  v5 = *(_DWORD *)(v3 + 24);
  if ( !v5 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a1)(a1, 3, &v9);
    (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a1)(a1, 4, &v10);
    v5 = *(_DWORD *)(v3 + 24);
  }
  if ( v5 == 13 )
    (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a1)(a1, 35, &v11);
  (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int16 *))*a1)(a1, 34, &v7);
  *(_QWORD *)(v3 + 40) = v7;
  *(_QWORD *)(v3 + 48) = v8;
  *(_QWORD *)(v3 + 56) = v9;
  *(_QWORD *)(v3 + 64) = v10;
  *(_QWORD *)(v3 + 72) = v11;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, 9, v3 + 80);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, 21, v3 + 88);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, 20, v3 + 96);
  return v12 - __readfsqword(0x28u);
}

