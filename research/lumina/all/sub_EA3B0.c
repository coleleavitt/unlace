unsigned __int64 __fastcall sub_EA3B0(__int64 a1)
{
  struct stat64 v2; // [rsp+0h] [rbp-138h] BYREF
  struct stat64 stat_buf; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v4; // [rsp+128h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( *(char *)(a1 + 30) >= 0 )
  {
    if ( (unsigned int)off_2411E0(*(_DWORD *)(a1 + 24), &v2) )
    {
      sub_E8BB0(0x1Cu, "cannot fstat db file %s", *(const char **)(a1 + 56));
    }
    else if ( v2.st_nlink )
    {
      if ( v2.st_nlink > 1 )
      {
        sub_E8BB0(0x1Cu, "multiple links to file: %s", *(const char **)(a1 + 56));
      }
      else if ( *(_QWORD *)(a1 + 16)
             && ((unsigned int)off_2411C8(*(char **)(a1 + 56), &stat_buf)
              || stat_buf.st_ino != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL)) )
      {
        sub_E8BB0(0x1Cu, "file renamed while open: %s", *(const char **)(a1 + 56));
      }
    }
    else
    {
      sub_E8BB0(0x1Cu, "file unlinked while open: %s", *(const char **)(a1 + 56));
    }
  }
  return __readfsqword(0x28u) ^ v4;
}
