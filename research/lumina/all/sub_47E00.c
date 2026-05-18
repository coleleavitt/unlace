__int64 __fastcall sub_47E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const char *v7; // rdi
  int v9; // [rsp+Ch] [rbp-1Ch] BYREF
  int v10; // [rsp+10h] [rbp-18h] BYREF
  int v11; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v7 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v7 = *(const char **)a1;
  if ( (unsigned int)sub_19DA80(
                       (_DWORD)v7,
                       (unsigned int)"%d.%d%n",
                       (unsigned int)&v9,
                       (unsigned int)&v10,
                       (unsigned int)&v11,
                       a6) == 2
    && v11 == (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL )
  {
    return (unsigned int)(v10 + 100 * v9);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
