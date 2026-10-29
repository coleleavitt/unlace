__int64 __fastcall sub_CBD0(__int64 a1)
{
  char v1; // r13
  unsigned int v2; // r12d
  _QWORD *first_seg; // rbx
  __int64 v4; // rbp
  char *v5; // rax
  int _32bit; // eax
  bool v7; // bp
  unsigned int v8; // r14d
  char **v10; // r15
  const char *v11; // r14
  const char *v12; // rbp
  char *v13; // rax
  const char *v14; // rbp
  int v15; // eax
  unsigned int v16; // ebx
  const char *v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+28h] [rbp-60h] BYREF
  _BYTE haystack[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = 0;
  v20 = __readfsqword(0x28u);
  first_seg = (_QWORD *)get_first_seg();
  if ( !first_seg )
    return 0;
  while ( 1 )
  {
    memset(haystack, 0, sizeof(haystack));
    if ( !get_segm_name(haystack, first_seg, 0) )
      break;
    if ( v2
      || !*(_QWORD *)&haystack[8]
      || (v4 = *(_QWORD *)haystack, (v5 = strstr(*(const char **)haystack, "__objc_imageinfo")) == nullptr)
      || &v5[-v4] == (char *)-1LL )
    {
      if ( !v1 )
      {
        v10 = off_279E0;
        while ( 1 )
        {
          v11 = *v10;
          v14 = v10[2];
          v17 = v10[1];
          v15 = getinf(5);
          if ( v15 == 11 )
          {
            v11 = v17;
          }
          else if ( v15 != 18 )
          {
            v11 = v14;
          }
          v12 = s1;
          if ( *(_QWORD *)&haystack[8] )
            v12 = *(const char **)haystack;
          v13 = strstr(v12, v11);
          if ( v13 )
          {
            if ( v13 - v12 != -1 )
              break;
          }
          v10 += 3;
          if ( v10 == (char **)&unk_27B48 )
            goto LABEL_18;
        }
        sub_CB10((__int64)"detected swift segment: %s\n", v12);
        v1 = 1;
      }
LABEL_18:
      v7 = v2 != 0;
    }
    else
    {
      _32bit = get_32bit(*first_seg + 4LL);
      if ( _32bit == -1 )
        break;
      v7 = 0;
      v8 = BYTE1(_32bit);
      if ( (unsigned int)BYTE1(_32bit) - 1 <= 9 )
      {
        sub_CB10((__int64)"detected swift version %d\n", BYTE1(_32bit));
        v18 = v8;
        netnode_supset(*(_QWORD *)(a1 + 104), -1, &v18, 8, 65);
        v2 = v8;
        v7 = 1;
      }
    }
    if ( *(_QWORD *)haystack )
    {
      *(_QWORD *)&haystack[8] = 0;
      qfree(*(_QWORD *)haystack);
    }
    first_seg = (_QWORD *)get_next_seg(*first_seg);
    if ( !first_seg )
      goto LABEL_22;
LABEL_13:
    if ( v1 && v7 )
      goto LABEL_15;
  }
  if ( *(_QWORD *)haystack )
  {
    *(_QWORD *)&haystack[8] = 0;
    qfree(*(_QWORD *)haystack);
  }
  v7 = v2 != 0;
  first_seg = (_QWORD *)get_next_seg(*first_seg);
  if ( first_seg )
    goto LABEL_13;
LABEL_22:
  if ( !v1 && !v7 )
    return 0;
LABEL_15:
  *(_OWORD *)haystack = 0;
  set_compiler(haystack, 4, "swift");
  if ( v2 - 1 > 3 )
  {
    v16 = add_encoding("UTF-8");
    if ( v16 != (unsigned int)get_default_encoding_idx(1) )
    {
      set_default_encoding_idx(1, v16);
      sub_CB10((__int64)"changed the default encoding to UTF-8\n");
    }
    sub_7300(2, 0.0);
    sub_7300(8, 0.0);
    sub_7300(1, 0.0);
  }
  return 1;
}

