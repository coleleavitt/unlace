__int64 sub_2E50()
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int8 v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( qlread(qword_8220, &v3, 1) == 1 )
  {
    v1 = v3;
    if ( v3 )
    {
      v2 = v3;
      if ( v2 != qlread(qword_8220, &stream, v3) )
        goto LABEL_2;
      v1 = v3;
    }
    *((_BYTE *)&qword_8220 + v1 + 138) = 0;
    return 0;
  }
LABEL_2:
  if ( (int)sub_2A20(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
    sub_2B00(0);
  return 1;
}
