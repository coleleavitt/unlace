unsigned __int64 __fastcall sub_19030(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 40) )
      return 0;
    else
      return *(_QWORD *)(a1 + 32) + ((unsigned __int64)a2 << 6);
  }
  else
  {
    sub_13620(a1);
    return sub_19060();
  }
}

