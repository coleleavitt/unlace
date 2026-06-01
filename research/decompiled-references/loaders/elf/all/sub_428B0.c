unsigned __int64 __fastcall sub_428B0(__int64 a1, __int64 a2, unsigned int a3, const char *a4)
{
  unsigned int v4; // ebx
  const char *v5; // r8
  _BYTE v7[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v4 = a3;
  v8 = __readfsqword(0x28u);
  v5 = a4;
  if ( !a4 )
    v5 = "";
  BYTE1(v4) = BYTE1(a3) | 0x18;
  qsnprintf(v7, 1024, "%s%s", a2, v5);
  if ( (unsigned __int8)set_name(a1, v7, v4) )
    make_name_auto(a1);
  return v8 - __readfsqword(0x28u);
}
