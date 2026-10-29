unsigned __int64 __fastcall sub_3A10(__int64 a1)
{
  __int64 that; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebp
  __int16 flags; // dx
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 idati; // [rsp+10h] [rbp-48h]
  char *v9; // [rsp+18h] [rbp-40h]
  __int16 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = "GUID";
  v7 = 0;
  v10 = 256;
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
  {
    v10 = 256;
    v9 = "_GUID";
    idati = get_idati();
    create_tinfo();
  }
  sub_3140((__int64)"Scanning for CLSIDs...", 61);
  that = getinf();
  v4 = 0;
  while ( that != -1 )
  {
    flags = get_flags_ex();
    if ( (flags & 0x200) == 0 )
      v4 += (unsigned __int8)sub_3540(a1, that, flags, (__int64)&v7);
    that = next_that();
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, v2, v3);
  sub_32E0((__int64)"Found %d CLSIDs\n", v4);
  clear_tinfo_t();
  return v11 - __readfsqword(0x28u);
}

