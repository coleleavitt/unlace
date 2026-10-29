__int64 __fastcall sub_26FA0(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
  {
    if ( *(_QWORD *)(a1 + 128) )
    {
      sub_265B0();
      qflush();
    }
    v1 = sub_41260(*(_QWORD *)(a1 + 8), "c\n");
    result = 12;
    if ( v1 )
    {
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 48) = 13;
      qsem_post();
      return 0;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_27030(30127);
  }
  return result;
}

