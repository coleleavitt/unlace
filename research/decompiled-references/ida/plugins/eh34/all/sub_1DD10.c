__int64 sub_1DD10()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-18h] BYREF

  v1[1] = __readfsqword(0x28u);
  netnode_check(v1, "$ eh34 metadata", 0, 0);
  return v1[0];
}

