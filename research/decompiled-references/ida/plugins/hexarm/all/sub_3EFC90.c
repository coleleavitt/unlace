__int64 __fastcall sub_3EFC90(__int64 a1, __int64 a2, double a3)
{
  char v3; // dl
  bool v4; // al
  __int16 v5; // cx

  v3 = *(_BYTE *)(a2 + 1);
  v4 = v3 == 12 || v3 == 1;
  v5 = *(_WORD *)(a2 + 6);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
  {
    if ( v4 )
    {
      if ( (unsigned __int16)(v5 - 45) <= 0x2Fu )
        return sub_3EFC30(a1, a2, a3);
      goto LABEL_4;
    }
LABEL_6:
    if ( !under_debugger )
      sub_3835A0(0xC87Bu, a3);
    BUG();
  }
  if ( !v4 )
    goto LABEL_6;
  if ( (unsigned __int16)(v5 - 163) <= 0x1Fu )
    return sub_3EFC30(a1, a2, a3);
LABEL_4:
  if ( v3 != 1 || (unsigned __int16)(v5 - 61) > 0x3Fu )
    goto LABEL_6;
  return sub_3EFC30(a1, a2, a3);
}

