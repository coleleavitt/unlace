unsigned __int64 __fastcall sub_3D9BB0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  get_ea_name();
  sub_6B2B0(a2);
  if ( *(_QWORD *)(a3 + 56) != -1 )
    sub_FA510(a2);
  return v5 - __readfsqword(0x28u);
}

