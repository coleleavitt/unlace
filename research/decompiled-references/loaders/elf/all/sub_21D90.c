__int64 __fastcall sub_21D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // ebx
  int dword; // eax
  __int64 v9; // r8
  int v10; // ecx
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r8d

  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_QWORD *)(a2 + 20);
  v7 = (unsigned __int8)*(_DWORD *)a2;
  dword = get_dword(v5, a2, a3, a4, a5);
  if ( v7 == 34 )
  {
    v12 = 13;
    v13 = (unsigned __int8)dword + (unsigned int)v6;
    put_byte(v5, v13);
    goto LABEL_14;
  }
  v10 = dword;
  if ( v7 > 0x22 )
  {
    if ( v7 > 0xA4 )
    {
      if ( v7 != 165 )
        return 2;
      LODWORD(v6) = dword;
      v18 = 0;
      v12 = 4;
    }
    else
    {
      if ( v7 <= 0xA2 )
      {
        if ( v7 != 162 )
          return 2;
        sub_40E20(a1, v5, 2);
        return 0;
      }
      v10 = v6;
      v18 = 0;
      v12 = 4;
    }
LABEL_15:
    sub_42050(a1, v5, v6, v10, v18, v12, 0, 0, 0);
    return 0;
  }
  switch ( v7 )
  {
    case 1u:
      v18 = dword;
      v12 = 4;
      v10 = v6 + dword;
      goto LABEL_15;
    case 0x21u:
      v12 = 1;
      v13 = (unsigned __int16)dword + v6;
      put_word(v5, v13);
LABEL_14:
      v17 = get_dword(v5, v13, v14, v15, v16);
      v18 = 0;
      v10 = v17;
      goto LABEL_15;
    case 0u:
      if ( get_cmt(0, v5, 0, dword, v9) <= 0 )
        set_cmt(v5, "dependencies between sections in translation phase", 0);
      return 0;
  }
  return 2;
}
