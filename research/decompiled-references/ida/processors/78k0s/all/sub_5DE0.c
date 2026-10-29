__int64 __fastcall sub_5DE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx

  if ( a3 )
  {
    v4 = map_code_ea();
  }
  else
  {
    v3 = *(unsigned __int16 *)(a2 + 16);
    v4 = 16 * calc_dataseg() + v3;
  }
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 120LL))(
           a1,
           a2,
           v4,
           *(_QWORD *)(a2 + 16));
}

