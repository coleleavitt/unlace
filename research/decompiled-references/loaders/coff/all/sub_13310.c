unsigned __int64 __fastcall sub_13310(__int64 a1, unsigned int a2, const char *a3, __int64 a4, int *a5)
{
  __int128 v9; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (!(unsigned __int8)is_planned_proc(a4) || (get_flags_ex(a4, 4) & 0x4000) == 0)
    && !(unsigned __int8)sub_9170(*(_QWORD *)(a1 + 40), a2, &v10, a5) )
  {
    if ( !strcmp(a3, "@comp.id") )
    {
      v9 = 0;
      LOBYTE(v9) = 1;
      set_compiler(&v9, 2, 0);
    }
    else
    {
      set_name(a4, a3, 23552);
    }
  }
  return v11 - __readfsqword(0x28u);
}
