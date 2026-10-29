__int64 __fastcall sub_337D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rbx
  unsigned __int16 v6; // ax
  __int64 func; // rax
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edx
  __int64 flags; // rax
  _QWORD v13[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-50h] BYREF
  __int64 v15; // [rsp+18h] [rbp-48h] BYREF
  __int128 v16; // [rsp+20h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-30h]

  v13[0] = a4;
  v17 = __readfsqword(0x28u);
  v5 = a5;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  if ( !a5 )
    v5 = &v15;
  copy_tinfo_t(&v14, a3);
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 <= 0xE5u )
  {
    if ( v6 <= 0xAEu )
    {
      if ( v6 <= 0x21u )
      {
        if ( v6 > 0x1Du )
        {
          func = get_func(*(_QWORD *)(a2 + 16));
          if ( *(_BYTE *)(a2 + 81) == 1 )
          {
            v11 = *(unsigned __int16 *)(a2 + 86);
            if ( v11 == 29
              || func && (*(_BYTE *)(func + 16) & 0x10) != 0 && v11 == ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 30 : 17) )
            {
              flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
              if ( (unsigned __int8)is_stkvar(flags, 2) )
              {
                if ( (unsigned __int8)remove_tinfo_pointer(&v14, v13, 0) )
                {
                  apply_tinfo_to_stkarg(a2, a2 + 120, *(_QWORD *)(a2 + 128), &v14, v13[0]);
                  goto LABEL_17;
                }
              }
            }
          }
        }
LABEL_8:
        LODWORD(v5) = 0;
        goto LABEL_9;
      }
      if ( v6 == 57 )
        goto LABEL_16;
      v10 = v6 - 120;
      if ( (unsigned __int16)(v6 - 120) > 0x36u )
        goto LABEL_8;
      if ( ((1LL << v10) & 0x7FFFC0000080BCLL) == 0 )
      {
        if ( ((1LL << v10) & 0x17943) == 0 )
          goto LABEL_8;
        goto LABEL_16;
      }
LABEL_17:
      LODWORD(v5) = 1;
      goto LABEL_9;
    }
    v9 = 1LL << ((unsigned __int8)v6 + 81);
    if ( (v9 & 0x6FFFF300000006LL) != 0 )
      goto LABEL_17;
    if ( (v9 & 0x20100001) == 0 )
    {
      if ( v6 != 205 )
        goto LABEL_8;
      goto LABEL_15;
    }
LABEL_16:
    sub_33A80(a1, a2, a2 + 80, &v14, v13[0], v5);
    goto LABEL_17;
  }
  if ( v6 == 495 )
  {
LABEL_15:
    if ( !(unsigned __int8)remove_tinfo_pointer(&v14, v13, 0) )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( v6 > 0x1EFu )
  {
    if ( v6 != 543 && v6 != 838 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( v6 > 0x146u )
  {
    if ( v6 != 473 )
      goto LABEL_8;
    goto LABEL_16;
  }
  LOBYTE(v5) = v6 > 0x13Du;
LABEL_9:
  clear_tinfo_t(&v14);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return (unsigned int)v5;
}

