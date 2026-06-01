unsigned __int64 __fastcall sub_A29F0(char *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  bool v6; // zf
  __int64 v7; // rsi
  int v8; // r13d
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  const char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v4 = (__int64)a1;
  v15 = __readfsqword(0x28u);
  v13 = "Registering";
  v14 = ((__int64 (*)(void))qtime64)();
  sub_A2370(a1, a2, a3);
  if ( (debug & 0x400000) != 0 )
  {
    v11 = ((__int64 (*)(void))qtime64)();
    if ( (debug & 0x400000) != 0 )
    {
      a1 = "init_file(this=%p), phase \"%s\" took %u.%06u seconds\n";
      sub_88B80(
        (__int64)"init_file(this=%p), phase \"%s\" took %u.%06u seconds\n",
        &v13,
        v13,
        (unsigned __int64)(v11 - v14) >> 32,
        v11 - v14);
    }
  }
  v6 = *(_QWORD *)(v4 + 112) == 0;
  v7 = *(unsigned int *)(v4 + 8);
  *(_DWORD *)(v4 + 240) = 0;
  if ( !v6 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v8;
      a1 = *(char **)(*(_QWORD *)(v4 + 104) + 8 * v9);
      v7 = (unsigned int)sub_83730((__int64)a1, v7);
      v9 = v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(v4 + 112) );
  }
  v13 = "DIEs mappings";
  v14 = qtime64(a1, v7);
  sub_961F0(v4, a2);
  if ( (debug & 0x400000) != 0 )
  {
    v12 = qtime64(v4, a2);
    if ( (debug & 0x400000) != 0 )
      sub_88B80(
        (__int64)"init_file(this=%p), phase \"%s\" took %u.%06u seconds\n",
        &v13,
        v13,
        (unsigned __int64)(v12 - v14) >> 32,
        v12 - v14);
  }
  return v15 - __readfsqword(0x28u);
}
