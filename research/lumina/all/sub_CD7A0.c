__int64 __fastcall sub_CD7A0(_QWORD *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rax
  _BYTE *v7; // [rsp+8h] [rbp-20h]

  v3 = a1[3];
  v4 = *(_QWORD *)(v3 + 72);
  if ( v4 )
  {
    *a2 = v4;
    if ( v4 > 0 )
    {
LABEL_3:
      *a3 = 1;
      return 0;
    }
  }
  else
  {
    v7 = a3;
    if ( (unsigned int)sub_C20C0(
                         **(_QWORD **)(*a1 + 24LL),
                         (_QWORD *)(v3 + 72),
                         (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))a3) )
    {
      *(_QWORD *)(v3 + 72) = 0;
      *a2 = 0;
      return 1;
    }
    v6 = *(_QWORD *)(v3 + 72);
    a3 = v7;
    *a2 = v6;
    if ( v6 > 0 )
      goto LABEL_3;
  }
  return 1;
}
