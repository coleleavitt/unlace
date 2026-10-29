__int64 __fastcall sub_3AB90(int a1, void (__fastcall ***a2)(_QWORD, __int64, __int16 *))
{
  __int16 v3; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( a1 == 3 )
  {
    (**a2)(a2, 3, &v3);
    if ( !v3 )
    {
      if ( (unsigned __int8)getinf_flag(11, 4) )
      {
        setinf_flag(11, 4, 0);
        sub_3AAC0((__int64)"Turning off instruction simplification also turns off macros.\n"
                           "To enable them see Options, General, Analysis, Kernel options 3.\n"
                           "Alternatively you can use \"undo\" to revert this change.");
      }
    }
  }
  return 1;
}
