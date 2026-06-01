unsigned __int64 __fastcall sub_3720(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  unsigned __int16 word; // ax
  __int64 v9; // r14
  __int64 v10; // rbp
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v6 = sub_3040(a1, a2);
  create_data(v6, 0x10000000, 2, -1);
  word = get_word(v6);
  if ( (unsigned __int16)(word - 1) <= 0xFFFDu )
  {
    v9 = word;
    v10 = sub_3040(a1, word);
    if ( (get_flags_ex(v10, 4) & 0xC000) == 0x4000 )
    {
      if ( !a4 )
      {
LABEL_5:
        v12 = 1;
        v11[1] = v10 - v9;
        v11[0] = -1;
        v11[2] = 0;
        ((void (__fastcall *)(__int64, __int64, _QWORD *))op_offset_ex)(v6, 15, v11);
        set_cmt(v6, a3, 0);
        return v13 - __readfsqword(0x28u);
      }
    }
    else
    {
      set_name(v10, a3, 1);
      if ( !a4 )
        goto LABEL_5;
    }
    auto_mark_range(v10, v10 + 1, 20);
    goto LABEL_5;
  }
  return v13 - __readfsqword(0x28u);
}
