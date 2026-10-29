__int64 __fastcall sub_11F40(int a1, __int64 a2)
{
  if ( a1 != -1 )
    return 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 6, 0);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 7, 0);
  if ( (unsigned __int8)netnode_inited() )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 1, 0);
  return 1;
}

