unsigned __int64 __fastcall sub_49D00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rdx
  char *v11; // r8
  const char *v12; // rcx
  char v13; // al
  const char *v14; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-D0h]
  _BYTE v16[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp-30h]

  v4 = *(unsigned __int8 *)(a3 + 184);
  v5 = *(_QWORD *)(a2 + 16);
  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm(v4) && !(unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 120), v5, 257) )
  {
    v14 = nullptr;
    v15 = 0;
    get_segm_name(&v14, a3, 0);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) == 1 )
    {
      if ( *(_BYTE *)(a3 + 42) )
      {
        v11 = "";
        if ( *(_BYTE *)(a3 + 42) <= 0x10u )
          v11 = off_92A20[*(unsigned __int8 *)(a3 + 42)];
      }
      else
      {
        v13 = *(_BYTE *)(a3 + 184);
        v11 = "[RW]";
        if ( v13 != 3 )
        {
          v11 = "[BS]";
          if ( v13 != 9 )
            v11 = "[PR]";
        }
      }
      v12 = s1;
      if ( (_QWORD)v15 )
        v12 = v14;
      sub_48290(a2, 0xFFFF, (__int64)&unk_68A00, v12, v11);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 184) == 2 && get_sreg(v5, 32) == 1 )
        v8 = ",text_vle";
      else
        v8 = "";
      v9 = s1;
      if ( (_QWORD)v15 )
        v9 = v14;
      sub_48290(a2, 0xFFFF, (__int64)&unk_68A14, v9, v8);
    }
    v10 = *(_QWORD *)(a3 + 32);
    if ( v10 )
    {
      btoa64(v16, 136, v10, 0);
      sub_48290(a2, 0xFFFF, (__int64)&unk_68A28, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v16);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, 0xFFFF, v10, 0.0);
    }
  }
  return v17 - __readfsqword(0x28u);
}
