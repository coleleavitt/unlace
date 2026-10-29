__int64 __fastcall sub_4AE0(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  __int64 result; // rax

  v3 = (char)a3;
  if ( !sub_7DA0((unsigned int)(char)a3) )
    goto LABEL_6;
  result = (unsigned int)(a2 - 1);
  if ( (unsigned __int8)(a2 - 1) > 2u )
  {
    *(_BYTE *)(a1 + 28) = 9;
    *(_BYTE *)(a1 + 29) = a3;
    return result;
  }
  if ( sub_7DA0(v3) )
  {
    result = a1 + 40LL * ((unsigned __int8)a2 - 1);
    *(_BYTE *)(result + 41) = 9;
    *(_QWORD *)(result + 48) = a3;
  }
  else
  {
LABEL_6:
    *(_WORD *)(a1 + 24) = 0;
    return 0;
  }
  return result;
}

