__int64 __fastcall sub_7A140(__int64 *a1)
{
  const char *v2; // rdx
  unsigned int v3; // ebx
  size_t v4; // rax
  size_t v5; // r13
  _DWORD *v7; // rsi
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v12; // [rsp+8h] [rbp-1050h]
  char s[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v14; // [rsp+1028h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  if ( !(unsigned __int8)qgetenv("TMPDIR", &v11)
    && !(unsigned __int8)qgetenv("TEMP", &v11)
    && !(unsigned __int8)qgetenv("TMP", &v11) )
  {
    v7 = (_DWORD *)v11;
    if ( *((_QWORD *)&v12 + 1) <= 4u )
    {
      v11 = qvector_reserve(&v11, v11, 5, 1);
      v7 = (_DWORD *)v11;
    }
    *(_QWORD *)&v12 = 5;
    *v7 = 1886221359;
    *(_BYTE *)(v11 + 4) = 0;
  }
  v2 = src;
  if ( (_QWORD)v12 )
    v2 = (const char *)v11;
  qmakepath(s, 4096, v2, "ida", 0);
  v3 = qisdir(s);
  if ( (_BYTE)v3 || !(unsigned int)qmkdir(s, 511) )
    v3 = 1;
  else
    qgetcwd(s, 4096);
  v4 = strlen(s);
  v5 = v4;
  if ( v4 )
  {
    v8 = (void *)*a1;
    v9 = v4 + 1;
    if ( a1[2] < v4 + 1 )
    {
      v10 = qvector_reserve(a1, *a1, v4 + 1, 1);
      *a1 = v10;
      v8 = (void *)v10;
    }
    a1[1] = v9;
    memmove(v8, s, v5);
    *(_BYTE *)(*a1 + v5) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v3;
}
