void __fastcall sub_2B8E80(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // r12
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 *v10; // rbp
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  const char *v16; // rsi
  __int64 v17; // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v5 = 88 * a3;
    v6 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
    v7 = **v6;
    if ( (char *)v7 == (char *)sub_2A82A0 )
    {
      if ( !(unsigned int)sub_252880((__int64)(v6 + 1), (__int64)(v6 + 8)) )
        return;
    }
    else if ( !v7() )
    {
      return;
    }
    switch_dbctx();
    v8 = *(_QWORD *)(a1 + 40) + v5;
    v9 = (__int64 *)sub_2B5E10(a2);
    if ( (unsigned __int8)is_enum() )
    {
      sub_66DF0(v9);
      if ( *(_BYTE *)(v8 + 30) )
        sub_F5F10(v9);
    }
    else if ( (unsigned __int8)is_stroff() )
    {
      sub_66DF0(v9);
    }
    else if ( (unsigned __int8)is_char() )
    {
      sub_2AE910(v9, "CHAR");
    }
    else
    {
      if ( !(unsigned __int8)is_numop() || (v16 = "HEX", (unsigned int)get_radix() != 16) )
      {
        if ( (unsigned __int8)is_numop() && (unsigned int)get_radix() == 8 )
          v16 = "OCT";
        else
          v16 = "DEC";
      }
      sub_2AE910(v9, v16);
      if ( *(_BYTE *)(v8 + 31) )
        sub_F5F10(v9);
      get_radix();
      sub_F5F10(v9);
      v17 = *(_QWORD *)(v8 + 56);
      if ( (v17 & 0x20000) != 0 )
      {
        sub_2AE910(v9, " SIGNED");
        v17 = *(_QWORD *)(v8 + 56);
      }
      if ( (v17 & 0x40000) != 0 )
        sub_2AE910(v9, " BNOT");
    }
    if ( *(_BYTE *)(v8 + 29) )
    {
      v10 = (__int64 *)sub_2B5E10(a2);
      v11 = *(_BYTE *)(v8 + 29);
      if ( (v11 & 1) != 0 )
      {
        sub_F5F10(v10);
        v11 = *(_BYTE *)(v8 + 29);
      }
      if ( (v11 & 2) != 0 )
      {
        sub_F5F10(v10);
        v11 = *(_BYTE *)(v8 + 29);
      }
      if ( (v11 & 4) != 0 )
      {
        sub_F5F10(v10);
        v11 = *(_BYTE *)(v8 + 29);
      }
      if ( (v11 & 8) != 0 )
      {
        sub_F5F10(v10);
        v11 = *(_BYTE *)(v8 + 29);
      }
      if ( (v11 & 0x10) != 0 )
      {
        sub_F5F10(v10);
        v11 = *(_BYTE *)(v8 + 29);
      }
      if ( (v11 & 0x20) != 0 )
        sub_F5F10(v10);
      v12 = v10[1];
      v13 = *v10;
      v14 = v12 - 1;
      if ( v12 - 1 <= 1 )
      {
        if ( v13 )
        {
          v10[1] = 0;
          qfree();
          *v10 = 0;
          v10[2] = 0;
        }
      }
      else
      {
        if ( v10[2] < v14 )
        {
          v15 = qvector_reserve();
          *v10 = v15;
          v13 = v15;
        }
        v10[1] = v14;
        *(_BYTE *)(v13 + v12 - 2) = 0;
      }
    }
  }
}

