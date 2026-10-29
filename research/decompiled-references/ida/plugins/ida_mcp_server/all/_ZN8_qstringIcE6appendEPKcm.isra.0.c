void *__fastcall _qstring<char>::append(__int64 *a1, const void *a2, size_t a3)
{
  size_t v4; // r9
  __int64 v5; // rsi
  __int64 v6; // r8
  size_t v7; // r10
  size_t v8; // rdx
  __int64 v10; // rax
  size_t v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]
  size_t v13; // [rsp+18h] [rbp-20h]
  const void *v14; // [rsp+20h] [rbp-18h]
  size_t v15; // [rsp+28h] [rbp-10h]

  v4 = a3;
  v5 = *a1;
  v6 = (a1[1] == 0) + a1[1] - 1;
  v7 = v6 + a3;
  v8 = (a1[1] == 0) + a1[1] + a3;
  if ( a1[2] < v8 )
  {
    v15 = v4;
    v14 = a2;
    v13 = v7;
    v12 = (a1[1] == 0) + a1[1] - 1;
    v11 = v8;
    v10 = qvector_reserve();
    v4 = v15;
    a2 = v14;
    v7 = v13;
    v5 = v10;
    v6 = v12;
    v8 = v11;
    *a1 = v10;
  }
  a1[1] = v8;
  *(_BYTE *)(v5 + v7) = 0;
  return memmove((void *)(*a1 + v6), a2, v4);
}

