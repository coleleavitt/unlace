unsigned __int64 __fastcall sub_1B570(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v8; // rdi
  char v9; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 33384) = 0;
  if ( sub_1B440(a1, a2, (_BYTE *)(a1 + 33386), 0x8000, 13) )
  {
    if ( (a4 & 1) != 0 )
      set_name(a3, a1 + 33386, 6144);
    hide_name(a3);
    if ( *(char *)(a1 + 33384) > 0 && (a4 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 33336);
      v9 = *(_BYTE *)(a1 + 33384);
      netnode_supset(v8, a3, &v9, 1, 114);
    }
    if ( *(_BYTE *)(a1 + 33385) && (a4 & 4) == 0 )
      sub_7B10(a1, a3, "Strange name");
  }
  *(_BYTE *)(a1 + 33384) = -1;
  return v10 - __readfsqword(0x28u);
}

