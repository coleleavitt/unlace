__int64 __fastcall pylong_to_byte_array(_QWORD *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  if ( ((*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(a2 + 8)) & 0x1000000) != 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(qword_24798 + 1032))(
             a2,
             *a1,
             a1[1],
             a3,
             a4,
             0);
  else
    return 0xFFFFFFFFLL;
}

