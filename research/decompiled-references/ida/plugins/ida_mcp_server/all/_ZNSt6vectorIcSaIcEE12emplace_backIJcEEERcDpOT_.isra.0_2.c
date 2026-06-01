_BYTE *__fastcall std::vector<char>::emplace_back<char>(_QWORD *a1, char a2)
{
  _BYTE *result; // rax
  _BYTE *v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r9
  _BYTE *v6; // rax
  size_t v7; // rdx
  void *v8; // r9
  __int64 v9; // r8
  _BYTE *v10; // r10
  void *v11; // r11
  _QWORD *v12; // rcx
  const void *v13; // rsi
  _BYTE *v14; // rax
  void *v15; // [rsp+0h] [rbp-38h]
  void *v16; // [rsp+0h] [rbp-38h]
  void *v17; // [rsp+0h] [rbp-38h]
  size_t n; // [rsp+8h] [rbp-30h]
  size_t na; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+10h] [rbp-28h]
  _BYTE *v21; // [rsp+10h] [rbp-28h]
  void *src; // [rsp+18h] [rbp-20h]
  void *srca; // [rsp+18h] [rbp-20h]
  _QWORD *srcb; // [rsp+18h] [rbp-20h]

  result = (_BYTE *)a1[1];
  if ( result == (_BYTE *)a1[2] )
  {
    v3 = &result[-*a1];
    if ( v3 == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
      std::vector<char>::emplace_back<char>();
    v4 = 1;
    if ( v3 )
      v4 = (__int64)&result[-*a1];
    src = (void *)*a1;
    v5 = (unsigned __int64)&v3[v4];
    v20 = a1[2];
    n = (size_t)&result[-*a1];
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL )
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    v15 = (void *)v5;
    v6 = (_BYTE *)operator new(v5);
    v7 = n;
    v8 = v15;
    v9 = v20;
    v10 = v6;
    v6[n] = a2;
    v11 = src;
    v12 = a1;
    if ( n )
    {
      v13 = src;
      srca = v15;
      v16 = v11;
      v14 = memcpy(v6, v13, n);
      v12 = a1;
      v8 = srca;
      v9 = v20;
      v7 = n;
      v10 = v14;
      v11 = v16;
    }
    result = &v10[v7 + 1];
    if ( v11 )
    {
      srcb = v12;
      v21 = v10;
      na = (size_t)&v10[v7 + 1];
      v17 = v8;
      operator delete(v11, v9 - (_QWORD)v11);
      v12 = srcb;
      v10 = v21;
      result = (_BYTE *)na;
      v8 = v17;
    }
    *v12 = v10;
    v12[1] = result;
    v12[2] = &v10[(_QWORD)v8];
  }
  else
  {
    *result = a2;
    ++a1[1];
  }
  return result;
}

