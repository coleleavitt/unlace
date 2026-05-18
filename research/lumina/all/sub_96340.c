__int64 __fastcall sub_96340(char *a1, unsigned __int8 a2, char *a3, char *a4, __int64 a5, __int64 a6, const char *a7)
{
  char *v10; // rax
  const char *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rax
  void *v16; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+10h] [rbp-F0h]
  void *v18; // [rsp+28h] [rbp-D8h]
  __int128 v19; // [rsp+30h] [rbp-D0h]
  void *ptr; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  void *src; // [rsp+78h] [rbp-88h]
  const char *v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v30; // [rsp+C0h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  sub_95680((__int64)&v16, a1, "", a5, a6, a7);
  v18 = nullptr;
  v19 = 0;
  if ( (unsigned __int8)sub_19AD90(a3) )
  {
    a4 = (char *)s1;
    if ( (_QWORD)v19 )
      a4 = (char *)v18;
  }
  v21 = 0;
  ptr = nullptr;
  sub_95680((__int64)&ptr, a4, "", a5, a6, a7);
  v22 = 80;
  v10 = (char *)s1;
  v26 = -1;
  v27 = -1;
  v29 = 0;
  v28 = 0;
  if ( (_QWORD)v17 )
    v10 = (char *)v16;
  src = v10;
  v11 = s1;
  if ( (_QWORD)v21 )
    v11 = (const char *)ptr;
  v25 = v11;
  v23 = a2 << 8;
  v12 = off_23EA48();
  if ( !v12 )
  {
    v14 = sub_18FD50(src);
    sub_18FAC0(0, v14);
  }
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    j__free(ptr);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    j__free(v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    j__free(v16);
  }
  return v12;
}
