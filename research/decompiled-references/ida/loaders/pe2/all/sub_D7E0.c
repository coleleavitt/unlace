__int64 __fastcall sub_D7E0(_QWORD *a1, unsigned int a2, __int64 a3, char *a4, const char *a5)
{
  __int64 v7; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  char v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int16 v21; // ax
  char v23; // al
  __int64 v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  char v32; // [rsp+Eh] [rbp-5Ah]
  char v33; // [rsp+Eh] [rbp-5Ah]
  _QWORD v34[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = a1[3];
  v34[3] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v7 + 16) & (qword_379D8 + a2);
  v10 = *(unsigned __int16 *)(a1[2] + 4LL);
  v11 = (unsigned int)(v10 - 448);
  if ( (unsigned __int16)(v10 - 448) <= 4u )
  {
    v12 = 21;
    if ( _bittest64(&v12, v11) )
    {
LABEL_3:
      v13 = v9 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_4;
    }
    goto LABEL_32;
  }
  if ( (_WORD)v10 == 614 )
    goto LABEL_3;
  if ( (unsigned __int16)v10 <= 0x266u )
  {
    LOWORD(v10) = v10 - 354;
    if ( (unsigned __int16)v10 <= 7u )
    {
      v30 = 211;
      if ( _bittest64(&v30, v10) )
        goto LABEL_3;
    }
LABEL_32:
    v13 = v9;
    goto LABEL_4;
  }
  v13 = v9;
  if ( (((_WORD)v10 - 870) & 0xFEFF) == 0 )
    goto LABEL_3;
LABEL_4:
  sub_8100((__int64)v34, a4);
  sub_97C0();
  if ( *a4 )
  {
    set_import_name();
    v14 = 0;
    if ( a5 )
      goto LABEL_6;
LABEL_21:
    v33 = v14;
    v23 = segtype();
    v14 = v33;
    if ( v23 != 3 )
    {
      v24 = a1[4];
      v25 = (_QWORD *)(v24 + 8);
      v26 = *(_QWORD **)(v24 + 16);
      if ( !v26 )
        goto LABEL_29;
      v27 = v25;
      do
      {
        while ( 1 )
        {
          v28 = v26[2];
          v29 = v26[3];
          if ( v26[4] >= v13 )
            break;
          v26 = (_QWORD *)v26[3];
          if ( !v29 )
            goto LABEL_27;
        }
        v27 = v26;
        v26 = (_QWORD *)v26[2];
      }
      while ( v28 );
LABEL_27:
      if ( v25 == v27 || v13 < v27[4] )
      {
LABEL_29:
        get_mangled_name_type();
        v14 = v33;
      }
    }
    goto LABEL_6;
  }
  qsnprintf();
  set_import_ordinal();
  v14 = 1;
  if ( !a5 )
    goto LABEL_21;
LABEL_6:
  v15 = *(unsigned __int16 *)(a1[2] + 4LL);
  v16 = (unsigned int)(v15 - 448);
  if ( (unsigned __int16)(v15 - 448) <= 4u )
  {
    v17 = 21;
    if ( !_bittest64(&v17, v16) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (_WORD)v15 == 614 )
    goto LABEL_8;
  if ( (unsigned __int16)v15 <= 0x266u )
  {
    LOWORD(v15) = v15 - 354;
    if ( (unsigned __int16)v15 > 7u )
      goto LABEL_9;
    v31 = 211;
    if ( !_bittest64(&v31, v15) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (((_WORD)v15 - 870) & 0xFEFF) == 0 )
  {
LABEL_8:
    v32 = v14;
    sub_D220();
    v14 = v32;
  }
LABEL_9:
  if ( v14 )
  {
    add_entry();
    set_name();
    make_name_public();
    make_name_auto();
  }
  else
  {
    add_entry();
  }
  if ( a5 )
  {
    set_entry_forwarder();
    v18 = strlen(a5);
    sub_7E60(v13, v18 + 1);
  }
  v19 = getseg();
  v20 = v19;
  if ( v19 )
  {
    v21 = *(_WORD *)(v19 + 44);
    if ( (v21 & 4) != 0 )
    {
      *(_WORD *)(v20 + 44) = v21 & 0xFFFB;
      update_segm();
    }
  }
  if ( v34[0] )
  {
    v34[1] = 0;
    qfree();
  }
  return 0;
}

