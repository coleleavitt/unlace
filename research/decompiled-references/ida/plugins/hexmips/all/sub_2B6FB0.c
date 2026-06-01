__int64 __fastcall sub_2B6FB0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 (***v4)(void); // rdi
  unsigned __int8 (*v5)(void); // rax

  if ( a3 < *(_QWORD *)(a2 + 48) )
  {
    v4 = (unsigned __int8 (***)(void))(*(_QWORD *)(a2 + 40) + 56 * a3);
    v5 = **v4;
    if ( (char *)v5 == (char *)sub_2A8DC0 )
    {
      if ( !(unsigned int)sub_2533C0((__int64)(v4 + 1), (__int64)(v4 + 4)) )
        goto LABEL_4;
    }
    else if ( !v5() )
    {
      goto LABEL_4;
    }
    switch_dbctx();
  }
LABEL_4:
  sub_7D780(a1, (const char *)&unk_3FC793);
  return a1;
}

