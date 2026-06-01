__int64 __fastcall sub_2F1C0(__int64 *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  unsigned int v4; // edx
  __int64 idati; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v1 = *((_DWORD *)a1 + 12);
  if ( v1 == 2 )
  {
    v4 = *((_DWORD *)a1 + 16);
    idati = a1[7];
    v8 = 0;
    WORD4(v10) = 257;
    *(_QWORD *)&v10 = v4;
    if ( !idati )
      idati = get_idati();
    v9 = idati;
    v2 = create_tinfo(&v8, 61, 189, &v9);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = (unsigned int)get_tinfo_property(v8, 3) == 1;
    goto LABEL_8;
  }
  v2 = 0;
  if ( v1 == 3 )
  {
    v6 = a1[1];
    v7 = *a1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v2 = sub_5D750(a1 + 6, &v8, v7, v6, &v9, 0);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = (unsigned int)get_tinfo_property(v8, 3) == 1;
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
LABEL_8:
    clear_tinfo_t(&v8);
  }
  return v2;
}
