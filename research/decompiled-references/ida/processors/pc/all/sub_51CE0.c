unsigned __int64 __fastcall sub_51CE0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  int flags; // eax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v4 = *a2;
  v11 = __readfsqword(0x28u);
  v6 = sub_51250(v4, 1u, 0);
  v10 = v6;
  if ( !v6 )
  {
LABEL_6:
    create_data();
    goto LABEL_7;
  }
  v7 = v6;
  if ( v6 != -1 )
  {
    if ( a3 )
    {
      flags = get_flags_ex();
      if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x20000000 )
      {
        sub_519A0(v7, 4, 0);
        sub_51CE0(a1, &v10, 0);
      }
    }
    if ( !*(_BYTE *)(a1 + 5504) )
      op_offset();
    goto LABEL_6;
  }
LABEL_7:
  *a2 += 4;
  return v11 - __readfsqword(0x28u);
}
