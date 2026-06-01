_QWORD *__fastcall sub_A38B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128i a6)
{
  __int64 v6; // rbp
  int v7; // r14d
  _QWORD *v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 v12[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (a5 & 1) == 0 )
    return nullptr;
  if ( (a5 & 2) != 0 )
    return (_QWORD *)a2;
  v6 = a3;
  if ( a3 )
  {
    v7 = *(_DWORD *)(a2 + 68);
    if ( a4 )
    {
      if ( *(_DWORD *)(a3 + 4) + *(_DWORD *)(a4 + 4) == v7 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) )
        {
          v11 = a4;
          a4 = a3;
          v6 = v11;
        }
        sub_11CA10((char *)(a2 + 64), (char *)a4);
        sub_A2B00(
          (__int64)v12,
          *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL),
          *(_QWORD *)(a2 + 24),
          a2 + 48,
          v7 - *(_DWORD *)(v6 + 4),
          1,
          a6);
        v8 = sub_A3240(a1, a2, 2, (unsigned __int8 *)(a2 + 32), v12, (unsigned __int8 *)v6, a6);
        sub_A3780(a1, a2, (__int64)v8, *(double *)a6.m128i_i64);
        goto LABEL_9;
      }
      if ( !under_debugger )
        sub_383060(0xCE5Du, *(double *)a6.m128i_i64);
LABEL_24:
      BUG();
    }
    v10 = *(_QWORD *)(a1 + 480);
    if ( !*(_BYTE *)(v10 + 145) )
    {
      sub_11CA10((char *)(a2 + 64), (char *)a3);
      return (_QWORD *)a2;
    }
  }
  else
  {
    if ( !a4 )
    {
      if ( !under_debugger )
        sub_383060(0xC785u, *(double *)a6.m128i_i64);
      goto LABEL_24;
    }
    v10 = *(_QWORD *)(a1 + 480);
    if ( *(_BYTE *)(v10 + 145) )
    {
      sub_11CA10((char *)(a2 + 64), (char *)a4);
      return (_QWORD *)a2;
    }
    v7 = *(_DWORD *)(a2 + 68);
    v6 = a4;
  }
  sub_A2B00(
    (__int64)v12,
    *(unsigned __int64 **)(v10 + 112),
    *(_QWORD *)(a2 + 24),
    a2 + 48,
    v7 - *(_DWORD *)(v6 + 4),
    1,
    a6);
  sub_11CA10((char *)(a2 + 48), (char *)v12);
  sub_11CA10((char *)(a2 + 64), (char *)v6);
  v8 = (_QWORD *)a2;
LABEL_9:
  sub_11CDA0((__int64)v12);
  return v8;
}

