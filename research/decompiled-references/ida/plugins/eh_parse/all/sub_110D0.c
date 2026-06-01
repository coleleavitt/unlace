unsigned __int64 __fastcall sub_110D0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 *v8; // rdi
  __int64 v11[2]; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+21h] [rbp-47h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)xrefblk_t_first_to(v11, a4, 0) )
  {
    while ( v12 )
    {
      if ( (a5 & 2) == 0 )
        goto LABEL_5;
      v8 = a1;
      if ( (unsigned __int8)(v13 - 16) > 1u )
        v8 = a2;
      if ( v8 )
      {
        sub_E100(v8, v11[0], a5 & 0xFB);
        if ( !(unsigned __int8)xrefblk_t_next_to(v11) )
          return v14 - __readfsqword(0x28u);
      }
      else
      {
LABEL_5:
        if ( !(unsigned __int8)xrefblk_t_next_to(v11) )
          return v14 - __readfsqword(0x28u);
      }
    }
    if ( a3 != nullptr && (a5 & 5) != 0 )
      sub_E100(a3, v11[0], a5);
    goto LABEL_5;
  }
  return v14 - __readfsqword(0x28u);
}

