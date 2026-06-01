unsigned __int64 __fastcall sub_64E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  getinf();
  get_ea_name();
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(_QWORD *)(v2 + 48);
  if ( v3 )
    sub_55A0(a2, 0xFFFF, (__int64)qword_8A78, v3, v4, byte_8BD0);
  else
    sub_55A0(a2, 0xFFFF, (__int64)word_8A6A, v4, byte_8BD0);
  return v6 - __readfsqword(0x28u);
}

