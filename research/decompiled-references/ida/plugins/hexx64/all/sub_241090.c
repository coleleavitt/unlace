__int64 __fastcall sub_241090(_DWORD a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a2;
  v6[1] = __readfsqword(0x28u);
  v6[0] = get_tinfo_property();
  if ( !LOBYTE(v6[0]) || (unsigned int)verify_tinfo() || sub_32DA30(v6) )
    goto LABEL_2;
  if ( a2 == -1 || (a3 & 2) == 0 && (get_tinfo_property() & 0xF) == 0xB )
  {
    v3 = 1;
    goto LABEL_3;
  }
  if ( (get_tinfo_property() & 0xF) == 0xB && (unsigned int)get_tinfo_property() != 1 )
LABEL_2:
    v3 = 0;
  else
    LOBYTE(v3) = a2 == get_tinfo_size();
LABEL_3:
  clear_tinfo_t();
  return v3;
}

