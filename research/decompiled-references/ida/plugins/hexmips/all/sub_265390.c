__int64 __fastcall sub_265390(__int64 a1, int a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rbp
  _BYTE *v6; // rax
  size_t v7; // rbx
  __int64 *v8; // r12
  size_t v9; // r14
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  src = nullptr;
  v18 = 0;
  if ( a2 > 0 )
  {
    v2 = (void *)qvector_reserve();
    v3 = v18;
    src = v2;
    if ( (unsigned __int64)v18 < a2 + 1LL )
    {
      do
      {
        v4 = v3;
        *((_BYTE *)v2 + v3++) = 32;
        v2 = src;
      }
      while ( a2 != v4 );
    }
    *(_QWORD *)&v18 = a2 + 1LL;
    *((_BYTE *)v2 + a2) = 0;
  }
  sub_F6810((__int64 *)&src);
  v5 = src;
  if ( !src )
    return 0;
  if ( *(_BYTE *)(a1 + 49) )
  {
    if ( *(_BYTE *)src )
    {
      do
      {
        v6 = (_BYTE *)tag_skipcodes();
        if ( !*v6 )
        {
          v5 = src;
          v7 = v6 - (_BYTE *)src;
          goto LABEL_12;
        }
        *(_BYTE *)(a1 + 48) = *v6;
      }
      while ( v6[1] );
      v7 = v6 + 1 - (_BYTE *)src;
      v5 = src;
      goto LABEL_12;
    }
  }
  else if ( (unsigned __int64)v18 > 1 )
  {
    v13 = tag_remove();
    v5 = src;
    v7 = v13;
    if ( v13 )
    {
      v14 = v13 - 1;
      v15 = (char *)src + v13 - 1;
      if ( !((unsigned __int64)v18 | v14) )
        v15 = &byte_4CE9D0;
      *(_BYTE *)(a1 + 48) = *v15;
    }
    goto LABEL_12;
  }
  v7 = 0;
LABEL_12:
  v8 = *(__int64 **)(a1 + 56);
  v9 = v7;
  v10 = v8[1];
  if ( v10 )
  {
    --v10;
    v9 = v7 + v10;
  }
  v11 = *v8;
  if ( v8[2] < v9 + 1 )
  {
    v16 = qvector_reserve();
    *v8 = v16;
    v11 = v16;
  }
  v8[1] = v9 + 1;
  *(_BYTE *)(v11 + v9) = 0;
  memmove((void *)(v10 + *v8), v5, v7);
  if ( src )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return (unsigned int)v7;
}

