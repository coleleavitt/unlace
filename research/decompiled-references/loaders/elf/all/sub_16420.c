__int64 __fastcall sub_16420(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( a3 == 2 )
  {
    a4 = *(_QWORD *)(a1 + 408);
    goto LABEL_6;
  }
  if ( a3 <= 2u )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(get_ph() + 4) != 12 )
        sub_15060();
      v5[0] = -1;
      sub_101F0(0xBC4u, v5);
      a4 = v5[0];
    }
    else
    {
      a4 = 0;
    }
    goto LABEL_6;
  }
  result = 0;
  if ( a3 == 3 )
  {
LABEL_6:
    *a2 = a4;
    return 1;
  }
  return result;
}
