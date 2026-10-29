void __fastcall sub_2AC400(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool (__fastcall ***v3)(__int64); // rdi
  bool (__fastcall *v4)(__int64); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v3 = (bool (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 40) + 56 * a3);
    v4 = **v3;
    if ( v4 == sub_2A9910 )
    {
      if ( !(unsigned int)sub_253FF0((__int64)(v3 + 1), (__int64)(v3 + 4)) )
        return;
LABEL_6:
      switch_dbctx();
      return;
    }
    if ( ((unsigned __int8 (*)(void))v4)() )
      goto LABEL_6;
  }
}

