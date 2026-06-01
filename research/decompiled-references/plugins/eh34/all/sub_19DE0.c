__int64 __fastcall sub_19DE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  void (__fastcall *hexdsp)(__int64, unsigned int *, __int64, __int64); // rax
  unsigned int v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int64)(int)a2 >= a1[1] )
  {
    if ( !under_debugger )
      interr(30779);
    BUG();
  }
  v2 = *a1 + (-(int)a2 & 0x48);
  if ( *(_DWORD *)(v2 + 8) != 61 )
    sub_19DC0();
  v3 = *(_QWORD *)(v2 + 24);
  hexdsp = (void (__fastcall *)(__int64, unsigned int *, __int64, __int64))get_hexdsp(a1, a2);
  hexdsp(451, &v6, v3, v2 + 48);
  return v6;
}
