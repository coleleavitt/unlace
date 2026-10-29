__int64 __fastcall sub_3E840(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // [rsp+0h] [rbp-1028h] BYREF
  _BYTE v4[4096]; // [rsp+8h] [rbp-1020h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(std::_Rb_tree_decrement() + 32) + 4096LL;
  v3 = v1;
  qmemcpy(v4, a1 + 10, sizeof(v4));
  sub_3E700(a1, (unsigned __int64 *)&v3);
  return v1;
}

