unsigned __int64 *__fastcall sub_13E950(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)v2 & 2) != 0 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_D68 + 8);
    interr();
  }
  v3 = *(unsigned __int64 **)(v2 + 8);
  result = (unsigned __int64 *)a2;
  *(_QWORD *)(a2 + 16) = v3;
  if ( (*v3 & 2) == 0 )
    *v3 = a2 & 0xFFFFFFFFFFFFFFFCLL | *v3 & 3;
  *(_QWORD *)v2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
  v5 = v2 & 0xFFFFFFFFFFFFFFFCLL;
  v6 = (_QWORD *)(*result & 0xFFFFFFFFFFFFFFFCLL);
  if ( (_QWORD *)*a1 == v6 )
  {
    *v6 = v5 | *v6 & 3LL;
  }
  else if ( result == (unsigned __int64 *)v6[1] )
  {
    v6[1] = v2;
  }
  else
  {
    v6[2] = v2;
  }
  *(_QWORD *)(v2 + 8) = result;
  *result = v5 | *result & 3;
  return result;
}

