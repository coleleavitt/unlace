void __fastcall sub_2AACE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 (*v4)(void); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 40) + 264 * a3;
    v4 = **(unsigned __int8 (***)(void))v3;
    if ( (char *)v4 == (char *)sub_2A7CC0 )
    {
      if ( *(_DWORD *)(v3 + 120) == *(_DWORD *)(v3 + 248) && !(unsigned int)sub_1310E0(v3 + 8, v3 + 136) )
        return;
    }
    else if ( !v4() )
    {
      return;
    }
    switch_dbctx();
  }
}

