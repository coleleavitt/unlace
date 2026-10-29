__int64 __fastcall sub_192D0(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  size_t v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-60h]
  _QWORD v9[11]; // [rsp+10h] [rbp-58h] BYREF

  v9[3] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_18B00(a1, 0x1Du, 0, 0) )
    return 0;
  v9[0] = 0;
  v9[1] = -1;
  v1 = sub_18D10(a1, (int *)v9);
  if ( !(_BYTE)v1 )
    return 0;
  if ( LODWORD(v9[0]) )
  {
    if ( LODWORD(v9[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 29);
    return 0;
  }
  if ( HIDWORD(v9[0]) )
  {
    v8 = qcalloc();
    v3 = v8;
    v1 = sub_18C50(a1, v8, SHIDWORD(v9[0]));
    if ( (_BYTE)v1 )
    {
      v4 = v8 + HIDWORD(v9[0]);
      do
      {
        v5 = *(_QWORD *)v3;
        v6 = strlen((const char *)(v3 + 8));
        v7 = v3 + 8;
        v3 += 8 + v6 + 1;
        sub_22FC0(*(_QWORD *)a1, v5, v7);
      }
      while ( v3 < v4 );
    }
    qfree();
  }
  return v1;
}

