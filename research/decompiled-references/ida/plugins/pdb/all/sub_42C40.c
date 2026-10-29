__int64 __fastcall sub_42C40(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  char *exception; // rax
  char *v6; // r12
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // rbx
  size_t v11; // rbx
  void *v12; // rax
  void *v13; // rsi
  char *s; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v2 = *a1;
  v18 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 128))(a1, 0, 0);
  if ( (*(unsigned int (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 32))(a1, v3, a2) )
  {
    s = nullptr;
    v15 = 0;
    sub_37FD0((__int64 *)&s, (__int64)"Failed loading symbol data for ID %u", a2);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 296LL))(v3);
    exception = (char *)__cxa_allocate_exception(0x18u);
    v6 = s;
    v7 = exception;
    if ( !(_QWORD)v15 )
      v6 = (char *)::src;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8 + 1;
      v10 = v8;
      src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
      n[0] = v9;
      memmove(src, v6, v10);
      *((_BYTE *)src + v10) = 0;
    }
    v11 = n[0];
    *(_QWORD *)v7 = 0;
    *(_OWORD *)(v7 + 8) = 0;
    if ( v11 )
    {
      v12 = (void *)qalloc_or_throw(v11);
      *(_QWORD *)v7 = v12;
      v13 = src;
      *((_QWORD *)v7 + 2) = v11;
      memcpy(v12, v13, v11);
      *((_QWORD *)v7 + 1) = v11;
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'pdb_exception_t, (void (*)(void *))sub_24570);
  }
  return v3;
}

