__int64 __fastcall sub_388260(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = sub_254EF0(*(_QWORD *)(a1 + 32));
  result = 0;
  if ( v1 > 0 )
  {
    sub_2AF2D0(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
      **(_QWORD **)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
    sub_387D20(a1, 1u, v3);
    return 1;
  }
  return result;
}

