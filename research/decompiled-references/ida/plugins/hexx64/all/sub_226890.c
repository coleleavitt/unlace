unsigned __int64 __fastcall sub_226890(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // r12
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int128 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_2262B0(a1);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 480) != -1 )
    goto LABEL_2;
  if ( sub_21EA00(a1, a2, v4, v5, a3, a4) )
  {
    v13 = sub_21D540(a1, (_BYTE *)(a1 + 136), *(double *)a3.m128_u64);
    if ( v13 == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) |= 0x200u;
      v13 = sub_225D30(a1, -1, (_BYTE *)(a1 + 136), (_DWORD *)(a1 + 120), 0, 0, *(_DWORD *)(a1 + 144), 0);
    }
    if ( (unsigned __int8)sub_21DF90(*(_QWORD *)(a1 + 16), v13, *(_DWORD *)(a1 + 148), *(double *)a3.m128_u64) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v6 + 480) == -1 )
      {
        if ( !under_debugger )
          sub_383060(0xCE7Du, *(double *)a3.m128_u64);
        BUG();
      }
LABEL_2:
      v7 = *(_QWORD *)(a1 + 24);
      for ( i = v7 + 56LL * *(_QWORD *)(a1 + 32); i != v7; v6 = *(_QWORD *)(a1 + 16) )
      {
        if ( !*(_QWORD *)(v6 + 800) || !(unsigned __int8)sub_21DAF0(a1, v7, *(double *)a3.m128_u64) )
          sub_225F80(a1, v7);
        v7 += 56;
      }
      if ( (*(_BYTE *)(v6 + 5) & 2) == 0 )
        return v17 - __readfsqword(0x28u);
      v10 = *(_QWORD *)(v6 + 1440);
      v11 = *(_DWORD *)(a1 + 144);
      v14[0] = 0;
      v14[1] = 0;
      v15 = 0;
      v16 = 0;
      sub_1C31B0(a1 + 120, (__int64)v14, v11, v10, 0, 0.0, a4);
      if ( (unsigned __int8)sub_64820(v14, (_QWORD *)(a1 + 48))
        && (unsigned __int8)sub_317F40((__int64 *)(a1 + 64), (__int64)&v15) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) &= ~0x200u;
        v12 = v15;
        if ( !v15 )
          goto LABEL_12;
      }
      else
      {
        v12 = v15;
        if ( !v15 )
        {
LABEL_12:
          qfree(v14[0]);
          return v17 - __readfsqword(0x28u);
        }
      }
      *(_QWORD *)&v16 = 0;
      qfree(v12);
      goto LABEL_12;
    }
  }
  return v17 - __readfsqword(0x28u);
}

