__int64 __fastcall sub_EFB0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 sreg; // rax

  if ( a3 == 5 )
  {
    v5 = a1[21];
    v6 = 133;
  }
  else if ( a3 == 30 )
  {
    v5 = a1[22];
    v6 = 135;
  }
  else
  {
    v5 = -1;
    if ( a3 != 4 )
      return v5;
    v5 = a1[20];
    v6 = 132;
  }
  sreg = get_sreg(a2, v6);
  if ( sreg != -1 )
    return sreg;
  return v5;
}

