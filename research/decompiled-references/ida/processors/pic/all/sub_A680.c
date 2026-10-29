__int64 __fastcall sub_A680(__m128 a1, double a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v4 = *a4;
  v8 = __readfsqword(0x28u);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v4 + 72))(a4);
  if ( !(unsigned __int8)choose_ioport_device() )
    return 0;
  netnode_supset();
  v7 = 7;
  if ( !(unsigned __int8)sub_9B80(7, &v7) )
  {
    if ( !v5[33] )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_A4C0((__int64)v5, v7, a1, a2);
  if ( v5[33] )
  {
LABEL_4:
    v5[34] = 0;
    qfree();
    v5[33] = 0;
    v5[35] = 0;
  }
LABEL_5:
  if ( v5[29] != -1 )
    sub_A2A0(v5, a1, a2);
  return 0;
}

