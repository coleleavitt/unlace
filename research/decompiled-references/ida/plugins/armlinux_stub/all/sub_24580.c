__int64 __fastcall sub_24580(
        __int64 a1,
        __int64 *a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  size_t v12; // rbp
  void *v13; // r13
  void *v14; // rsi
  unsigned __int64 *v15; // rsi
  __int64 *v16; // rdi
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // rbp
  size_t v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+0h] [rbp-58h] BYREF
  size_t v29; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]
  _BYTE v32[5]; // [rsp+23h] [rbp-35h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-30h] BYREF

  v33 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  src = a3;
  v31 = a4;
  v10 = (unsigned int)unpack_dd();
  v11 = unpack_dd();
  v12 = v11;
  if ( !v11 )
    return 1;
  v13 = (void *)qalloc();
  if ( !v13 )
    return 2;
  v14 = src;
  if ( v31 < (unsigned __int64)src + v12 || (char *)src + v12 < src )
    return 1;
  src = (char *)src + v12;
  memcpy(v13, v14, v12);
  v28 = 0;
  v29 = 0;
  (*(void (__fastcall **)(__int64, _QWORD, void *, size_t, __int64 *, size_t *))(a1 + 40))(
    a1,
    (unsigned int)v10,
    v13,
    v12,
    &v28,
    &v29);
  qfree();
  v15 = &v33;
  v16 = (__int64 *)v32;
  v17 = pack_dd() - (_QWORD)v32;
  if ( v17 )
  {
    v15 = (unsigned __int64 *)v32;
    v16 = a2;
    sub_23C50(a2, v32, v17);
  }
  v21 = v29;
  if ( HIDWORD(v29) )
  {
    sub_23C30(v16, v15, v18, v19, v20);
    return sub_24730(v16, v15, v24, v25, v26, v27, a7, a8, a9);
  }
  else
  {
    v22 = pack_dd() - (_QWORD)v32;
    if ( v22 )
      sub_23C50(a2, v32, v22);
    if ( v21 )
      sub_23C50(a2, (const void *)v10, v21);
    qfree();
    return 0;
  }
}

