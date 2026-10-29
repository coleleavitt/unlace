__int64 __fastcall sub_2750(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rbx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 40LL);
  if ( (char *)v2 == (char *)sub_2470 )
    v3 = *(_QWORD *)(a1 + 224);
  else
    v3 = v2();
  v4 = a2 + 1;
  if ( a2 + 1 >= v3 )
    v4 = a2 - 1;
  if ( !*(_BYTE *)(a1 + 192) )
  {
    *(_QWORD *)(a1 + 200) = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * a2);
    *(_BYTE *)(a1 + 208) = (netnode_charval() & 2) != 0;
  }
  netnode_supdel();
  return v4;
}

