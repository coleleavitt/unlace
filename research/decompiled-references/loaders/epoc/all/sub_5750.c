unsigned __int64 __fastcall sub_5750(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  char *v8; // rcx
  int v9; // ebx
  unsigned int v10; // eax
  char *v11; // r15
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  int v15; // r8d
  _BYTE *v17; // [rsp+8h] [rbp-460h]
  unsigned int v19; // [rsp+14h] [rbp-454h]
  char s[1024]; // [rsp+20h] [rbp-448h] BYREF
  _BYTE v21[8]; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+428h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  get_root_filename(s, 1024);
  v8 = strrchr(s, 46);
  if ( !v8 )
    v8 = &s[strlen(s)];
  if ( a4 )
  {
    v9 = 1;
    v17 = (_BYTE *)(v21 - v8);
    v10 = a5;
    v11 = v8;
    v19 = v10;
    do
    {
      v13 = a2[3];
      v14 = a3;
      if ( v13 <= 0xFFFFFFFFFFFFFFFBLL && a2[1] >= v13 + 4 )
      {
        v15 = *(_DWORD *)(*a2 + v13);
        a2[3] = v13 + 4;
        v14 = a3 + v15;
      }
      qsnprintf(v11, v17, "_%d", v9);
      if ( (*(_BYTE *)(a1 + 12) & 8) != 0 )
        sub_5690(0x57u, v14, v14 & 1);
      v12 = v9++;
      add_entry(v12, v14 & 0xFFFFFFFE, s, v19, 1);
    }
    while ( a4 >= v9 );
  }
  return v22 - __readfsqword(0x28u);
}
