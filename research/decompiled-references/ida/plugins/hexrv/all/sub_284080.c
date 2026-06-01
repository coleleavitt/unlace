__int64 __fastcall sub_284080(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rax

  v2 = a2[3];
  result = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL) + 16LL) && *(_QWORD *)(v2 + 72) )
  {
    sub_27B4E0(*(_QWORD *)(a1 + 72), a2, a2[3]);
    if ( *(_QWORD *)(v2 + 64) )
    {
      sub_250450(*(_QWORD *)(v2 + 64));
      j__qfree();
    }
    v4 = *(_QWORD *)(v2 + 72);
    *(_QWORD *)(v2 + 72) = 0;
    *(_QWORD *)(v2 + 64) = v4;
    return 1;
  }
  return result;
}

