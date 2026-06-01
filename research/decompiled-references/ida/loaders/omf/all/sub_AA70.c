unsigned __int64 __fastcall sub_AA70(__int64 a1, char a2)
{
  __int64 v4; // rsi
  const char *v5; // rax
  __int64 v6; // rdx
  _BOOL8 v7; // rcx
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  unsigned __int16 v12; // si
  const char *v13; // rdi
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  while ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(a1 + 8) )
  {
    v4 = -1;
    v5 = sub_7530(a1, 0xFFFFFFFFFFFFFFFFLL);
    src = nullptr;
    v8 = v5;
    v16 = 0;
    if ( v5 )
    {
      v9 = strlen(v5);
      v10 = v9 + 1;
      v11 = v9;
      v4 = (__int64)v8;
      src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
      *(_QWORD *)&v16 = v10;
      memmove(src, v8, v11);
      *((_BYTE *)src + v11) = 0;
    }
    v12 = sub_6A10(a1, v4, v6, v7);
    v13 = ::src;
    if ( (_QWORD)v16 )
      v13 = (const char *)src;
    sub_A940(v13, v12, a2);
    if ( src )
    {
      *(_QWORD *)&v16 = 0;
      qfree(src);
    }
  }
  return v17 - __readfsqword(0x28u);
}

