__int64 __fastcall sub_96910(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char *a9,
        __int64 a10)
{
  char *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // [rsp-10h] [rbp-C0h]
  void *ptr; // [rsp+20h] [rbp-90h] BYREF
  __int128 v20; // [rsp+28h] [rbp-88h]
  _QWORD v21[2]; // [rsp+40h] [rbp-70h] BYREF
  char v22; // [rsp+50h] [rbp-60h]
  _QWORD v23[2]; // [rsp+60h] [rbp-50h] BYREF
  char v24; // [rsp+70h] [rbp-40h]
  unsigned __int64 v25; // [rsp+78h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( !a8 )
  {
    v14 = 33;
    sub_18FAC0(0, "Currently only IDA databases can be compared");
    return v14;
  }
  ptr = nullptr;
  v20 = 0;
  sub_B79C0(&ptr, "ida");
  v21[0] = a2;
  v22 = a4;
  v21[1] = a3;
  v23[0] = a5;
  v23[1] = a6;
  v24 = a7;
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 24LL))(a10);
  v12 = (char *)s1;
  if ( (_QWORD)v20 )
    v12 = (char *)ptr;
  v13 = sub_96340(v12, 0, "VAULT_DIFF", a9, (__int64)v21, (__int64)v23, nullptr);
  if ( a10 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a10 + 8LL))(a10, v13, v16) )
    {
LABEL_8:
      v14 = 0;
      goto LABEL_9;
    }
  }
  else if ( v13 )
  {
    goto LABEL_8;
  }
  v14 = 33;
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    j__free(ptr);
  }
  return v14;
}
