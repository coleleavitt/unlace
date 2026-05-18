_QWORD *__fastcall sub_BC6D0(_QWORD *a1, __int64 *a2, const char *a3, __int64 a4)
{
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  if ( !strncasecmp(a3, "CREATE TABLE ", 0xDu)
    && (!strstr(a3, "CHARACTER SET=utf8mb4") || !strstr(a3, "COLLATE=utf8mb4_unicode_ci")) )
  {
    if ( !unk_2439A0 )
      sub_198E10(2796);
    BUG();
  }
  v6 = mysql_stmt_init(*(_QWORD *)(*a2 + 16));
  if ( !v6 )
    goto LABEL_9;
  v7 = strlen(a3);
  if ( (unsigned int)mysql_stmt_prepare(v6, a3, v7) )
  {
    if ( a4 )
      sub_BC630(a4, *a2);
    mysql_stmt_close(v6);
LABEL_9:
    *a1 = 0;
    return a1;
  }
  v9 = operator new(0x458u);
  v10 = *a2;
  *(_DWORD *)(v9 + 8) = 1;
  *(_QWORD *)v9 = &off_239DD8;
  *(_QWORD *)(v9 + 16) = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  *(_QWORD *)(v9 + 24) = v6;
  *(_DWORD *)(v9 + 1056) = 0;
  *(_QWORD *)(v9 + 1064) = 0;
  *(_QWORD *)(v9 + 1088) = 0;
  *a1 = v9;
  *(_OWORD *)(v9 + 1072) = 0;
  *(_OWORD *)(v9 + 1096) = 0;
  return a1;
}
