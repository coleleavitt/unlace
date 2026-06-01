__int64 __fastcall sub_13000(int a1, __int64 a2)
{
  __int16 v3; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 1, &v3) )
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, v3 != 0);
  }
  else
  {
    if ( a1 <= 1 )
    {
      if ( a1 != -1 )
        return 1;
      sub_13000(1, a2);
      sub_13000(8, a2);
    }
    else
    {
      if ( a1 == 8 )
      {
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 8, &v3) )
        {
          (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 1, v3 != 0);
          (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, v3 != 0);
          (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 3, v3 != 0);
        }
        return 1;
      }
      if ( a1 != 9 )
        return 1;
    }
    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 9, &v3) )
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 7, v3 != 0);
  }
  return 1;
}
