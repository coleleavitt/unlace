// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_3FB0A0(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // [rsp+20h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  if ( sub_CF9B0() <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCEEBu, 0.0);
    BUG();
  }
  v1 = *a1;
  *a1 = 0;
  *(_QWORD *)&byte_8 = v1;
  return v3 - __readfsqword(0x28u);
}

