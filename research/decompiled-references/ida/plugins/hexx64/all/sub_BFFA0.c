__int64 __fastcall sub_BFFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 result; // rax
  int v11; // r14d
  __int64 v12; // [rsp-10h] [rbp-38h]

  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(0xC717u, *(double *)a5.m128i_i64);
LABEL_20:
    BUG();
  }
  if ( *(_DWORD *)(a1 + 420) != -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D9u, *(double *)a5.m128i_i64);
    goto LABEL_20;
  }
  v6 = sub_BFEB0(a1, a2, a3, a4);
  v7 = v6;
  if ( *(_BYTE *)(a3 + 64) || *(_BYTE *)(v6 + 64) == 8 )
  {
    v8 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 68);
    sub_11CDA0(v6 + 64);
    *(_DWORD *)(v7 + 68) = v11;
    v8 = *(_DWORD *)(a1 + 416);
    if ( (v8 & 2) != 0 )
    {
      v8 = v8 & 0xFFFFFFFD ^ 1;
      *(_DWORD *)(a1 + 416) = v8;
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL);
  if ( (v8 & 1) != 0 )
    sub_12B6F0(v7, v9, 6, -1, 1);
  sub_122290(v7, *(_QWORD *)(a3 + 24));
  if ( (*(_BYTE *)(a1 + 416) & 2) != 0 )
  {
    sub_1262E0(a3 + 32, (unsigned __int8 *)v7);
    sub_120A10(a3 + 48, v9, 0, *(_DWORD *)(a3 + 36), -1, 0);
    *(_DWORD *)a3 = 43;
  }
  else
  {
    sub_11D890(a3, v7);
  }
  sub_15BC70((unsigned int *)a3, *(unsigned __int64 **)(*(_QWORD *)(a1 + 320) + 1504LL), a2, 0, nullptr, nullptr, a5, 0);
  result = v12;
  if ( v7 )
  {
    sub_11CDA0(v7 + 64);
    sub_11CDA0(v7 + 48);
    sub_11CDA0(v7 + 32);
    return j__qfree(v7);
  }
  return result;
}

