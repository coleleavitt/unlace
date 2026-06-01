__int64 __fastcall sub_34340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v7; // r13
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15

  if ( !a5 )
  {
    v9 = ea2node(a2);
    v10 = ea2node(a3);
    netnode_altshift(*(_QWORD *)(a1 + 152), v9, v10, a4, 65);
    netnode_altadjust(*(_QWORD *)(a1 + 152), v9, v10, a4, sub_28A90);
  }
  v7 = sub_3BB80(a1, a2, a3, a4);
  result = sub_3B4D0(a1);
  if ( result != -1 && v7 && a2 + *(_QWORD *)(a1 + 360) + 32752 - a3 == result )
    return sub_3B440(a1, *(_QWORD *)(a1 + 360) + 32752LL, 1);
  return result;
}

