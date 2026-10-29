bool __fastcall sub_3BB80(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  bool result; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 360);
  result = v4 == -1 || v4 < a2;
  if ( result )
    return 0;
  v6 = a2 + a4;
  if ( v4 < v6 )
  {
    v7 = *(_QWORD *)(a1 + 368);
    if ( v6 >= v7 )
    {
      v8 = a3 - a2;
      v10 = -1;
      v9 = v4 + v8;
      *(_QWORD *)(a1 + 368) = v8 + v7;
      *(_QWORD *)(a1 + 360) = v4 + v8;
      netnode_check(&v10, "$ got", 0, 1);
      v11[0] = ea2node(v9) + 1;
      netnode_supset(v10, 0, v11, 8, 65);
      return 1;
    }
  }
  return result;
}

