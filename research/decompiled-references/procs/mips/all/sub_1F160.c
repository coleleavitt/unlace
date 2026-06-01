__int16 __fastcall sub_1F160(__int64 a1, _BYTE *a2, unsigned __int64 a3, __int64 *a4)
{
  __int16 result; // ax
  __int64 not_tail; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-50h]
  unsigned __int16 v11; // [rsp+16h] [rbp-42h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( (get_flags_ex(a3, 4) & 0x10000) == 0
    || (not_tail = prev_not_tail(a3), v8 = not_tail, not_tail == -1)
    || (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) != 0
    || (result = sub_1F000(a1, a2, v8, (__int16 *)&v11)) == 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = 0;
    return 0;
  }
  v9 = v8 + v11;
  if ( v9 != a3 )
  {
    if ( v9 < a3 )
    {
      v10 = v8 + v11;
      result = sub_1F000(a1, a2, v9, (__int16 *)&v11);
      if ( result )
      {
        if ( v10 + v11 == a3 )
        {
          if ( a4 )
            *a4 = v10;
          return result;
        }
      }
    }
    goto LABEL_2;
  }
  if ( a4 )
    *a4 = v8;
  return result;
}
