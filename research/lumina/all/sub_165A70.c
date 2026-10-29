__int64 __fastcall sub_165A70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rcx
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+8h] [rbp-60h]
  _BYTE v10[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  sub_29920((char **)&ptr);
  v2 = sub_199140(&ptr, a2);
  sub_1677A0(v10, 25, v2, 0);
  v5 = s1;
  if ( (_QWORD)v9 )
    LODWORD(v5) = (_DWORD)ptr;
  v6 = sub_16B870((unsigned int)"%s [%u] %s", (unsigned int)v10, *(_DWORD *)(a1 + 168), (_DWORD)v5, v3, v4);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    j__free(ptr);
  }
  return v6;
}
