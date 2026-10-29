void __fastcall sub_7260(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  char v7; // [rsp-8h] [rbp-8h]

  v6 = *a1;
  if ( v6 )
  {
    if ( *v6 <= 0 )
    {
      sub_6C20((__int64)v6, a2, a3, a4, a5, a6, v7);
      sub_7290(v6);
    }
    else
    {
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
}

