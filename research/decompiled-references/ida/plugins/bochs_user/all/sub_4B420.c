__int64 __fastcall sub_4B420(__int64 a1, const char *a2)
{
  const char *v3; // rbx
  __int64 file_ext; // rax
  __int64 result; // rax
  char v6; // dl
  __int64 v7; // [rsp+18h] [rbp-860h]
  char v8; // [rsp+30h] [rbp-848h] BYREF
  char s1[1032]; // [rsp+430h] [rbp-448h] BYREF
  unsigned __int64 v10; // [rsp+838h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 57) )
  {
    a2 = &v8;
    qstrncpy();
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 128LL) != *(_QWORD *)(a1 + 80) + 112LL )
  {
    do
    {
      qstrncpy();
      if ( !strcasecmp(s1, a2) || (v3 = (const char *)qbasename(), !strcasecmp(v3, a2)) )
      {
        if ( (unsigned __int8)qfileexist() )
          goto LABEL_13;
      }
      else
      {
        file_ext = get_file_ext();
        if ( file_ext )
        {
          v7 = file_ext - (_QWORD)v3;
          if ( !strncasecmp(v3, a2, file_ext - (_QWORD)v3) && !a2[v7] && (unsigned __int8)qfileexist() )
            goto LABEL_13;
        }
      }
    }
    while ( std::_Rb_tree_increment() != *(_QWORD *)(a1 + 80) + 112LL );
  }
  qbasename();
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 80LL) != *(_QWORD *)(a1 + 80) + 64LL )
  {
    while ( 1 )
    {
      qmakepath();
      if ( (unsigned __int8)sub_30A50((__int64)s1, 1024, s1) )
        break;
      if ( !get_file_ext() )
      {
        qstrncat();
        if ( (unsigned __int8)sub_30A50((__int64)s1, 1024, s1) )
          break;
      }
      if ( std::_Rb_tree_increment() == *(_QWORD *)(a1 + 80) + 64LL )
        goto LABEL_21;
    }
    qstrncpy();
    qmakepath();
    strrpl();
    return 0;
  }
LABEL_21:
  v6 = qfileexist();
  result = 28;
  if ( v6 )
  {
LABEL_13:
    qstrncpy();
    qstrncpy();
    return 0;
  }
  return result;
}

