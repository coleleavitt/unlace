__int64 __fastcall sub_264F0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  int v3; // r12d
  unsigned int v4; // ebx
  const char *v5; // rdi
  size_t v7; // rdx
  _WORD v8[2]; // [rsp+0h] [rbp-1448h] BYREF
  int v9; // [rsp+4h] [rbp-1444h]
  _DWORD v10[1288]; // [rsp+8h] [rbp-1440h] BYREF
  unsigned __int64 v11; // [rsp+1428h] [rbp-20h]

  v2 = 0;
  v11 = __readfsqword(0x28u);
  v8[0] = 0;
  v9 = 0;
  memset(v10, 0, sizeof(v10));
  v3 = *(_DWORD *)(a1 + 1144);
  if ( !a2 )
    v2 = *(_QWORD *)(a1 + 1136);
  sub_1D740((__int64)"Looking for GNU DWARF file at \"%s\"... ", (const char *)(a1 + 8));
  if ( (unsigned __int8)qfileexist(a1 + 8)
    && (unsigned __int8)sub_26470((__int64)v8, a1 + 8, v3)
    && (!v2
     || (v7 = *(unsigned __int16 *)(v2 + 8), (_WORD)v7 == LOWORD(v10[0]))
     && !memcmp((char *)v10 + 2, (const void *)(v2 + 10), v7)) )
  {
    v4 = 1;
    v5 = "found!\n";
  }
  else
  {
    v4 = 0;
    v5 = "no.\n";
  }
  sub_17110((__int64)v5);
  return v4;
}
