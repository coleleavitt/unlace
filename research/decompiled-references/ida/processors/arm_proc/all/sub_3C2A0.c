__int64 *__fastcall sub_3C2A0(__int64 a1, __int64 a2, char a3, int a4, int a5)
{
  unsigned __int64 dtype_size; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a4 )
  {
    dtype_size = get_dtype_size();
    a2 = (unsigned int)a2;
    if ( sub_248F0((__int64 *)(a1 + 8), a2, dtype_size) > 0 )
      return (__int64 *)(v9 - __readfsqword(0x28u));
    goto LABEL_17;
  }
  if ( (unsigned int)(a2 - 163) > 0x1F )
  {
LABEL_15:
    if ( under_debugger )
      goto LABEL_19;
    interr();
LABEL_17:
    if ( !under_debugger )
    {
      interr();
      return (__int64 *)sub_3C4E0(10168, a2, v7, v8);
    }
LABEL_19:
    BUG();
  }
  if ( (unsigned int)(a4 - 1) > 4 )
  {
    if ( under_debugger )
      goto LABEL_19;
    interr();
    goto LABEL_15;
  }
  if ( a5 == -1 )
  {
    if ( a3 != 10 )
      goto LABEL_6;
  }
  else if ( a3 != 8 )
  {
LABEL_6:
    get_dtype_size();
    return sub_1CD20((__int64 *)(a1 + 8));
  }
  return sub_1CD20((__int64 *)(a1 + 8));
}

