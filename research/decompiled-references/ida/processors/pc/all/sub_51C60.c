__int64 __fastcall sub_51C60(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, char a5)
{
  char v5; // r12
  __int64 v6; // rbx

  while ( 1 )
  {
    v5 = a5;
    v6 = sub_51250(a2, a4, a3);
    if ( (unsigned __int64)(v6 - 1) > 0xFFFFFFFFFFFFFFFDLL || !v5 )
      break;
    if ( *(_QWORD *)(getseg() + 8) < (unsigned __int64)(v6 + 4) )
      return -1;
    a2 = v6;
    a3 = *(_BYTE *)(a1 + 5489) != 1;
    a5 = 0;
    a4 = 0;
  }
  return v6;
}
