unsigned __int64 __fastcall sub_2930(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int8 v4; // dl
  unsigned __int16 v6; // [rsp+Eh] [rbp-43Ah] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v3 = a3;
  qlseek(a1, a2, 0);
  if ( a2 >= (unsigned int)v3 )
    v3 = 0xFFFFFFFFLL;
  if ( v3 > qword_B288 )
    v3 = qword_B288;
  while ( qlseek(a1, 0, 1) < v3 )
  {
    lread(a1, &v6, 1);
    v4 = v6 & 0x7F;
    LOBYTE(v6) = v4;
    if ( !v4 )
      break;
    lread(a1, v7, v4);
    v7[(unsigned __int8)v6] = 0;
    lread(a1, &v6, 2);
    if ( v6 )
      rename_entry(v6, v7, 1);
  }
  return v8 - __readfsqword(0x28u);
}
