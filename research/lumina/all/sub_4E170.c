void *__fastcall sub_4E170(__int64 a1, __int64 a2, char **a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  size_t v7; // rbp
  __int16 v8; // r13
  __int64 v9; // rdi
  void *v10; // rbp
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r13
  __int16 v16; // cx
  unsigned __int64 v17; // r14
  void *v19; // rax
  const char *v20; // rsi
  const char *v21; // rbx
  char *v22; // rax
  const char *v23; // rbx
  void *v24; // [rsp+8h] [rbp-140h] BYREF
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  __int128 v26; // [rsp+18h] [rbp-130h]
  void *v27; // [rsp+30h] [rbp-118h] BYREF
  __int128 v28; // [rsp+38h] [rbp-110h]
  __int64 v29; // [rsp+50h] [rbp-F8h] BYREF
  void *v30; // [rsp+58h] [rbp-F0h]
  __int128 v31; // [rsp+60h] [rbp-E8h]
  __int16 v32; // [rsp+70h] [rbp-D8h]
  void *v33; // [rsp+78h] [rbp-D0h]
  __int128 v34; // [rsp+80h] [rbp-C8h]
  void *v35; // [rsp+90h] [rbp-B8h]
  __int128 v36; // [rsp+98h] [rbp-B0h]
  void *v37; // [rsp+A8h] [rbp-A0h]
  __int128 v38; // [rsp+B0h] [rbp-98h]
  __int16 v39; // [rsp+C0h] [rbp-88h]
  void *v40; // [rsp+C8h] [rbp-80h]
  __int128 v41; // [rsp+D0h] [rbp-78h]
  void *v42; // [rsp+E0h] [rbp-68h]
  __int128 v43; // [rsp+E8h] [rbp-60h]
  __int64 (__fastcall *v44)(__int64, __int64 (__fastcall ***)(_QWORD), __int64, const __m128i *, __int64, __int64); // [rsp+F8h] [rbp-50h]
  __int64 v45; // [rsp+100h] [rbp-48h]
  int v46; // [rsp+108h] [rbp-40h]
  unsigned __int64 v47; // [rsp+118h] [rbp-30h]

  v4 = *(unsigned __int8 *)(a2 + 26);
  v47 = __readfsqword(0x28u);
  v6 = sub_1671B0(v4);
  v7 = *(_QWORD *)(a2 + 8);
  v29 = 192;
  v24 = (void *)v6;
  v8 = *(_WORD *)(a2 + 24);
  v9 = v6;
  v30 = nullptr;
  v31 = 0;
  if ( v7 )
  {
    v19 = (void *)sub_198760(v7);
    v20 = *(const char **)a2;
    *((_QWORD *)&v31 + 1) = v7;
    v30 = v19;
    memcpy(v19, v20, v7);
    *(_QWORD *)&v31 = v7;
    v9 = (__int64)v24;
  }
  v32 = v8;
  v33 = nullptr;
  v35 = nullptr;
  v37 = nullptr;
  v39 = 0;
  v40 = nullptr;
  v42 = nullptr;
  v45 = 0;
  v44 = sub_4B1B0;
  v46 = 100;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v41 = 0;
  v43 = 0;
  v10 = v24;
  if ( !(unsigned __int8)sub_167220(v9, &v29) )
  {
    v11 = (const char *)sub_167200(v24);
    ptr = nullptr;
    v12 = v11;
    v26 = 0;
    if ( v11 )
    {
      v13 = strlen(v11);
      v14 = v13 + 1;
      v15 = v13;
      ptr = (void *)sub_1987B0(&ptr, 0, v13 + 1, 1);
      *(_QWORD *)&v26 = v14;
      memmove(ptr, v12, v15);
      *((_BYTE *)ptr + v15) = 0;
    }
    sub_1672A0(&v24, 0xFFFFFFFFLL);
    v16 = *(_WORD *)(a2 + 24);
    v17 = *(_QWORD *)(a2 + 8);
    v27 = nullptr;
    v28 = 0;
    if ( v16 )
    {
      if ( !v17 || (v21 = *(const char **)a2, *v21 == 91) || (v22 = strchr(v21, 58)) == nullptr || v22 - v21 == -1 )
        sub_299F0((char **)&v27);
      else
        sub_299F0((char **)&v27);
    }
    else if ( v17 >= 2 )
    {
      v23 = *(const char **)a2;
      v27 = (void *)sub_1987B0(&v27, 0, v17, 1);
      *(_QWORD *)&v28 = v17;
      memmove(v27, v23, v17 - 1);
      *((char *)v27 + v17 - 1) = 0;
    }
    sub_299F0(a3);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      j__free(v27);
    }
    v24 = nullptr;
    v10 = ptr;
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      j__free(ptr);
      v10 = v24;
    }
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    j__free(v42);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    j__free(v40);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    j__free(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    j__free(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    j__free(v33);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    j__free(v30);
  }
  return v10;
}
