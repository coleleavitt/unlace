void __fastcall sub_2A70A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 40) + 56 * a3;
    v4 = **(bool (__fastcall ***)(__int64))v3;
    if ( v4 == sub_2A5DF0 )
    {
      if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 40) )
        return;
LABEL_6:
      switch_dbctx();
      return;
    }
    if ( ((unsigned __int8 (*)(void))v4)() )
      goto LABEL_6;
  }
}

