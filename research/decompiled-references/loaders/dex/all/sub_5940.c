__int64 __fastcall sub_5940(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( qword_28450 != -1 )
  {
    qword_28448 = a2 - qword_28450;
    netnode_supset(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL), qword_28450, &qword_28440, 16, 324);
    result = set_source_linnum(qword_28450, HIDWORD(qword_28440));
  }
  qword_28450 = a2;
  HIDWORD(qword_28440) = a3;
  return result;
}
