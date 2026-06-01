__int64 __fastcall sub_29C1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v6; // r15
  int *v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 tinfo_size; // rcx
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_3835A0(50469);
    BUG();
  }
  v3 = *(__int64 **)a1;
  v19[0] = 0;
  if ( !v3 )
  {
    if ( v2 != 1 )
      goto LABEL_15;
    v18 = 24;
    goto LABEL_37;
  }
  v6 = (__int64 *)v3[1];
  if ( v2 != 1 || (v18 = (__int64)(v6 + 3), v6[3]) )
  {
    if ( v3 == v6 )
      goto LABEL_15;
LABEL_5:
    while ( 1 )
    {
      v7 = (int *)(v6 + 3);
      if ( (unsigned __int8)sub_29B780((__int64)(v6 + 4), a2, v19) )
      {
        v8 = *(_QWORD *)v7;
        tinfo_size = get_tinfo_size();
        if ( (int)tinfo_size > 0 && !(v8 % tinfo_size) )
          break;
      }
LABEL_10:
      v10 = *(__int64 **)a1;
LABEL_11:
      if ( (*v6 & 2) != 0 )
      {
LABEL_14:
        if ( v10 == v6 )
          goto LABEL_15;
      }
      else
      {
        v11 = (__int64 *)v6[2];
        if ( (*(_BYTE *)v11 & 2) == 0 )
        {
          do
          {
            v6 = v11;
            v11 = (__int64 *)v11[1];
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
          goto LABEL_14;
        }
        v15 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
        {
          while ( (__int64 *)v15[2] == v6 )
          {
            v6 = v15;
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v16 & 2) != 0 )
            {
              v6 = (__int64 *)v17;
              if ( v10 != (__int64 *)v17 )
                goto LABEL_5;
              goto LABEL_15;
            }
            v15 = (__int64 *)v17;
          }
        }
        v6 = v15;
        if ( v10 == v15 )
          goto LABEL_15;
      }
    }
    if ( (get_tinfo_property() & 0x2F) != 0xD )
    {
      v10 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
        {
          if ( v10[3] )
            goto LABEL_11;
          goto LABEL_9;
        }
        v14 = v10[1];
      }
      else
      {
        v14 = 0;
      }
      if ( *(_QWORD *)(v14 + 24) && *(_QWORD *)(a1 + 8) <= 2u )
        goto LABEL_11;
    }
LABEL_9:
    if ( (int)(sub_29C080((__int64 **)a1, a2, (int)v19, *v7) + 1) > 0 )
      goto LABEL_38;
    goto LABEL_10;
  }
LABEL_37:
  if ( (unsigned __int8)sub_29B780(v18 + 8, a2, v19) )
  {
LABEL_38:
    copy_tinfo_t();
    v12 = 1;
    goto LABEL_16;
  }
LABEL_15:
  v12 = 0;
LABEL_16:
  clear_tinfo_t();
  return v12;
}

