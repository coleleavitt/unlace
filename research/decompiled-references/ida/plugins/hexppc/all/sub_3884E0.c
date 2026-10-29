unsigned __int64 __fastcall sub_3884E0(__int64 a1)
{
  __int64 (__fastcall **v2[3])(_QWORD); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 108) & 1) == 0 )
  {
    v2[1] = (__int64 (__fastcall **)(_QWORD))a1;
    v2[0] = (__int64 (__fastcall **)(_QWORD))off_4D92D0;
    sub_339FA0(v2);
    *(_DWORD *)(a1 + 108) |= 1u;
  }
  return v3 - __readfsqword(0x28u);
}

