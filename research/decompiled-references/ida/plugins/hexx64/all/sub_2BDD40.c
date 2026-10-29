void __fastcall sub_2BDD40(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  bool (__fastcall *v6)(__int64); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v4 = 192 * a3;
    v5 = 192 * a3 + *(_QWORD *)(a1 + 40);
    v6 = **(bool (__fastcall ***)(__int64))v5;
    if ( v6 == sub_2AD0E0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 40) - 3) > 1 )
        return;
LABEL_6:
      switch_dbctx();
      sub_2BDB20(a2, *(_DWORD *)(*(_QWORD *)(a1 + 40) + v4 + 40), *(_QWORD *)(a1 + 40) + v4 + 48);
      return;
    }
    if ( ((unsigned __int8 (*)(void))v6)() )
      goto LABEL_6;
  }
}

