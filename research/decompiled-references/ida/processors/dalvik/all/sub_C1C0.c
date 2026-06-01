_QWORD *__fastcall sub_C1C0(_QWORD *a1, __int64 a2)
{
  bool v2; // cc
  const char *v3; // rsi
  char *v4; // rbp
  char *v5; // rsi
  char *v6; // rax
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  void *v11; // rax
  size_t v12; // r12
  __int64 v13; // rcx
  _BYTE *v14; // rax
  _DWORD *v16; // rax
  void *v17; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8) <= 1u;
  v20 = __readfsqword(0x28u);
  if ( v2 )
  {
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    v16 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
    *a1 = v16;
    a1[1] = 8;
    *v16 = 1852534389;
    *(_DWORD *)((char *)v16 + 3) = 1853321070;
    *(_BYTE *)(*a1 + 7LL) = 0;
    return a1;
  }
  v3 = *(const char **)a2;
  s = nullptr;
  *(_OWORD *)n = 0;
  sub_BCC0((size_t *)&s, v3);
  v4 = s;
  v5 = (_BYTE *)(&qword_28 + 6);
  v6 = strrchr(s, 46);
  if ( v6 )
  {
    *a1 = 0;
    v7 = v6 + 1;
    *(_OWORD *)(a1 + 1) = 0;
    v8 = strlen(v6 + 1);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (void *)qvector_reserve(a1, 0, v8 + 1, 1);
    *a1 = v11;
    v5 = v7;
    a1[1] = v9;
    memmove(v11, v7, v10);
    *(_BYTE *)(*a1 + v10) = 0;
    v12 = a1[1];
    goto LABEL_4;
  }
  v12 = n[0];
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( v12 )
  {
    v17 = (void *)qalloc_or_throw(v12);
    *a1 = v17;
    v5 = s;
    a1[2] = v12;
    memcpy(v17, v5, v12);
    a1[1] = v12;
LABEL_4:
    if ( v12 > 1 )
    {
      sub_BB40(a1);
      v13 = *a1;
      v14 = (_BYTE *)*a1;
      if ( a1[1] )
      {
        do
        {
          if ( (*v14 & 0xFD) == 0x3C )
          {
            *v14 = 95;
            v13 = *a1;
          }
          ++v14;
        }
        while ( v14 != (_BYTE *)(v13 + a1[1]) );
      }
    }
    v4 = s;
  }
  if ( v4 )
  {
    n[0] = 0;
    qfree(v4, v5);
  }
  return a1;
}

