__int64 __fastcall sub_36D530(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 64);
  v12 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 1504);
  v5 = sub_36D430(a2, (unsigned int *)v4);
  if ( (_BYTE)v5 )
    return 1;
  v6 = v5;
  if ( (*(_BYTE *)(v4 + 50) & 2) != 0 && (get_tinfo_property() & 0xF) == 9 )
  {
    v9 = *(unsigned int *)(a2 + 36);
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
    if ( (int)v9 < v10 )
    {
      if ( (_DWORD)v9 != 4 || v10 != 8 )
      {
        if ( !under_debugger )
          sub_383060(0xCAEAu, *(double *)a3.m128i_i64);
        BUG();
      }
      sub_123A40((__int64)v11, (unsigned __int8 *)(a2 + 64), v9, v8);
      sub_12CD10(v11, (unsigned __int64 *)v4, 1, a3);
      sub_A3240(a1, a2, 61, nullptr, nullptr, (unsigned __int8 *)v11, a3);
      sub_11CDA0((__int64)v11);
      return 1;
    }
  }
  return v6;
}

