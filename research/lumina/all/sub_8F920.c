__int64 __fastcall sub_8F920(__int64 a1, __int64 a2, char a3)
{
  size_t v4; // r13
  size_t v6; // r13
  size_t v7; // r13
  size_t v8; // r13
  size_t v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r9
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  __int64 (__fastcall **v30)(); // [rsp+0h] [rbp-D8h] BYREF
  int v31; // [rsp+8h] [rbp-D0h]
  void *v32; // [rsp+10h] [rbp-C8h]
  __int128 v33; // [rsp+18h] [rbp-C0h]
  void *v34; // [rsp+28h] [rbp-B0h]
  __int128 v35; // [rsp+30h] [rbp-A8h]
  void *v36; // [rsp+40h] [rbp-98h]
  __int128 v37; // [rsp+48h] [rbp-90h]
  void *ptr; // [rsp+58h] [rbp-80h]
  __int128 v39; // [rsp+60h] [rbp-78h]
  void *v40; // [rsp+70h] [rbp-68h]
  __int128 v41; // [rsp+78h] [rbp-60h]
  __int64 v42; // [rsp+88h] [rbp-50h]
  char v43; // [rsp+90h] [rbp-48h]
  char v44; // [rsp+98h] [rbp-40h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  v45 = __readfsqword(0x28u);
  LOBYTE(v31) = 13;
  v33 = 0;
  v30 = &off_237D98;
  v32 = nullptr;
  if ( v4 )
  {
    v20 = (void *)sub_198760(v4);
    v21 = *(const void **)a2;
    *((_QWORD *)&v33 + 1) = v4;
    v32 = v20;
    memcpy(v20, v21, v4);
    *(_QWORD *)&v33 = v4;
  }
  v6 = *(_QWORD *)(a2 + 32);
  v34 = nullptr;
  v35 = 0;
  if ( v6 )
  {
    v28 = (void *)sub_198760(v6);
    v29 = *(const void **)(a2 + 24);
    v34 = v28;
    *((_QWORD *)&v35 + 1) = v6;
    memcpy(v28, v29, v6);
    *(_QWORD *)&v35 = v6;
  }
  v7 = *(_QWORD *)(a2 + 56);
  v36 = nullptr;
  v37 = 0;
  if ( v7 )
  {
    v26 = (void *)sub_198760(v7);
    v27 = *(const void **)(a2 + 48);
    v36 = v26;
    *((_QWORD *)&v37 + 1) = v7;
    memcpy(v26, v27, v7);
    *(_QWORD *)&v37 = v7;
  }
  v8 = *(_QWORD *)(a2 + 80);
  ptr = nullptr;
  v39 = 0;
  if ( v8 )
  {
    v24 = (void *)sub_198760(v8);
    v25 = *(const void **)(a2 + 72);
    ptr = v24;
    *((_QWORD *)&v39 + 1) = v8;
    memcpy(v24, v25, v8);
    *(_QWORD *)&v39 = v8;
  }
  v9 = *(_QWORD *)(a2 + 104);
  v40 = nullptr;
  v41 = 0;
  if ( v9 )
  {
    v22 = (void *)sub_198760(v9);
    v23 = *(const void **)(a2 + 96);
    v40 = v22;
    *((_QWORD *)&v41 + 1) = v9;
    memcpy(v22, v23, v9);
    *(_QWORD *)&v41 = v9;
  }
  v10 = *(_QWORD *)(a2 + 120);
  v44 = a3;
  v42 = v10;
  v43 = *(_BYTE *)(a2 + 128);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v30);
  v16 = sub_8ACB0((_QWORD *)(a1 + 40), v11, 10, nullptr, v12, v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), int, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD))(*(_QWORD *)v11 + 8LL))(
      v11,
      v11,
      v14,
      v15,
      v17,
      v18,
      v30,
      v31,
      v32,
      v33,
      *((_QWORD *)&v33 + 1),
      v34,
      v35,
      *((_QWORD *)&v35 + 1),
      v36,
      v37,
      *((_QWORD *)&v37 + 1),
      ptr,
      v39,
      *((_QWORD *)&v39 + 1),
      v40,
      v41,
      *((_QWORD *)&v41 + 1));
  sub_AA4E0(&v30);
  return v16;
}
