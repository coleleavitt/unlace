__int64 __fastcall sub_97E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  if ( a3 == -1 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, bool, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2,
             a4,
             a6,
             (_DWORD)a5 == 0,
             -1);
  else
    return sub_11E40(a1, a2, a3, a4, a5, 0);
}
