__int64 __fastcall sub_7890(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rax
  const char *v6; // rdi
  unsigned int v7; // ebx
  char v9; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v10; // [rsp+428h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)v3 )
  {
    if ( (!*(_BYTE *)(a1 + 24) || !strrchr(a3, 91)) && !strrchr(a3, 46) )
      strlen(a3);
    qstrncpy();
    v6 = &v9;
    if ( (unsigned __int8)idb_utf8() )
      v6 = s1;
    return strcasecmp(v6, **(const char ***)(a1 + 16)) != 0 ? 0xFFFFFFFE : 0;
  }
  else
  {
    v7 = 0;
    (*(void (__fastcall **)(_QWORD, const char *, _QWORD))(v3 + 8))(0, a3, *(_QWORD *)(v3 + 16));
  }
  return v7;
}
