__int64 __fastcall sub_5C00(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, const char *a7)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v12; // rdx

  v9 = is_mapped();
  if ( (_BYTE)v9 )
  {
    v10 = v9;
    get_ea_name();
    v12 = *(_QWORD *)(a4 + 184);
    if ( v12 )
    {
      if ( v12 == 2 )
      {
        if ( !(unsigned __int8)create_data() )
          sub_5990((__int64)"CREATE WORD %a: %s FAILED \n", 0.0, a7);
      }
      else if ( v12 == 4 )
      {
        if ( !(unsigned __int8)create_data() )
          sub_5990((__int64)"CREATE DWORD %a: %s FAILED \n", 0.0, a7);
      }
      else if ( !(unsigned __int8)create_data() )
      {
        sub_5990((__int64)"CREATE BYTE %a: %s FAILED \n", 0.0, a7);
      }
    }
    if ( (unsigned __int8)set_name() )
    {
      set_cmt();
      return v10;
    }
    sub_5990((__int64)"SET NAME %a: %s FAILED \n", 0.0, a7);
  }
  else
  {
    sub_5990((__int64)"SET NAME %a %s: not mapped\n", a1, a7);
  }
  return 0;
}

