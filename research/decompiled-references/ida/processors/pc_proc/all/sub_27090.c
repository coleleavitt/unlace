char __fastcall sub_27090(__int64 a1, const void *a2, int a3)
{
  int i; // ebp
  char result; // al
  int v6; // [rsp+Ch] [rbp-19Ch] BYREF
  _QWORD v7[51]; // [rsp+10h] [rbp-198h] BYREF

  v7[45] = __readfsqword(0x28u);
  qmemcpy(v7, a2, 0x168u);
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      if ( !(unsigned int)decode_insn() )
        break;
      v6 = 5;
      if ( (unsigned int)sub_73130(a1, v7, &v6, 1) != -1 )
        break;
      result = sub_26F80((__int64)v7);
      if ( result )
        return result;
    }
  }
  return 0;
}

