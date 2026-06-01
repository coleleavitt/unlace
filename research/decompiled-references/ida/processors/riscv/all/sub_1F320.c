__int64 __fastcall sub_1F320(int a1, void (__fastcall ***a2)(_QWORD, __int64, __int16 *))
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a1 == 2 )
  {
    (**a2)(a2, 2, &v7);
    if ( !v7 )
    {
      if ( (unsigned __int8)getinf_flag(11, 4, v3, v4, v5, v6) )
      {
        setinf_flag(11, 4, 0);
        sub_1F250((__int64)"Turning off instruction simplification also turns off macros.\n"
                           "To enable them see Options, General, Analysis, Kernel options 3.\n"
                           "Alternatively you can use \"undo\" to revert this change.");
      }
    }
  }
  return 1;
}

