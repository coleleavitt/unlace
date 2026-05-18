__int64 __fastcall sub_326A0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r12
  void *v4; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+2Ch] [rbp-4Ch]
  char *v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v8 = 12;
  v11 = 0;
  v7 = &off_236F18;
  v2 = 1;
  v10 = nullptr;
  if ( a2 )
    v2 = (a2 <= 0) + 2;
  v9 = v2;
  sub_29920(&v10);
  v3 = ((_QWORD)v11 == 0) + (_QWORD)v11 - 1LL;
  sub_306F0((__int64)ptr, a1, (unsigned __int8 *)&v7);
  v4 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)(a1 + 192) + 16LL))(a1 + 192, v8, ptr);
  j__free(v4);
  if ( a2 == 52 )
    exit(1);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    j__free(ptr[0]);
  }
  sub_66010(&v7);
  return v3;
}
