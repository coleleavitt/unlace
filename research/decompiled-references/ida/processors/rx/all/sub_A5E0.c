__int64 __fastcall sub_A5E0(int a1, void (__fastcall ***a2)(_QWORD, __int64, _BYTE *))
{
  _BYTE v3[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( a1 == 1 )
    (**a2)(a2, 1, v3);
  return 1;
}

