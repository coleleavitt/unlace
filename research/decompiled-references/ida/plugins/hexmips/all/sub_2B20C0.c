unsigned __int64 __fastcall sub_2B20C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(a1 + 1112) || (v3 = sub_2B1800(a2, 0), v3 == -1) )
  {
    if ( (unsigned __int8)netnode_exist() )
LABEL_6:
      netnode_supdel_all();
  }
  else
  {
    *(_QWORD *)(a1 + 1112) = a2;
    *(_QWORD *)(a1 + 1120) = v3;
    if ( (unsigned __int8)netnode_exist() )
      goto LABEL_6;
  }
  return v4 - __readfsqword(0x28u);
}

