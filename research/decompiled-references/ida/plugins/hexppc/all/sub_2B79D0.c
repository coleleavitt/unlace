__int64 __fastcall sub_2B79D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax

  if ( a3 < *(_QWORD *)(a2 + 48) )
  {
    v4 = *(_QWORD *)(a2 + 40) + 192 * a3;
    v5 = **(unsigned __int8 (***)(void))v4;
    if ( (char *)v5 == (char *)sub_2A9450 )
    {
      if ( *(_DWORD *)(v4 + 40) != 2 )
        goto LABEL_4;
    }
    else if ( !v5() )
    {
      goto LABEL_4;
    }
    switch_dbctx();
  }
LABEL_4:
  sub_7DF40(a1, (const char *)&unk_405793);
  return a1;
}

