__int64 __fastcall sub_18790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rbx
  unsigned __int16 v6; // ax
  __int64 func; // rax
  unsigned int v8; // ebx
  int v10; // edx
  __int64 flags; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-50h] BYREF
  __int64 v14; // [rsp+18h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-40h]
  unsigned __int64 v16; // [rsp+30h] [rbp-30h]

  v12[0] = a4;
  v16 = __readfsqword(0x28u);
  v5 = a5;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  if ( !a5 )
    v5 = &v14;
  copy_tinfo_t(&v13, a3);
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 > 0x31u )
  {
    if ( v6 != 123 && (v6 != 162 && v6 != 122 || !(unsigned __int8)remove_tinfo_pointer(&v13, v12, 0)) )
      goto LABEL_8;
  }
  else if ( v6 <= 0x2Fu )
  {
    if ( v6 > 0xFu )
    {
      if ( v6 == 19 )
      {
        func = get_func(*(_QWORD *)(a2 + 16));
        if ( *(_BYTE *)(a2 + 81) == 1 )
        {
          v10 = *(unsigned __int16 *)(a2 + 86);
          if ( v10 == 2 || func && (*(_BYTE *)(func + 16) & 0x10) != 0 && v10 == 8 )
          {
            flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
            if ( (unsigned __int8)is_stkvar(flags, 2) )
            {
              if ( (unsigned __int8)remove_tinfo_pointer(&v13, v12, 0) )
              {
                apply_tinfo_to_stkarg(a2, a2 + 120, *(_QWORD *)(a2 + 128), &v13, v12[0]);
                goto LABEL_17;
              }
            }
          }
        }
      }
LABEL_8:
      v8 = 0;
      goto LABEL_9;
    }
    if ( v6 <= 0xAu )
      goto LABEL_8;
  }
  sub_18980(a1, a2, a2 + 80, &v13, v12[0], v5);
LABEL_17:
  v8 = 1;
LABEL_9:
  clear_tinfo_t(&v13);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v8;
}

