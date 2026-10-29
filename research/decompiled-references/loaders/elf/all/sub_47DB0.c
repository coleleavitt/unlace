unsigned __int64 __fastcall sub_47DB0(_DWORD a1, __int64 a2)
{
  const char *v2; // rdx
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  get_ea_name(&v4, a2, 0, 0);
  if ( (unsigned __int64)v5 > 1 || (sub_2B240((__int64 *)&v4, (__int64)"ifunc_%llX", a2), (_QWORD)v5) )
    v2 = v4;
  else
    v2 = &s1;
  add_entry(a2, a2, v2, 1, 0);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v6 - __readfsqword(0x28u);
}
