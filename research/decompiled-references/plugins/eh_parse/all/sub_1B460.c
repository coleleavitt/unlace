__int64 __fastcall sub_1B460(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  __int64 v8; // rdi
  _QWORD *func; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !a3 )
  {
    v8 = *(_QWORD *)(a1 + 104);
    v13[0] = 1;
    netnode_supset(v8, a2, v13, 8, 117);
    func = (_QWORD *)get_func(a2);
    v5 = func;
    if ( func )
    {
      if ( a2 == *func )
      {
        v11 = 0x80000;
        v12 = v5[2] & 0xFFFFFFFFFFE7FFFFLL;
        goto LABEL_12;
      }
      sub_1A5E0(a2);
    }
    v10 = *(_QWORD *)(a1 + 104);
    v13[0] = 1;
    netnode_supset(v10, a2, v13, 8, 85);
    goto LABEL_6;
  }
  v4 = (_QWORD *)get_func(a2);
  v5 = v4;
  if ( !v4 )
  {
LABEL_5:
    v6 = *(_QWORD *)(a1 + 104);
    v13[0] = 1;
    netnode_supset(v6, a2, v13, 8, 81);
LABEL_6:
    auto_mark_range(a2, a2 + 1, 20);
    return auto_mark_range(a2, a2 + 1, 30);
  }
  if ( a2 != *v4 )
  {
    sub_1A5E0(a2);
    goto LABEL_5;
  }
  v11 = 0x100000;
  v12 = v5[2] & 0xFFFFFFFFFFE7FFFFLL;
LABEL_12:
  v5[2] = v12 | v11;
  return update_func(v5);
}
