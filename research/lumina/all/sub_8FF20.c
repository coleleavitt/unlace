__int64 __fastcall sub_8FF20(__int64 a1, unsigned __int8 *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx

  if ( (unsigned int)sub_8FE90(a1, a2) )
    return sub_8ACB0((_QWORD *)a1, 0, 10, (_BYTE *)(a1 + 288), v2, v3);
  v5 = sub_8FC10(a1, a2[8], 0);
  v8 = sub_8ACB0((_QWORD *)a1, v5, 10, (_BYTE *)(a1 + 288), v6, v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return v8;
}
