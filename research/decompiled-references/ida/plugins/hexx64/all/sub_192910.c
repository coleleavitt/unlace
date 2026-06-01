__int64 __fastcall sub_192910(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v12[3] = __readfsqword(0x28u);
  v4 = sub_1922B0(a1 + 16, *(_QWORD *)(v3 + 8), nullptr, *(double *)a3.m128i_i64);
  v12[1] = v5;
  v12[0] = v4;
  if ( (unsigned int)sub_191350(a1, (__int64 *)a2, v12, *(double *)a3.m128i_i64) )
  {
    v6 = 0;
    if ( *(_BYTE *)(a2 + 48) )
      return v6;
    v8 = sub_1918B0(a1, (_QWORD *)a2, *(double *)a3.m128i_i64);
    if ( v8 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC958u, *(double *)a3.m128i_i64);
      BUG();
    }
  }
  else
  {
    v8 = -1;
  }
  v6 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v9 = 0;
    do
    {
      ++v6;
      sub_191EF0(a1, (__int64 *)(*(_QWORD *)a2 + 24 * v9), (__int64)v12, v8, a3);
      v9 = (int)v6;
    }
    while ( (unsigned __int64)(int)v6 < *(_QWORD *)(a2 + 8) );
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v10;
      v6 += sub_192680(a1, (__int64 *)(*(_QWORD *)(a2 + 24) + 24 * v11), (__int64)v12, v8, *(double *)a3.m128i_i64);
      v11 = v10;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(a2 + 32) );
  }
  return v6;
}

