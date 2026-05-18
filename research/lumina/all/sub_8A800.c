__int64 __fastcall sub_8A800(__int64 a1)
{
  void *v2; // r12
  void *v3; // rdi
  size_t v4; // rbp
  void *v5; // rdi
  void *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  void *ptr; // [rsp+0h] [rbp-118h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall **v12)(); // [rsp+20h] [rbp-F8h]
  size_t v13; // [rsp+38h] [rbp-E0h]
  __int16 v14; // [rsp+40h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-D0h]
  __int128 v16; // [rsp+50h] [rbp-C8h]
  __int64 v17; // [rsp+60h] [rbp-B8h]
  __int128 v18; // [rsp+68h] [rbp-B0h]
  __int64 v19; // [rsp+78h] [rbp-A0h]
  __int128 v20; // [rsp+80h] [rbp-98h]
  __int16 v21; // [rsp+90h] [rbp-88h]
  __int64 v22; // [rsp+98h] [rbp-80h]
  __int128 v23; // [rsp+A0h] [rbp-78h]
  __int64 v24; // [rsp+B0h] [rbp-68h]
  __int128 v25; // [rsp+B8h] [rbp-60h]
  int v26; // [rsp+C8h] [rbp-50h]
  __int64 v27; // [rsp+D0h] [rbp-48h]
  __int128 v28; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+E8h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)n = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 9, 1);
  v2 = nullptr;
  n[0] = 9;
  strcpy((char *)ptr, "hexvault");
  v3 = ptr;
  v13 = 0;
  v4 = n[0];
  if ( n[0] )
  {
    v7 = (void *)sub_198760(n[0]);
    v13 = v4;
    v2 = v7;
    memcpy(v7, ptr, v4);
    v3 = ptr;
  }
  v14 = -103;
  v15 = 0;
  v17 = 0;
  v12 = (__int64 (__fastcall **)())&off_2365A8;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v23 = 0;
  v25 = 0;
  if ( v3 )
  {
    n[0] = 0;
    j__free(v3);
  }
  v27 = 0;
  v12 = &off_2365F0;
  v28 = 0;
  if ( v4 > 1 )
  {
    v8 = *(void **)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < v4 )
    {
      v9 = sub_1987B0(a1 + 40, *(_QWORD *)(a1 + 40), v4, 1);
      *(_QWORD *)(a1 + 40) = v9;
      v8 = (void *)v9;
    }
    *(_QWORD *)(a1 + 48) = v4;
    memmove(v8, v2, v4 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + v4 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_WORD *)(a1 + 64) = -103;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  if ( v2 )
    j__free(v2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    j__free(v5);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  *(_WORD *)(a1 + 64) = 0;
  return 1;
}
