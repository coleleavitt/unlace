__int64 __fastcall sub_8D190(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // rbp
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // ebp
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-78h] BYREF
  char v16; // [rsp+8h] [rbp-70h]
  void *v17; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v16 = 25;
  v18 = 0;
  v15 = &off_237FD8;
  v17 = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v17 = (void *)sub_1987B0(&v17, 0, v4 + 1, 1);
    *(_QWORD *)&v18 = v5;
    memmove(v17, a2, v6);
    *((_BYTE *)v17 + v6) = 0;
  }
  ptr = nullptr;
  v20 = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    ptr = (void *)sub_1987B0(&ptr, 0, v7 + 1, 1);
    *(_QWORD *)&v20 = v8;
    memmove(ptr, a3, v9);
    *((_BYTE *)ptr + v9) = 0;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v15);
  v13 = sub_8ACB0((_QWORD *)(a1 + 40), v10, 10, nullptr, v11, v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  sub_9C320(&v15);
  return v13;
}
