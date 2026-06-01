__int64 __fastcall sub_5A90(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  __int64 v7; // r13

  v5 = *(_QWORD *)(a3 + 16);
  v6 = v5;
  if ( (a4 & 2) != 0 )
    v6 = v5 + *(_WORD *)(a2 + 8) + *(_WORD *)(a2 + 26);
  v7 = sub_59C0(a1, a2, v6);
  if ( (a4 & 1) != 0 )
    return map_code_ea();
  else
    return v7 + 16 * calc_dataseg();
}

