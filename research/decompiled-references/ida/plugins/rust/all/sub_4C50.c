unsigned __int64 __fastcall sub_4C50(__int64 a1)
{
  size_t v2; // rbp
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // r12
  __int64 v6; // r13
  void *v7; // rsi
  void *v8; // rax
  const void *v9; // rsi
  const char *v10; // rsi
  bool v11; // zf
  void *v13; // rdi
  size_t v14; // r13
  __int64 v15; // [rsp+8h] [rbp-80h] BYREF
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __int128 v17; // [rsp+18h] [rbp-70h]
  const char *v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)a1 = &off_9A98;
  *(_QWORD *)(a1 + 144) = &off_9AC0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = a1;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = &off_9AE8;
  *(_QWORD *)(a1 + 184) = a1;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 64;
  *(_WORD *)(a1 + 212) = -256;
  *(_BYTE *)(a1 + 214) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_47C0(a1);
  v2 = *(_QWORD *)(a1 + 112);
  dest = nullptr;
  v17 = 0;
  if ( v2 )
  {
    v8 = (void *)qalloc_or_throw(v2);
    v9 = *(const void **)(a1 + 104);
    dest = v8;
    *((_QWORD *)&v17 + 1) = v2;
    memcpy(v8, v9, v2);
    *(_QWORD *)&v17 = v2;
    if ( v2 != 1 )
    {
      v18 = nullptr;
      v6 = a1 + 128;
      v19 = 0;
LABEL_6:
      v7 = dest;
      goto LABEL_7;
    }
  }
  v3 = idadir(0);
  qmakepath(src, 4096, v3, "librustdemangle.so", 0);
  v4 = strlen(src);
  v5 = v4;
  if ( !v4 )
  {
    v6 = a1 + 128;
    *(_QWORD *)&v17 = 0;
    v7 = &unk_71C5;
    v18 = nullptr;
    v19 = 0;
    goto LABEL_7;
  }
  v13 = dest;
  v14 = v4 + 1;
  if ( *((_QWORD *)&v17 + 1) < v4 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v14, 1);
    v13 = dest;
  }
  *(_QWORD *)&v17 = v14;
  v6 = a1 + 128;
  memmove(v13, src, v5);
  v7 = &unk_71C5;
  *((_BYTE *)dest + v5) = 0;
  v18 = nullptr;
  v19 = 0;
  if ( (_QWORD)v17 )
    goto LABEL_6;
LABEL_7:
  if ( !(unsigned __int8)sub_6510(v6, v7, &v18) )
  {
    v10 = (const char *)&unk_71C5;
    if ( (_QWORD)v19 )
      v10 = v18;
    sub_3110((__int64)"WARNING: %s\n", v10);
  }
  hook_event_listener(3, a1 + 144, a1, 0);
  hook_event_listener(0, a1 + 168, a1, 0);
  v11 = *(_BYTE *)(a1 + 213) == 0;
  *(_DWORD *)(a1 + 204) = 1;
  if ( !v11 )
  {
    netnode_check(&v15, "$ rust", 0, 0);
    *(_DWORD *)(a1 + 200) = netnode_altval(v15, -1, 65);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( dest )
  {
    *(_QWORD *)&v17 = 0;
    qfree(dest);
  }
  return v20 - __readfsqword(0x28u);
}

