__int64 __fastcall sub_13930(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( !a5 )
  {
    v12 = ea2node(a2);
    v13 = ea2node(a3);
    netnode_altshift(a1[15], v12, v13, a4, 65);
    netnode_supshift(a1[15], v12, v13, a4, 115);
    netnode_supshift(a1[15], v12, v13, a4, 100);
  }
  v7 = correct_address(a1[16], a2, a3, a4, 0);
  if ( a1[16] != v7 )
    sub_136C0((__int64)a1, v7, 1);
  v8 = correct_address(a1[22], a2, a3, a4, 0);
  if ( a1[22] != v8 )
  {
    a1[22] = v8;
    set_default_sreg_value(0, 35, v8);
    v10 = a1[22];
    v11 = a1[15];
    if ( v10 == -1 )
    {
      netnode_supdel(v11, -3, 65);
    }
    else
    {
      v14[0] = v10 + 1;
      netnode_supset(v11, -3, v14, 8, 65);
    }
  }
  return invalidate_regfinder_cache(-1, -1, 0);
}

