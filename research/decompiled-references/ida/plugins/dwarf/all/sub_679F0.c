__int64 __fastcall sub_679F0(__int64 a1, __int64 a2)
{
  const char *v3; // rbp
  __int64 result; // rax
  size_t v5; // rax
  _BYTE *v6; // rsi
  size_t v7; // r12
  size_t v8; // r13
  __int64 v9; // rax

  v3 = (const char *)sub_986B0(*(_QWORD *)(a1 + 32));
  result = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v5 = strlen(v3);
    v6 = *(_BYTE **)a2;
    v7 = v5;
    v8 = v5 + 1;
    if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
    {
      v9 = qvector_reserve(a2, v6, v5 + 1, 1);
      *(_QWORD *)a2 = v9;
      v6 = (_BYTE *)v9;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v6[v7] = 0;
    memmove(*(void **)a2, v3, v7);
    return 1;
  }
  return result;
}

