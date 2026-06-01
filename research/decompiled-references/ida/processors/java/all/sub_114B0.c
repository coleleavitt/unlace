__int64 __fastcall sub_114B0(__int64 a1)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  if ( *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 168) )
  {
    setinf(46, 1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, 0);
  }
  return setinf(46, 0);
}

