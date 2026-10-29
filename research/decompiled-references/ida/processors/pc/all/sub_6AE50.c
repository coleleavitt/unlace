void __fastcall sub_6AE50(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp-28h] [rbp-28h]
  __int64 v15; // [rsp-20h] [rbp-20h]
  __int64 v16; // [rsp-18h] [rbp-18h]
  __int64 v17; // [rsp-10h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) )
  {
    v17 = v5;
    v16 = v4;
    v15 = v3;
    v14 = v2;
    sub_496E0((__int64)"Handling postponed vftables");
    v8 = *(__int64 **)a1;
    v9 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
    if ( v9 != *(_QWORD *)a1 )
    {
      do
      {
        sub_6A5D0(*v8);
        if ( (unsigned __int8)callui(27, a2, v10, v11, v12, v13, v14, v15, v16, v17) )
        {
          a2 = "HIDECANCEL\nAbort vftable handling?";
          if ( (unsigned int)sub_51870(0, (__int64)"HIDECANCEL\nAbort vftable handling?") == 1 )
            break;
        }
        ++v8;
      }
      while ( (__int64 *)v9 != v8 );
    }
    callui(24, 10, 0, &callui, v6, v7, v14, v15, v16, v17);
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
}
