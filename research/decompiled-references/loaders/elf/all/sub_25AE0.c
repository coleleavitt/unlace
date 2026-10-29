__int64 __fastcall sub_25AE0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  void *v7; // rdi
  size_t v8; // rbx
  __int64 result; // rax
  size_t v10; // rbx

  v4 = *(_QWORD *)(a1 + 176);
  v5 = a2[1];
  v6 = *(_QWORD *)(a1 + 184);
  v7 = (void *)(a1 + v4 + 192);
  v8 = v6 - v4;
  if ( v8 > a2[2] - v5 )
    v8 = a2[2] - v5;
  memcpy(v7, (const void *)(*a2 + v5), v8);
  a2[1] += v8;
  result = 0;
  v10 = *(_QWORD *)(a1 + 176) + v8;
  if ( v10 == *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)(a1 + 176) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(a1 + 176) = v10;
  }
  return result;
}
