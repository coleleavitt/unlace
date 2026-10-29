__int64 __fastcall sub_10FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 440LL))(
           a1,
           a2,
           a3,
           1,
           a4) == 0
       ? -1
       : 1;
}

