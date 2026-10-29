void __fastcall sub_D7490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  int v8; // edi
  int v9; // r12d
  int v10; // ecx
  int v11; // r12d
  __int64 v13; // [rsp+18h] [rbp-60h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( a5 == 1 )
  {
    v14 = 17;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 96) + 148LL) != 2 )
    {
      if ( a5 <= 8 )
      {
        sub_32C270(&v14, a3, a5);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      else
      {
        v8 = *(_DWORD *)(a3 + 80);
        v9 = a5 / v8;
        if ( !(a5 % v8) )
        {
          sub_32C270(&v13, a3, v8);
          LODWORD(v15) = 0;
          HIDWORD(v15) = v9;
          v14 = 0;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
        }
      }
    }
    v10 = round_down_power2();
    if ( v10 <= 1 )
    {
      v11 = a5 / v10;
    }
    else
    {
      do
      {
        if ( !(a5 % v10) )
        {
          v11 = a5 / v10;
          if ( a5 / v10 > 1 )
            goto LABEL_11;
        }
        v10 >>= 1;
      }
      while ( v10 != 1 );
      v11 = a5;
    }
LABEL_11:
    sub_32C270(&v13, a3, v10);
    LODWORD(v15) = 0;
    HIDWORD(v15) = v11;
    v14 = 0;
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v14 = 0;
  v15 = 0;
  cleanup_argloc();
  LODWORD(v14) = 1;
  v15 = a4;
  if ( !under_debugger )
    sub_383060(0xCE77u, a6);
  BUG();
}

