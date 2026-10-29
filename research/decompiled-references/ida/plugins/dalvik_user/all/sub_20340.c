__int64 __fastcall sub_20340(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-429h]
  char v4[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+418h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_7FBB8 )
  {
    if ( !*(_BYTE *)qword_7FBB0 )
    {
LABEL_3:
      result = sub_1E0A0(a1, "host:transport-any");
      if ( !(_BYTE)result )
        goto LABEL_4;
      return sub_1FF60(a1, a2);
    }
  }
  else if ( !byte_7FAF1 )
  {
    goto LABEL_3;
  }
  qsnprintf();
  result = sub_1E0A0(a1, v4);
  if ( (_BYTE)result )
    return sub_1FF60(a1, a2);
LABEL_4:
  if ( a2 )
  {
    if ( *a2 )
    {
      a2[1] = 0;
      v3 = result;
      qfree();
      *a2 = 0;
      result = v3;
      a2[2] = 0;
    }
  }
  return result;
}

