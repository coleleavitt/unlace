__int64 __fastcall sub_288C80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rax

  v5 = a2[3];
  result = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL) && *(_QWORD *)(v5 + 72) )
  {
    sub_2800E0(*(_QWORD *)(a1 + 72), a2, a2[3], a4);
    v7 = *(_QWORD *)(v5 + 64);
    if ( v7 )
    {
      sub_255050(*(_QWORD *)(v5 + 64), a5);
      j__qfree(v7);
    }
    v8 = *(_QWORD *)(v5 + 72);
    *(_QWORD *)(v5 + 72) = 0;
    *(_QWORD *)(v5 + 64) = v8;
    return 1;
  }
  return result;
}

