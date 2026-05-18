__int64 __fastcall sub_51CA0(__int64 a1, __int64 a2, char *a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 (*v10)(void); // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, char *, _QWORD *); // rax
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  char v25; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  int v27[4]; // [rsp+18h] [rbp-60h]
  int v28; // [rsp+32h] [rbp-46h]
  __int16 v29; // [rsp+36h] [rbp-42h]
  int v30[2]; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)a1;
  *(_QWORD *)v30 = __readfsqword(0x28u);
  v10 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v10 == (char *)sub_464D0 )
    v11 = a1 + 40;
  else
    v11 = v10();
  v12 = *(unsigned __int8 *)(v11 + 32);
  if ( !(_BYTE)v12 )
    return 0;
  v13 = *(_QWORD *)a1;
  v25 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, char *, _QWORD *))(v13 + 88);
  if ( v14 == sub_4FD20 )
  {
    if ( !*(_DWORD *)(a1 + 208) )
      return 0;
    if ( !*(_BYTE *)(a1 + 352) )
    {
      v16 = a1 + 200;
      if ( a3 )
        *a3 = 0;
      goto LABEL_11;
    }
    v25 = 1;
    v16 = a1 + 200;
    if ( a3 )
      *a3 = 1;
    goto LABEL_16;
  }
  v16 = v14(a1, &v25, nullptr);
  if ( !v16 )
    return 0;
  v24 = v25;
  if ( a3 )
    *a3 = v25;
  if ( v24 )
  {
LABEL_16:
    if ( (a4 & 1) != 0 )
      return 0;
  }
LABEL_11:
  interr_exc_t___vtable_at_1764016(
    0x57u,
    (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
    *(const __m128i **)(a1 + 408),
    (const __m128i *)((char *)&dword_0 + 2),
    a5,
    a6);
  if ( v25 )
  {
    *(_OWORD *)v27 = 0;
    ptr = nullptr;
    v28 = *(_DWORD *)v16;
    v29 = *(_WORD *)(v16 + 4);
    ptr = (void *)sub_1987B0(&ptr, 0, 1, 6);
    v20 = (char *)ptr + 6 * *(_QWORD *)v27;
    *(_DWORD *)v20 = v28;
    *((_WORD *)v20 + 2) = v29;
    v21 = *(_QWORD *)(a1 + 424);
    ++*(_QWORD *)v27;
    sub_19A520(v21);
    v12 = sub_513F0((_QWORD *)a1, (__int64)&ptr, a5, 0);
    interr_exc_t___vtable_at_1764016(
      0x57u,
      (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
      *(const __m128i **)(a1 + 408),
      (const __m128i *)((char *)&dword_0 + 1),
      v22,
      v23);
    sub_19A570(v21);
    if ( ptr )
    {
      *(_QWORD *)v27 = 0;
      j__free(ptr);
    }
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 424);
    sub_19A520(v17);
    sub_4DF50(a1, 0);
    sub_50910(a1);
    interr_exc_t___vtable_at_1764016(
      0x57u,
      (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
      *(const __m128i **)(a1 + 408),
      (const __m128i *)((char *)&dword_0 + 1),
      v18,
      v19);
    sub_19A570(v17);
  }
  return v12;
}
