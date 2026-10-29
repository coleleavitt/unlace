unsigned __int64 __fastcall sub_12490(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // eax
  __int16 v7; // [rsp+Eh] [rbp-2Ah] BYREF
  __int16 v8; // [rsp+10h] [rbp-28h] BYREF
  __int16 v9; // [rsp+12h] [rbp-26h] BYREF
  __int16 v10; // [rsp+14h] [rbp-24h] BYREF
  __int16 v11; // [rsp+16h] [rbp-22h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v1 = *a1;
  v12 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(__int64 *))(v1 + 72))(a1);
  v3 = *(_QWORD *)v2 + 120LL * *(int *)(v2 + 24);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 8))(a1, 2, v3 + 32);
  v7 = *(_QWORD *)(v3 + 40) > 0LL;
  v8 = *(_QWORD *)(v3 + 48) > 0LL;
  v9 = 0;
  v4 = *a1;
  v10 = 0;
  v11 = 0;
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(v4 + 8))(a1, 33, &v8);
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 )
  {
    if ( v5 == 13 )
      v11 = *(_QWORD *)(v3 + 72) > 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v3 + 56) > 0LL;
    v10 = *(_QWORD *)(v3 + 64) > 0LL;
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a1 + 8))(a1, 3, &v9);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a1 + 8))(a1, 4, &v10);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a1 + 8))(a1, 35, &v11);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a1 + 8))(a1, 34, &v7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 8))(a1, 9, v3 + 80);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 8))(a1, 21, v3 + 88);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 8))(a1, 20, v3 + 96);
  return v12 - __readfsqword(0x28u);
}

