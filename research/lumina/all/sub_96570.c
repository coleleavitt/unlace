__int64 __fastcall sub_96570(
        __int64 a1,
        unsigned __int8 a2,
        char *a3,
        char *a4,
        __int64 *a5,
        __int64 a6,
        const char *a7)
{
  __int64 v11; // rsi
  char *v12; // rdi
  __int64 v13; // rbx
  void *ptr; // [rsp+10h] [rbp-50h] BYREF
  __int128 v17; // [rsp+18h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v11 = *a5;
  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v17 = 0;
  if ( (unsigned __int8)sub_B7BE0(&ptr, v11, a1) )
  {
    v12 = (char *)s1;
    if ( (_QWORD)v17 )
      v12 = (char *)ptr;
    v13 = sub_96340(v12, a2, a3, a4, (__int64)a5, a6, a7);
  }
  else
  {
    sub_18FAC0(0, "Currently only IDA databases can be merged");
    v13 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    j__free(ptr);
  }
  return v13;
}
