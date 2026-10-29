unsigned __int64 __fastcall sub_27DA0(__int64 a1, char *a2, int a3, _DWORD *a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v13; // [rsp+10h] [rbp-468h] BYREF
  __int128 v14; // [rsp+18h] [rbp-460h]
  char v15[1024]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v16; // [rsp+438h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v15[0] = 0;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)sub_24180(v9, a6, &v13) )
    qsnprintf();
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v14 = 0;
  if ( (unsigned int)sub_24180(v10, a5, &v13) )
    qsnprintf();
  sub_264E0(a2, a3, a4, v15);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

