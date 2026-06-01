unsigned __int64 __fastcall sub_BB30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+5h] [rbp-13h] BYREF
  __int16 v6; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( (a2 & 0x8000u) != 0LL )
  {
    if ( !under_debugger )
      interr(713, a2, a3, a4);
    BUG();
  }
  if ( (unsigned __int16)a2 <= 0x7Fu )
  {
    v5 = a2;
    if ( qfwrite(a1, &v5, 1) == 1 )
      return v7 - __readfsqword(0x28u);
LABEL_6:
    sub_BA80((__int64)"File write error");
  }
  v6 = __ROL2__(a2 | 0x8000, 8);
  if ( qfwrite(a1, &v6, 2) != 2 )
    goto LABEL_6;
  return v7 - __readfsqword(0x28u);
}
