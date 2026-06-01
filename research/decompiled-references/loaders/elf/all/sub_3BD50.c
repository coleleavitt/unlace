unsigned __int64 __fastcall sub_3BD50(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( (unsigned __int64)(unsigned int)a2 >= *(_QWORD *)(a1 + 40) )
      return 0;
    else
      return *(_QWORD *)(a1 + 32) + ((unsigned __int64)(unsigned int)a2 << 6);
  }
  else
  {
    sub_30AC0();
    return sub_3BD80(a1, a2, v3);
  }
}
