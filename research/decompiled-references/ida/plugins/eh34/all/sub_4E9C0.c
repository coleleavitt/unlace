unsigned __int64 __fastcall sub_4E9C0(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  char v5; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)*i )
  {
    v2 = i[1];
    v3 = sub_1DD10();
    v5 = 1;
    netnode_supset(v3, v2, &v5, 1, 356);
  }
  return v6 - __readfsqword(0x28u);
}

