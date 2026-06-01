__int64 __fastcall sub_2BBA20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 (***v4)(void); // rdi
  unsigned __int8 (*v5)(void); // rax

  if ( a3 < *(_QWORD *)(a2 + 48) )
  {
    v4 = (unsigned __int8 (***)(void))(*(_QWORD *)(a2 + 40) + 88 * a3);
    v5 = **v4;
    if ( (char *)v5 == (char *)sub_2AD660 )
    {
      if ( !(unsigned int)sub_257C40((__int64)(v4 + 1), (__int64)(v4 + 8)) )
        goto LABEL_4;
    }
    else if ( !v5() )
    {
      goto LABEL_4;
    }
    switch_dbctx();
  }
LABEL_4:
  sub_81980(a1, (const char *)&unk_418793);
  return a1;
}

