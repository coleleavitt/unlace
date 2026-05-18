__int64 __fastcall sub_172010(__int64 *a1, _BYTE *a2, unsigned __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  void *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  char *v13; // rdx
  void *v14; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v17 = 0;
  sub_168010((__int64 *)&ptr, a2, a3, 0, 0x10u, a6);
  v7 = v17;
  if ( !(_QWORD)v17 )
  {
    v10 = ptr;
    if ( !ptr )
      return 1;
    goto LABEL_12;
  }
  v8 = 0;
  do
  {
    while ( 1 )
    {
      sub_2AAE0(a1);
      if ( v8 < v7 - 1 )
        break;
      if ( v7 == ++v8 )
        goto LABEL_6;
    }
    sub_171F20(a1, a4);
    ++v8;
  }
  while ( v7 != v8 );
LABEL_6:
  v9 = (char *)ptr;
  v10 = ptr;
  if ( ptr )
  {
    v11 = v17;
    if ( (_QWORD)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v9[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v14);
          v9 = (char *)ptr;
        }
        ++v12;
        v10 = v9;
      }
      while ( v11 != v12 );
    }
LABEL_12:
    *(_QWORD *)&v17 = 0;
    j__free(v10);
  }
  return 1;
}
