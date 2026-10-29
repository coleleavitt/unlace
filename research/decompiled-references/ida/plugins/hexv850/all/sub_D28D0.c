void __fastcall sub_D28D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  signed int v7; // edi
  int v8; // r12d
  int v9; // ecx
  int v10; // r12d
  _BYTE v12[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a5 == 1 )
  {
    v13 = 17;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 96) + 148LL) != 2 )
    {
      if ( a5 <= 8 )
      {
        sub_326800(&v13, a3, (unsigned int)a5);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      else
      {
        v7 = *(_DWORD *)(a3 + 80);
        v8 = a5 / v7;
        if ( !(a5 % v7) )
        {
          sub_326800(v12, a3, (unsigned int)v7);
          LODWORD(v14) = 0;
          HIDWORD(v14) = v8;
          v13 = 0;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
        }
      }
    }
    v9 = round_down_power2();
    if ( v9 <= 1 )
    {
      v10 = a5 / v9;
    }
    else
    {
      do
      {
        if ( !(a5 % v9) )
        {
          v10 = a5 / v9;
          if ( a5 / v9 > 1 )
            goto LABEL_11;
        }
        v9 >>= 1;
      }
      while ( v9 != 1 );
      v10 = a5;
    }
LABEL_11:
    sub_326800(v12, a3, (unsigned int)v9);
    LODWORD(v14) = 0;
    HIDWORD(v14) = v10;
    v13 = 0;
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v13 = 0;
  v14 = 0;
  cleanup_argloc();
  LODWORD(v13) = 1;
  v14 = a4;
  if ( !under_debugger )
    sub_37CFE0(52855);
  BUG();
}

