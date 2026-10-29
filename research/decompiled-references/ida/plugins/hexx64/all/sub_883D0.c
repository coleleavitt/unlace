__int64 __fastcall sub_883D0(__int64 a1, __int64 a2, __m128i a3)
{
  unsigned __int8 *v3; // rdx
  unsigned int v4; // eax
  char v5; // r12
  __int64 v6; // r12
  __int64 v7; // r12

  v3 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_7A4F0(*(double *)a3.m128i_i64);
  v4 = *v3;
  *(_QWORD *)a2 = v3 + 1;
  *(_DWORD *)a1 = v4;
  if ( v4 > 0x48 )
  {
    if ( !under_debugger )
      sub_383060(0xC59Eu, *(double *)a3.m128i_i64);
    BUG();
  }
  v5 = byte_4247A0[v4];
  if ( (v5 & 1) != 0 && !(unsigned __int8)sub_87990((unsigned __int8 *)(a1 + 32), a2, a3) )
    return 0;
  if ( (v5 & 2) != 0 && !(unsigned __int8)sub_87990((unsigned __int8 *)(a1 + 48), a2, a3) )
    return 0;
  if ( (v5 & 4) != 0 && !(unsigned __int8)sub_87990((unsigned __int8 *)(a1 + 64), a2, a3) )
    return 0;
  *(_DWORD *)(a1 + 4) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128i_i64);
  v6 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 48) <= 3u )
    v7 = sub_7CEC0((_QWORD *)a2, *(double *)a3.m128i_i64) + v6;
  else
    v7 = sub_7CF00((_QWORD *)a2, *(double *)a3.m128i_i64) + v6;
  *(_QWORD *)(a1 + 24) = v7;
  return 1;
}

