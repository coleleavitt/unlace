unsigned __int64 __fastcall sub_B7DA0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rbp
  char *v6; // r14
  int v7; // edi
  __int16 v9; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v10[1030]; // [rsp+2h] [rbp-436h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = 24415;
  if ( a3 )
  {
    v4 = a2;
    v5 = &a2[a3];
    v6 = v10;
    do
    {
      v7 = *v4++;
      if ( !(_BYTE)v7 )
        break;
      *v6++ = toupper(v7);
    }
    while ( v4 != v5 );
  }
  else
  {
    v6 = v10;
  }
  strcpy(v6, "__");
  if ( (word_2439A4 & 0x80u) != 0 )
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"cfg: define macro %s\n", (const char *)&v9);
  sub_180010(a1, &v9, "", 0, 0);
  return v11 - __readfsqword(0x28u);
}
