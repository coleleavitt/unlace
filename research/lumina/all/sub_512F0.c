__int64 __fastcall sub_512F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, const char **a5)
{
  char *v7; // rax
  __int64 v8; // r14
  unsigned int v9; // ebx
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  int v13; // [rsp+2Ah] [rbp-36h]
  __int16 v14; // [rsp+2Eh] [rbp-32h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = WORD2(a3);
  v13 = a3;
  ptr = nullptr;
  v12 = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 1, 6);
  v7 = (char *)ptr + 6 * v12;
  *(_DWORD *)v7 = v13;
  *((_WORD *)v7 + 2) = v14;
  v8 = a1[53];
  *(_QWORD *)&v12 = v12 + 1;
  sub_19A520(v8);
  v9 = sub_50FA0(a1, a5, (int **)&ptr, *a4);
  sub_19A570(v8);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    j__free(ptr);
  }
  return v9;
}
