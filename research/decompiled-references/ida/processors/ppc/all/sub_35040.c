__int64 __fastcall sub_35040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r15

  if ( !a5 )
  {
    v8 = ea2node(a2);
    v9 = ea2node(a3);
    netnode_altshift(a1[15], v8, v9, a4, 65);
    netnode_altadjust(a1[15], v8, v9, a4, 0);
  }
  a1[53] = correct_address(a1[53], a2, a3, a4, 0);
  a1[54] = correct_address(a1[54], a2, a3, a4, 0);
  result = correct_address(a1[68], a2, a3, a4, 0);
  a1[68] = result;
  return result;
}

