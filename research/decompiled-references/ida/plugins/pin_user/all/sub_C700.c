__int64 __fastcall sub_C700(const char *a1)
{
  char v1; // al
  _QWORD v3[517]; // [rsp+0h] [rbp-1028h] BYREF

  v3[513] = __readfsqword(0x28u);
  v1 = qfileexist();
  if ( (debug & 0x10000) == 0 )
  {
    if ( v1 )
      goto LABEL_4;
    return 0;
  }
  if ( !v1 )
  {
    sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", a1, "not found");
    return 0;
  }
  sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", a1, "FOUND!");
LABEL_4:
  if ( !(unsigned __int8)qdirname() )
    return 0;
  qmakepath();
  if ( !(unsigned __int8)qisdir() )
    return 0;
  return sub_BF40(v3);
}

