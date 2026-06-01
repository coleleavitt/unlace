__int64 __fastcall sub_8330(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( (unsigned __int8)choose_ioport_device() )
    sub_8210(v2);
  return 0;
}

