__int64 __fastcall sub_3F0810(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  char v7; // al
  __int64 v9; // rdi
  bool v10; // si
  __int16 v11; // dx
  __int64 result; // rax

  v7 = *(_BYTE *)(a3 + 1);
  v9 = *(_QWORD *)(a1 + 832);
  v10 = v7 == 12 || v7 == 1;
  v11 = *(_WORD *)(a3 + 6);
  if ( *(_DWORD *)(v9 + 80) == 8 )
  {
    if ( v10 )
    {
      if ( (unsigned __int16)(v11 - 163) <= 0x1Fu )
        return sub_3EE470(a1, a3, a4, a5);
      goto LABEL_11;
    }
  }
  else if ( v10 )
  {
    if ( (unsigned __int16)(v11 - 45) <= 0x2Fu )
      return sub_3EE470(a1, a3, a4, a5);
    goto LABEL_11;
  }
  if ( (unsigned __int8)(v7 - 3) > 1u )
  {
LABEL_11:
    if ( get_dtype_size() >= (unsigned __int64)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL)
      || *(_BYTE *)(a3 + 1) != 8
      || (unsigned __int8)(*(_BYTE *)(a3 + 33) - 6) > 7u )
    {
      return *(unsigned __int8 *)(a3 + 5);
    }
    if ( !*(_BYTE *)a3 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC85Au, a5);
      BUG();
    }
    return *(unsigned __int8 *)(a2 + 45);
  }
  result = 2;
  if ( *(_DWORD *)(v9 + 84) == 8 )
    return 7;
  return result;
}

